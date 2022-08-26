#include <stdio.h>
int main()
{
    int num1=0;
    int num2=0;
    char c=' ';
    while(c!='e')
    {
        c=' ';
        printf("a. Addition \nb. Subtraction \nc. Multiplication \nd. Division \ne. Exit");
        printf("\n\nPlease Select Any One Option from the below list: ");
        scanf("%c",&c);
        switch(c)
        {
        case 'a':
            printf("Please Enter First Number: ");
            scanf("%d",&num1);
            printf("Please Enter Second Number: ");
            scanf("%d",&num2);
            printf("\nThe Sum of two given Numbers is: %d\n",num1+num2);
            break;
        case 'b':
            printf("Please Enter First Number: ");
            scanf("%d",&num1);
            printf("Please Enter Second Number: ");
            scanf("%d",&num2);
            printf("\nThe Difference of two given Numbers is: %d\n",num1-num2);
            break;
        case 'c':
            printf("Please Enter First Number: ");
            scanf("%d",&num1);
            printf("Please Enter Second Number: ");
            scanf("%d",&num2);
            printf("\nThe Product of two given Numbers is: %d\n",num1*num2);
            break;
        case 'd':
            printf("Please Enter First Number: ");
            scanf("%d",&num1);
            printf("Please Enter Second Number: ");
            scanf("%d",&num2);
            printf("\nThe Division of two given Numbers is: %d\n",num1/num2);
            break;
        case 'e':
            printf("The Program is Exited by your Choice.\n");
            break;
        default:
            printf("You are Selected the Incorrect Option.\n");
            break;
        }
        fflush(stdin);
    }
    printf("\n");
    return 0;
}
