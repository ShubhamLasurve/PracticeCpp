#include<iostream>
using namespace std;

template <class T>
T Max(T Arr[], int iSize)
{
    T iMax = Arr[0];

    for(int i = 0; i < iSize; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }
    return 0;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Max(Arr, 5);
    cout<<iRet<<"\n";

    float fRet = Max(Brr, 4);
    cout<<fRet<<"\n";

    return 0;
}