#include <stdio.h>
int main()
{
    char c=' ';
    int num1=0;
    int num2=0;
    int num3=0;
    printf("Please Enter First Number: ");
    scanf("%d",&num1);
    printf("Please Enter Second Number: ");
    scanf("%d",&num2);
    printf("Please Enter Third Number: ");
    scanf("%d",&num3);
    fflush(stdin);
    while(c!='d')
    {
        printf("\n\na. Check whether a given set of three numbers are lengths of ");
        printf("an isosceles triangle or not.");
        printf("\nb. Check whether a given set of three numbers are lengths of sides of ");
        printf("a right angled triangle or not.");
        printf("\nc. Check whether a given set of three numbers are equilateral triangle or not.");
        printf("\nd. Exit.");
        printf("\n\nEnter your Choice: ");
        scanf("%c",&c);
        switch(c)
        {
        case 'a':
            if(num1==num2||num2==num3||num3==num1)
                printf("The Given Three Lengths are the Lengths of an Isosceles Triangle.");
            else
                printf("The Given Three Lengths are not the Lengths of an Isosceles Triangle.");
                break;
        case 'b':
            if(num1*num1==num2*num2+num3*num3||num2*num2==num1*num1+num3*num3||num3*num3==num1*num1+num2*num2)
                printf("The Given Three Lengths are the Lengths of a Right Angle Triangle.");
            else
                printf("The Given Three Lengths are not the Lengths of a Right Angle Triangle.");
                break;
        case 'c':
            if(num1==num2&&num2==num3)
                printf("The Given Three Lengths are the Lengths of an Equilateral Triangle.");
            else
                printf("The Given Three Lengths are not the Length of an Equilateral TTriangle.");
                break;
        case 'd':
            printf("The Program is exited by your Choice.\n");
            break;
        default:
            printf("You Entered the Incorrect Character.\n");
            break;
        }
        fflush(stdin);
    }//End of While Loop
    return 0;
}

