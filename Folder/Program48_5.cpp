#include<iostream>
using namespace std;

template <class T>
void Reverse(T *Arr, int iSize,T iNo)
{
    int i = 0;

    for(i = iSize - 1;i >= 0; i--)
    {
        cout<<Arr[i]<<"\t";   
    }
}

int main()
{
    int iRet = 0;
    int arr[9] = {10,20,30,10,30,40,10,40,10};

    Reverse(arr,9,40);
    cout<<iRet<<"\n";

    return 0;
}