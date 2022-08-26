#include <stdio.h>
int main()
{
    int num=0;
    printf("Please Enter a Number of Day in a Week: ");
    scanf("%d",&num);
    printf("\n");
    switch(num)
    {
    case 1:
        printf("Welcome!");
        break;
    case 2:
        printf("Hii!");
        break;
    case 3:
        printf("Good Morning!");
        break;
    case 4:
        printf("Good Afternoon!");
        break;
    case 5:
        printf("Good Evening!");
        break;
    case 6:
        printf("Good Night!");
        break;
    case 7:
        printf("Good Bye!");
        break;
    default:
        printf("You Entered Incorrect Number of Day.");
    }
    printf("\n");
    return 0;
}

