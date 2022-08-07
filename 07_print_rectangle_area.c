#include <stdio.h>
double rectanglePerimeter(double width, double height);
double rectangleArea(double width, double height);

int main()
{
    double rectangleWidth, rectangleHeight, perimeter, area;
    printf("***ENTER THE RECTANGLE WIDTH: \n");
    scanf("%lf", &rectangleWidth);
    printf("***ENTER THE RECTANGLE HEIGHT: \n");
    scanf(" %lf", &rectangleHeight); // ! READ: https://stackoverflow.com/questions/29775323/scanfc-call-seems-to-be-skipped
    perimeter = rectanglePerimeter(rectangleWidth, rectangleHeight);
    printf("PERIMETER: %g\n", perimeter);
    area = rectangleArea(rectangleWidth, rectangleHeight);
    printf("AREA: %g\n", area);
    return 0;
}

double rectanglePerimeter(double width, double height)
{
    double perimeter = 0.0;
    perimeter = 2.0 * (width + height);
    return perimeter;
}

double rectangleArea(double width, double height)
{
    double area = 0.0;
    area = width * height;
    return area;
}