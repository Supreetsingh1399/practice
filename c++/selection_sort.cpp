//WAP for selection sort
#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,10,22,2,6,26},i,j;
    for(i=0;i<6;i++){
        for(j=6;j>=0;j--){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
for(i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
}