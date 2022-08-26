int main()
{
    int num=0;
    printf("Please Enter Number of Month: ");
    scanf("%d",&num);
    printf("\n");
    switch(num)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("There are 31 days in the Month No.%d",num);
        break;
    case 2:
        printf("There are 28 days in the Month No.%d",num);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("There are 30 days in the Month No.%d",num);
        break;
    default:
        printf("You Entered Incorrect Number of Month.");
    }
    printf("\n");
    return 0;
}
