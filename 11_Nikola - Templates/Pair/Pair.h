#ifndef PAIR_H
#define PAIR_H

template <typename T1, typename T2>
class Pair
{
    public:
        Pair(const T1 &frst, const T2 &scnd);
        T1 getFrst() const;
        T2 getScnd() const;

    private:
        T1 frst;
        T2 scnd;
};

template <typename T1, typename T2>
Pair<T1, T2>::Pair(const T1 &frst, const T2 &scnd)
{
    this->frst = frst;
    this->scnd = scnd;
}//Pair

template <typename T1, typename T2>
T1 Pair<T1, T2>::getFrst() const
{
    return frst;
}//getFrst

template <typename T1, typename T2>
T2 Pair<T1, T2>::getScnd() const
{
    return scnd;
}//getFrst

#endif
