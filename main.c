#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//here I learned about functions, returns and stuff like that

double pi = 3.1415926535;
double circleArea(double diameter){
    double result = pow((diameter / 2),2) * pi;

    return result;
}
double perimeterArea(double diameter){

    double result = (diameter/2) * 2 * pi;

    return result;
}



int main(){

    double userDiameter;
    printf("Diameter?");
    scanf("%lf", &userDiameter);
    printf("Area: %lf\n",circleArea(userDiameter));
    printf("Perimeter: %lf\n\n\n", perimeterArea(userDiameter));

    scanf("%d");


    return 0;

}

