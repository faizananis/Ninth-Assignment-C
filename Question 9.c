#include <stdio.h>
int main()
{
    int number=0;
    printf("Please Enter an Even Number: ");
    scanf("%d",&number);
    switch(number%2==0)
    {
    case 1:
        printf("The Upper Nearest Odd number is %d",number+1);
        break;
    case 0:
        printf("The Given Number is already an Odd Number which is %d",number);
    }
    return 0;
}
