#include <stdio.h>
int main()
{
    int var=0;
    printf("Please Enter a Number from 1 to 3: ");
    scanf("%d",&var);
    printf("\n");
    switch(var)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("Invalid");
    }
    printf("\n");
    return 0;
}
