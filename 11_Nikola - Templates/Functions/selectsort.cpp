#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void swapval(T &frst, T &scnd)
{
    T tmp = frst;
    frst = scnd;
    scnd = tmp;
}//swapval

template <typename T>
int minPosition(const vector<T> &vect, int sub_indx)
{
    int min_pos = sub_indx;
    for (int i = sub_indx + 1; i < vect.size(); i++)
    {
        if (vect[i] < vect[min_pos])
        {
            min_pos = i;
        }
    }

    return min_pos;
}//minPosition

template <typename T>
void selectSort(vector<T> &vect)
{
    for (int sub_indx = 0; sub_indx < vect.size() - 1; sub_indx++)
    {
        int min_pos = minPosition(vect, sub_indx);
        if (min_pos != sub_indx)
        {
            swapval(vect[sub_indx], vect[min_pos]);
        }
    }
}//selectSort

int main()
{
    double arr[] = {1.1, 1.2, 4.3, 2.1, 8.4, 5.3, 7.1};
    vector<double> vect(arr, arr + sizeof(arr) / sizeof(double));

    selectSort(vect);

    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;

    return 0;
}//main
