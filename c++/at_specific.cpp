//WAP to insert element at specific index
#include<iostream>
using namespace std;
int  main(){
    int arr[4] = {2,5,7,8} , i ,n, item=40, pos=3 ;
    for(i=n;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]= item;
    n= 4+1;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}