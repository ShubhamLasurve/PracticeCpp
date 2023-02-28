#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT Mask = 0X00004000;
    UINT Result = 0;

    Result = No & Mask;

    if(Result == Mask)
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
        printf("15th bit is on\n",Value);
    }
    else
    {
        printf("15th bit is off\n",Value);
    }
    return 0;
}