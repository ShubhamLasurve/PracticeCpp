#include<iostream>
using namespace std;

template <class T>
T Min(T Arr[], int iSize)
{
    T iMin = Arr[0];

    for(int i = 0; i < iSize; i++)
    {
        if(iMin < Arr[i])
        {
            iMin = Arr[i];
        }
    }
    return 0;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(Arr, 5);
    cout<<iRet<<"\n";

    float fRet = Min(Brr, 4);
    cout<<fRet<<"\n";

    return 0;
}