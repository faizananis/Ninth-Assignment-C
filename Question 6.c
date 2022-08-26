#include <stdio.h>
int main()
{
    int num=0;
    printf("Please Enter a Number to check it is a Leap year or not: ");
    scanf("%d",&num);
    printf("\n");
    num=num%400;
    num=num%4;
    switch(num)
    {
        case 0:
        printf("Your Given Year is a Leap Year.");
        break;
        default:
        printf("Your Given Year is not a Leap Year.");
        break;
    }
    printf("\n");
    return 0;
}
