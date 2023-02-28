#include<iostream>
using namespace std;

template <class T>
T FirstOccurance(T *Arr, int iSize,T iNo)
{
    int i = 0;

    for(i = 0;i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            break;        
        }
    }
    return i;
}

int main()
{
    int iRet = 0;
    int arr[9] = {10,20,30,10,30,40,10,40,10};

    iRet = FirstOccurance(arr,9,40);
    cout<<iRet<<"\n";

    return 0;
}