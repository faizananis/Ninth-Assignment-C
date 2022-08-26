#include <stdio.h>
#include <math.h>
int main()
{
    float a=0;
    float b=0;
    float c=0;
    float r1=0;
    float r2=0;
    float sq=0;
    float x=0;
    printf("Please Enter Value of a: ");
    scanf("%f",&a);
    printf("Please Enter Value of b: ");
    scanf("%f",&b);
    printf("Please Enter Value of c: ");
    scanf("%f",&c);
    sq=(b*b)-(4*a*c);
    switch(sq>=0)
    {
    case 1:
        x=sqrt(sq);
        r1=((-1*b)+x)/(2*a);
        r2=((-1*b)-x)/(2*a);
        printf("\nThe First Root of the given Quadratic Equation is: %f",r1);
        printf("\nThe Second Root of the given Quadratic Equation is: %f\n",r2);
        break;
    case 0:
        printf("\nThe Roots of the given Quadratic Equation are Imaginary.\n");
    }
    return 0;
}
