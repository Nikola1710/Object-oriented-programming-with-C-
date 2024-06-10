#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
    public:
        Vector(int size);
        ~Vector();

    private:
        int* ptr_arr;
        int size;

        void init(int size);
};

#endif
