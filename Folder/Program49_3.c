#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 0X08104040;
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
        printf("7th, 15th, 21th and 28th bits are on\n");
    }
    else
    {
        printf("7th, 15th, 21th and 28th bits are off\n");
    }
    return 0;
}