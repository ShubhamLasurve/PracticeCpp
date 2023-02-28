#include<iostream>
using namespace std;

template <class T>
T LastOccurance(T *Arr, int iSize,T iNo)
{
    int i = 0;

    for(i = iSize;i > 0; i--)
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

    iRet = LastOccurance(arr,9,40);
    cout<<iRet<<"\n";

    return 0;
}