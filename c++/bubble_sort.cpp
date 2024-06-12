//WAP for bubble sort
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,10,2,6,26},i,j;
    for(i=0;i<5;i++){
        for ( j = 0; j<5-1; j++)
        {
            if (arr[j]>arr[j+1])
            {int temp=arr[j];
                arr[j]=arr[j+1];
                
                arr[j+1]= temp;
            } 
        }
    }
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}