#include <stdio.h>
#include <stdlib.h>

double rectanglePerimeter(double width, double height);
double rectangleArea(double width, double height);

int main(int argc, char *argv[])
{
    // double rectangleWidthUNUSED = atof(argv[0]);  // !READ: https://stackoverflow.com/questions/12498253/how-to-read-an-argument-in-from-command-line-into-a-double
    // double rectangleHeightUNUSED = atof(argv[1]); // !NOT WORKING
    double rectangleWidth = 0, rectangleHeight = 0, perimeter = 0, area = 0;

    sscanf(argv[1], "%lf", &rectangleWidth);
    sscanf(argv[2], "%lf", &rectangleHeight);

    printf("***RECTANGLE WIDTH: %f\n", rectangleWidth);
    // scanf("%f", &rectangleWidth);
    printf("***RECTANGLE HEIGHT: %f\n", rectangleHeight);
    // scanf(" %f", &rectangleHeight); // ! READ: https://stackoverflow.com/questions/29775323/scanfc-call-seems-to-be-skipped

    perimeter = rectanglePerimeter(rectangleWidth, rectangleHeight);
    area = rectangleArea(rectangleWidth, rectangleHeight);

    printf("PERIMETER: %g\n", perimeter);
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