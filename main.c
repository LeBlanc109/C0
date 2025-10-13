#include <stdio.h>
#include <math.h>

int main(){

    /*Compound Interest Calculator
    FV = P (1 + [r / n])^(nt)

    FV: Future Value, or the ending value
    P: Principal, or starting value
    r: interest rate
    n: number of compounding periods per year (yearly = 1)
    t: time in years of the investment or loan


    Let's do: Altria! My Favorite stock!
    futureValue = prinicpal * pow((1 + (intRate/compRate)), (compRate * years))
    */
   float futureValue = 0.0f;
   float principal = 0.0f;
   float intRate = 0.0f;
   int compRate = 1;
   int years = 0;

   printf("Enter in the principal amount of money you want to invest: \n");
   scanf("%f", &principal);

   printf("With a principal value of: %.2f, what is the interest rate: \n", principal);
   scanf("%f", &intRate);

   // don't forget to convert percentage to decimal form if user entered 6.7 needs to technically become .067
    intRate /= 100.0f;

   printf("With a principal value of: %.2f, and an interest rate of: %.3f%%, for how many years would you like to compound: \n", principal, intRate);
   scanf("%d", &years);

   //caluclate
   futureValue = principal * powf((1.0f + (intRate / compRate)), (float)(compRate * years));

   printf("\nFuture Value: $%.2f\n10", futureValue);
    
   return 0;
}