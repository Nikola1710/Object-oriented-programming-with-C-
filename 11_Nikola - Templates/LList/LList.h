#ifndef LLIST_H
#define LLIST_H

#include <cassert>

using namespace std;

#include "Node.h"

template <typename T>
class LList
{
    public:
        class Iterator;

        LList();
        ~LList();
        void pushBack(T data);
        Iterator begin();
        Iterator end();
        void insert(Iterator pos, T data);
        Iterator erase(Iterator pos);

    private:
        Node<T>* ptr_frst;
        Node<T>* ptr_last;

    friend class Iterator;
};

template <typename T>
class LList<T>::Iterator
{
    public:
        Iterator();
        Iterator(Node<T>* ptr_pos, LList<T>* ptr_cnt);
        T get() const;
        void set(T data) const;
        void prev();
        void next();
        bool operator !=(const LList<T>::Iterator &iter) const;

    private:
        Node<T>* ptr_pos;
        LList<T>* ptr_cnt;
};

template <typename T>
LList<T>::Iterator::Iterator()
{
    ptr_pos = nullptr;
    ptr_cnt = nullptr;
}//Iterator

template <typename T>
LList<T>::Iterator::Iterator(Node<T>* ptr_pos, LList<T>* ptr_cnt)
{
    this->ptr_pos = ptr_pos;
    this->ptr_cnt = ptr_cnt;
}//Iterator

template <typename T>
T LList<T>::Iterator::get() const
{
    assert(ptr_pos);
    return ptr_pos->data;
}//get

template <typename T>
void LList<T>::Iterator::set(T data) const
{
    assert(ptr_pos);
    ptr_pos->data = data;
}//set

template <typename T>
void  LList<T>::Iterator::prev()
{
    assert(ptr_pos != ptr_cnt->ptr_frst);
    ptr_pos = ptr_pos ? ptr_pos->ptr_prev : ptr_cnt->ptr_last;	
}//prev

template <typename T>
void  LList<T>::Iterator::next()
{
    assert(ptr_pos);
	ptr_pos = ptr_pos->ptr_next;
}//next

template <typename T>
bool LList<T>::Iterator::operator !=(const LList<T>::Iterator &iter) const
{
    return ptr_pos != iter.ptr_pos;	
}//operator !=

template <typename T>
LList<T>::LList()
{
    ptr_frst = nullptr;
    ptr_last = nullptr;
}//LList

template <typename T>
LList<T>::~LList()
{
    while(ptr_frst)
    {
        Node<T>* ptr_tmp = ptr_frst;
        ptr_frst = ptr_frst->ptr_next;
        delete ptr_tmp;
        ptr_tmp = nullptr;
    }
}//~LList

template <typename T>
void LList<T>::pushBack(T data)
{
    Node<T>* ptr_newn = new Node<T>(data);
    if (!ptr_frst)
    {
        ptr_frst = ptr_newn;
        ptr_last = ptr_newn;
    }
    else
    {
        ptr_newn->ptr_prev = ptr_last;
        ptr_last->ptr_next = ptr_newn;
        ptr_last = ptr_newn;
    }
}//pushBack

template <typename T>
typename LList<T>::Iterator LList<T>::begin()
{    
    return Iterator(ptr_frst, this);
}//begin

template <typename T>
typename LList<T>::Iterator LList<T>::end()
{    
    return Iterator(nullptr, this);
}//end

template <typename T>
void LList<T>::insert(Iterator pos, T data)
{
    if (!pos.ptr_pos)
    {
        pushBack(data);
    }
    else
    {
        Node<T>* ptr_newn = new Node<T>(data);
        Node<T>* ptr_bfr = pos.ptr_pos->ptr_prev;
        ptr_newn->ptr_prev = ptr_bfr;
        ptr_newn->ptr_next = pos.ptr_pos;
        pos.ptr_pos->ptr_prev = ptr_newn;
        (ptr_bfr ? ptr_bfr->ptr_next : ptr_frst) = ptr_newn;
    }
}//insert

template <typename T>
typename LList<T>::Iterator LList<T>::erase(Iterator pos)
{
    assert(pos.ptr_pos);
    Node<T>* ptr_remv = pos.ptr_pos;
    pos.ptr_pos = pos.ptr_pos->ptr_next;

    (ptr_remv == ptr_frst ? ptr_frst : ptr_remv->ptr_prev->ptr_next) = ptr_remv->ptr_next;
    (ptr_remv == ptr_last ? ptr_last : ptr_remv->ptr_next->ptr_prev) = ptr_remv->ptr_prev;

    delete ptr_remv;
    ptr_remv = nullptr;

    return pos;    
}//erase

#endif
