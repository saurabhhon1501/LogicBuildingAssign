/////////////////////////////////
// 1. Dividing Numbers
//////////////////////////////////

#include <stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    //if we type negative still it is divisdible
    if (iNo2 < 0)
    {
        iNo2 = -iNo2;
    }

    // If divisor becomes 0 after converting negative zero is not possible, but we check zero
    if (iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;        // Return actual answer on success
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d\n", iRet);

    return 0;
}