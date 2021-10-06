#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter the Fahrenheit value : ");
    scanf("%f",&F);
    C = ( 5.00 / 9.00 ) * ( F - 32.00 );
    printf("Fahrenheit %.2f equals to Celsius %.2f\n",F,C);
    return 0;
}
