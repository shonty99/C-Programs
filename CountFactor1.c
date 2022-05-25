//Accept number from user and check weather it is prime or not using FactorCount
//Factor are zero then it is prime else its not a prime number
//Input : 11
//Output : Prime Number


#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    int iCnt = 0;
    int iFactCnt = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}

bool CheckPrime(int iNo)
{
    int iRet = 0;
    iRet = CountFactor(iNo);
    if(iRet == 0)
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
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
     return 0;
}
