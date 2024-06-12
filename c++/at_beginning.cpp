//WAP to insert element at beginning of array
#include<iostream>
using namespace std;
int  main(){
    int arr[4] = {2,5,7,8} , i ,n, item=40 ;
    for ( i = 4; i >= 0; i--)
    {
        arr[i+1] = arr[i];

    }
    n=4+1;
    arr[0]=item;
    for ( i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
    return 0;
}