namespace FrankZhang
{

typedef unsigned int size_t;

template<typename T>
class vector
{
public:
    vector();
    ~vector();
    bool empty();
    void clear();
    size_t size();
    size_t capacity();
    void reserve(size_t size);
    void resize(size_t size);
    void push_back(const T& elem);
    const T& operator[](int index) const;
private:
    T* container_;
    size_t size_;
    size_t max_size_;
};

template<typename T>
vector<T>::vector() : max_size_(0), size_(0), container_(nullptr)
{
    if (max_size_ > 0)
        container_ = new T[max_size_];
}

template<typename T>
vector<T>::~vector()
{
    if (container_)
        delete[] container_;
}

template<typename T> bool
vector<T>::empty()
{
    return size_ == 0 ? true : false;
}

template<typename T>
void vector<T>::clear()
{
    if (container_)
    {
        delete[] container_;
        container_ = nullptr;
    }
    size_ = 0;
}

template<typename T> size_t
vector<T>::size()
{
    return size_;
}

template<typename T> size_t
vector<T>::capacity()
{
    return max_size_;
}

template<typename T> void
vector<T>::reserve(size_t size)
{
    if (size <= max_size_)
        return;

    max_size_ = size;
    T* newContainer = new T[max_size_];
    for(size_t i = 0; i < size_; ++i)
    {
        newContainer[i] = container_[i];
    }
    delete[] container_;
    container_ = newContainer;
}

template<typename T>
void vector<T>::resize(size_t size)
{
    if (size < size_)
    {
        for (int i = size_ - 1; i >= size; --i)
        {
            container_[i] = 0;
        }
        size_ = size;
    }
}

template<typename T> void
vector<T>::push_back(const T& elem)
{
    if (size_ == max_size_)
    {
        max_size_ = (max_size_ == 0) ? 1 : max_size_ * 2;
        T* newContainer = new T[max_size_];
        if (container_)
        {
            for (size_t i = 0; i < size_; ++i)
            {
                newContainer[i] = container_[i];
            }
            delete[] container_;
        }
        container_ = newContainer;
    }
    container_[size_++] = elem;
}

template<typename T> const T&
vector<T>::operator[](int index) const
{
    return container_[index];
}

} // end of namespace FrankZhang
