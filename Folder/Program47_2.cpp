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
    return iMax;
}

int main()
{
    int Arr[] = {10,20,30};
    float Brr[] = {10.3f,20.4f,30.5f};

    int iRet = Max(Arr,3);
    cout<<"Maximum number is "<<iRet<<"\n";

    float fRet = Max(Brr,3);
    cout<<"Maximum number is "<<iRet<<"\n";

    return 0;
}