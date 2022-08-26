#include <stdio.h>
int main()
{
    int units=0;
    float charges=0;
    printf("Please Enter the quantity of units: ");
    scanf("%d",&units);
    switch(units)
    {
    case 0 ... 50:
        charges=units*0.5;
        charges=charges+charges/100.0*20;
        break;
    case 51 ... 150:
        charges=50*0.5;
        units=units-50;
        charges=charges+units*0.75;
        charges=charges+charges/100.0*20;
        break;
    case 151 ... 250:
        charges=50*0.5;
        charges=charges+100*0.75;
        units=units-150;
        charges=charges+units*1.20;
        charges=charges+charges/100*20;
        break;
    default:
        charges=50*0.5;
        charges=charges+100.0*0.75;
        charges=charges+100.0*1.20;
        units=units-250;
        charges=charges+units*1.50;
        charges=charges+charges/100.0*20;
        break;
    }
    printf("\nThe Total Charges you have to pay are : %f Rs.\n",charges);
    return 0;
}
