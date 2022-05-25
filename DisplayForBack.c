//Accept the number from user and disply forward and backward 
//Input: 5
//Output : 1 2 3 4 5
//         5 4 3 2 1

#include<stdio.h>
#include<stdbool.h>

void DisplayF(int iNo)
{
    int iCnt = 0;
    //  1                   2                3
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%d\n",iCnt);        // 4
    }
}

void DisplayB(int iNo)
{
    int iCnt = 0;
    //          1               2           3
    for(iCnt = iNo; iCnt>= 1; iCnt--)
    {
        printf("%d\n",iCnt);        // 4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    printf("Forward Display\n");
    DisplayF(iValue);
    printf("Backard Display\n");
    DisplayB(iValue);
    return 0;
}
