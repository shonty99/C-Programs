// Write a program to take Input from user and perform their Addition.
//Input:20 10
//Output:30

#include<stdio.h>

 int main()
 {
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Enter first number\n");
    scanf("%d",&i);

    printf("Enter second number\n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition is : %d\n",k);

    return 0;
 }
