#include <stdio.h>
int main() {

    int length, width, height;
    float cardboardCost = 0.002;

    // Get input from the user for the dimensions of a box
    printf("Input the length, width, and height of the cookie box in cm:\n");
    scanf("%d %d %d", &length, &width,&height);

    // Calculate the cost to make the cardboard box
    float surfaceArea = 2*length*width+2*width*height+2*length*height;
    float boxCost = surfaceArea*cardboardCost;
    printf("The cost of cardboard for the box is $%.2f\n", boxCost);

    // Calculate how many cookies fit in the box
    int cookiesInHeight = floor(height/1.25);
    int cookiesInWidth = floor(width/5.5);
    int cookiesInLength = floor(length/5.5);

    int numCookies = cookiesInHeight*cookiesInWidth*cookiesInLength;
    printf("%d cookies fit in the box\n", numCookies);

    // Calculate the Cost to make the cookies
    float cookieVolume = M_PI* pow(5.5/2,2)*1.25;
    float cookieCost = numCookies*cookieVolume*0.012;
    printf("The cost to make the cookies is $%.2f\n", cookieCost);

    // Calculate the price to make the box of cookies
    cost = boxCost + cookieCost;
    printf("The box of cookies should be sold for $%.2f\n", salePrice);

    // Calculate the sale price for the box of cookies to make a 10% profit
    salePrice = cost*1.1;
    printf("The total cost of the box of cookies is $%.2f\n", cost);


    return 0;
}