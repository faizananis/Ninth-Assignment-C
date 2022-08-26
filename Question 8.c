#include <stdio.h>
int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    switch(number>0)
    {
    case 1:
        printf("\nThe Given Number in Negative Form is: %d\n",number*-1);
        break;
    case 0:
        printf("\nThe Given Number in Positive Form is: %d\n",number*-1);
    }
    return 0;
}
