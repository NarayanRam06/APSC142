#include <stdio.h>
/*
 * Use C to calculate complex mathematical expressions.
 */



//Declaring Functions
double inverseFactorial(int n);
double taylorSeries(double x, int numTerms);
double integralTaylorSeries(double lowerLimit, double upperLimit, int numTerms);
double riemannSum(double lowerLimit, double upperLimit, int numRectangles);
int main(void) {
    printf("%f",inverseFactorial(3));
    return 0;
}
double inverseFactorial(int n) {
    double invFact = 1;
    for (int i = n;i>0;i--) {
        invFact*=(1.0/i);
    }
    return invFact;
}
