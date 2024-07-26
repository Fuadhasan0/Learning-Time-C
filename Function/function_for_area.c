#include<stdio.h>
#include<math.h>

float squareArea(float square_a);
float circleArea(float circle_a);
float rectangleArea(float rectangle_a, float rectangle_b);

int main(){

    float rectangle_a;
    float rectangle_b;
    
    printf("Enter rectangle a : ");
    scanf("%f", &rectangle_a);
    printf("Enter reectangle b : ");
    scanf("%f", &rectangle_b);
    printf("Rectangle Area is %f\n\n", rectangleArea(rectangle_a, rectangle_b));


    float square_a;

    printf("Enter square value : ");
    scanf("%f", &square_a);
    printf("Square area is %f\n\n", squareArea(square_a));

    float circle_a;

    printf("Enter circle value :");
    scanf("%f", &circle_a);
    printf("Circle area is %f\n", circleArea(circle_a));

   

    return 0;
}

float rectangleArea(float rectangle_a, float rectangle_b){
    return rectangle_a * rectangle_b;
}
float squareArea(float square_a){
    return square_a * square_a;
}
float circleArea(float circle_a){
    return  3.1416 * circle_a * circle_a;
}