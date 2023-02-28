#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 0X80000001;
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter Number \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("First and Last bits are on\n");
    }
    else
    {
        printf("First and Last bits are off\n");
    }
    return 0;
}