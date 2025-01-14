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
    printf("%f",inverseFactorial(0));
    return 0;
}

//Uses Equation (1) to evaluate the inverse factorial of an input integer
double inverseFactorial(int n) {
    double invFact = 1;
    //loop: divide 1 by n until n = 0
    for (int i = n;i>0;i--) {
        invFact/=i;
    }
    return invFact;
}
