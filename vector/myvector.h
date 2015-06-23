namespace FrankZhang
{

typedef unsigned int size_t;

template<typename T>
class vector
{
public:
    vector();
    ~vector();
    size_t size();
    size_t capacity();
    void push_back(T& elem);
    const T& operator[](int index) const;
private:
    T* container_;
    size_t size_;
    size_t max_size_;
};

template<typename T>
vector<T>::vector() : max_size_(6), size_(0)
{
    container_ = new T[max_size_];
}

template<typename T>
vector<T>::~vector()
{
    delete[] container_;
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
vector<T>::push_back(T& elem)
{
    if (size_ >= max_size_)
    {
        max_size_ *= 2;
        T* newContainer = new T[max_size_];
        for (size_t i = 0; i < size_; ++i)
        {
            newContainer[i] = container_[i];
        }
        delete[] container_;
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
