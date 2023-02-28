#include<iostream>
using namespace std;

template <class T>
class Array
{
    protected:
        T *Arr;
        int size;

    public:
        Array(T value = 10)
        {
            cout<<"Inside Constructor\n";
            size = value;
            Arr = new T[size];
        }

        Array(Array &ref)
        {
            cout<<"Inside copy constructor\n";

            size = ref.size;
            Arr = new T[size];

            for(int i = 0; i < size; i++)
            {
                Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }
        void Accept();
        void Display();
        T Frequency(T);
        T SearchFirst(T);
        T SearchLast(T);
        T EvenCount();
        T OddCount();
        T SumAll(); 
};

template <class T>
void Array <T>:: Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void Array <T>:: Display()
{
    cout<<"Elements are\n";

    for(int i = 0; i < size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

template <class T>
T Array <T>:: SearchFirst(T value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

template <class T>
T Array <T>:: Frequency(T value)
{
    int icnt = 0;

    for(int i = 0;i < size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}

template <class T>
T Array <T>:: SearchLast(T value)
{
    int iCnt = 0;

    for(int i = size; i > 0; i--)
    {
        if(Arr[i] == value)
        {
            iCnt = i;
        }
    }
    return iCnt;
}

template <class T>
T Array <T>:: EvenCount()
{
    T SumEven = 0;

    for(int i = 0;i < size; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            SumEven = SumEven + Arr[i];
        }
    }
    return SumEven;
}

template <class T>
T Array <T>:: OddCount()
{
    T SumOdd = 0;

    for(int i = 0;i < size; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            SumOdd = SumOdd + Arr[i];
        }
    }
    return SumOdd;
}

template <class T>
T Array <T>:: SumAll()
{
    T Sum = 0;

    for(int i = 0;i < size; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}

int main()
{
    cout<<"Inside Main\n";
    int iRet = 0;

    Array <int>sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    iRet = sobj1.Frequency(11);
    cout<<"Frequency is"<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);
    cout<<"First Occurance is"<<iRet<<"\n";

    iRet = sobj1.SearchLast(51);
    cout<<"Last Occurance is"<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"Sum of Even Numbers is"<<iRet<<"\n";

    iRet = sobj1.OddCount();
    cout<<"Sum of Odd Numbers is"<<iRet<<"\n";

    iRet = sobj1.SumAll();
    cout<<"Sum of Numbers is"<<iRet<<"\n";

    Array <float>sobj2(5);
    sobj2.Accept();
    sobj2.Display();

    iRet = sobj2.Frequency(11);
    cout<<"Frequency is"<<iRet<<"\n";

    iRet = sobj2.SearchFirst(11);
    cout<<"First Occurance is"<<iRet<<"\n";

    iRet = sobj2.SearchLast(51);
    cout<<"Last Occurance is"<<iRet<<"\n";

    iRet = sobj2.EvenCount();
    cout<<"Sum of Even Numbers is"<<iRet<<"\n";

    iRet = sobj2.OddCount();
    cout<<"Sum of Odd Numbers is"<<iRet<<"\n";

    iRet = sobj2.SumAll();
    cout<<"Sum of Numbers is"<<iRet<<"\n";

    return 0;
}