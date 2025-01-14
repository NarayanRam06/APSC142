#include <stdio.h>
#include <math.h>
/*
 * Use C to calculate complex mathematical expressions.
 */



//Declaring Functions
double inverseFactorial(int n);
double taylorSeries(double x, int numTerms);
double integralTaylorSeries(double lowerLimit, double upperLimit, int numTerms);
double riemannSum(double lowerLimit, double upperLimit, int numRectangles);

int main(void) {
    printf("%f\n",inverseFactorial(0));
    printf("%f\n", taylorSeries(-3,100));
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
//Uses Equation (3) to evaluate an approximation of e^x^2.
//Takes in value of x as a double, and number of terms in taylor series as integer
double taylorSeries(double x, int numTerms) {
    double num = 0;
    for (int i = 0; i < numTerms -1;i++) {
        num+= inverseFactorial(i)* pow(x,2*i);
    }
    return num;

}

