// WAP to insert element at specific index
#include<iostream>
using namespace std;
int  main(){
    int arr[4] = {2,5,7,8} , i ,n, item, pos=1 ;
    
    item =arr[pos];
    for(i=pos;i>=0;i++){
        arr[i]=arr[i+1];
    }
    n= 4-1;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}