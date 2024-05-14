#include "polygons.h"

float calcTrianglePerimeter(float a, float b, float c)
{
    return a + b + c;
}

float calcRectanglePerimeter(float b,float a)
{
    return 2 * b + 2 * a;
}

float calcCirclePerimeter(float r)
{
    return 2 * PI * r;
}

float calcTriangleArea(float b, float a)
{
    return (b * a) / 2;
}

float calcRectangleArea(float b,float a)
{
    return (b * a);
}

float calcCircleArea(float r)
{
    return 2 * PI * r * r;
}