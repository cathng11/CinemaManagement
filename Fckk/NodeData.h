#pragma once
template <typename T>
class NodeData
{
protected:
    T            data_;  
    NodeData<T>* next_;
public:
    NodeData();
    void set_data(T val);
    T get_data() const;
    void set_next(NodeData<T>* next);
    NodeData<T>* get_next() const;
};

template<typename T>
inline NodeData<T>::NodeData()
    :next_(0)
{
    
}

template<typename T>
inline void NodeData<T>::set_data(T val)
{
    data_ = val;
}

template<typename T>
inline T NodeData<T>::get_data() const
{
    return data_;
}

template<typename T>
inline void NodeData<T>::set_next(NodeData<T>* next)
{
    next_ = next;
}

template<typename T>
inline NodeData<T>* NodeData<T>::get_next() const
{
    return next_;
}
