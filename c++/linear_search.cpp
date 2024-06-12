// WAP for Linear search
#include<iostream>
using namespace std;
int  main(){
    int arr[4]={5,7,3,1}, i=0 , item=3;
    for(i;i<4;i++)
    {
        if(arr[i]==item){
            cout<<"found at index:"<<i;
            break;
        } 
        i++;
    }
}