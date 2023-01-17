#include <stdio.h>


double finish(double tax){
    double raw;
    double percentage;
    double cost;
    printf("\nPlease input your state's tax rate percentage: ");
    scanf("%lf", &percentage);
    raw = 1 + percentage / 100 ;
    printf("\nPlease input your purchase cost: ");
    scanf("%lf", &cost);
    double result = cost * raw;
    return result;
}
int main(){
    printf("\nHello. This is your tax rate calculator!");
    double tax = finish(tax);
    printf("Total payment with tax: %.2lf", tax);
    return 0;
}