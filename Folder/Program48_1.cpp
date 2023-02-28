#include<iostream>
using namespace std;

template <class T>
void Display(T value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<value<<"\t";
    }
}

int main()
{
    char value = '\0';
    int no = 0;
    float fNo = 0.0f;

    int iSize = 0;

    cout<<"Enter the element \n";
    cin>>value;

    cout<<"Enter the size\n";
    cin>>iSize;

    Display(value,iSize);

    cout<<"Enter the element \n";
    cin>>no;

    cout<<"Enter the size\n";
    cin>>iSize;

    Display(no,iSize);

    cout<<"Enter the element \n";
    cin>>fNo;

    cout<<"Enter the size\n";
    cin>>iSize;

    Display(fNo,iSize);

    return 0;
}