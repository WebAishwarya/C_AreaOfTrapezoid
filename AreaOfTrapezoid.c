#include <stdio.h>
int main() 
{
    float base1 = 45;
    float base2 = 37;
    float height = 6;
    float AreaOfTrapezoid;

    //AreaOfTrapezoid = 0.5 * (base1 + base2) * height;
    AreaOfTrapezoid = (base1 + base2)/2 * height;

    printf("Value of base1 is : %.2f\nValue of base2 is : %.2f\nValue of height is : %.2f\n\n", base1,base2,height);
    printf("Area Of The Trapezoid : %.2f\n", AreaOfTrapezoid);

    return 0;
}
