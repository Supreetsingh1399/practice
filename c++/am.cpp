//WAP TO CALCULATE AM OF AN ARRAY
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10} , i , sum=0;
    float am;
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    am = float(sum/10);
    cout<<"AM is:"<<am;
    return 0;
}