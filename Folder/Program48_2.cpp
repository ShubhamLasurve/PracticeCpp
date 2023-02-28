#include<iostream>
using namespace std;

template <class T>
int Frequency(T *Arr, int iSize,T iNo)
{
    int iCnt = 0, i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    int arr[9] = {10,20,30,10,30,40,10,40,10};

    iRet = Frequency(arr,9,10);
    cout<<iRet<<"\n"

    return 0;
};