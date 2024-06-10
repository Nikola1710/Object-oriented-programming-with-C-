#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

inline string monthString(int mon)
{
    string mon_arr[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };    

    return mon_arr[mon];
}//monthString

string timeStr(tm* ptr_time)
{
    ostringstream out_strm;

    out_strm << monthString(ptr_time->tm_mon) << " ";
    out_strm << ptr_time->tm_mday << " ";
    out_strm << 1 + ptr_time->tm_hour << ":";
    out_strm << 1 + ptr_time->tm_min << ":";
    out_strm << 1 + ptr_time->tm_sec << " ";
    out_strm << 1900 + ptr_time->tm_year;

    return out_strm.str();
}//timeStr

int main()
{
    time_t now = time(0);
    tm* ptr_local_time = localtime(&now);

    cout << timeStr(ptr_local_time) << endl;

    return 0;
}//main
