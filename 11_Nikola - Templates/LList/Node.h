#ifndef NODE_H
#define NODE_H

template <typename T>
class LList;

template <typename T>
class Node
{
    public:
        Node (T data);

    private:
        int data;
        Node* ptr_prev;
        Node* ptr_next;

    friend class LList<T>;
};

template <typename T>
Node<T>::Node(T data)
{
    this->data = data;
    this->ptr_prev = nullptr;
    this->ptr_next = nullptr;
}//Node

#endif
