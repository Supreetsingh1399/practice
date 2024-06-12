// WAP binary search

#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {2, 3, 4, 10}, beg = 0, end = 3, mid, item = 10;
    mid = beg + (end - beg) / 2;
    while (beg <= end && arr[mid] != item)
    {
        if (item < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
    }
    if (arr[mid] == item)
    {
        std::cout << "index " << mid;
    }
    return 0;
}