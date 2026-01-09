/*A robot needs to find straight line distance beetween two points on a 2d plane.develope a 
c programme to calculate the straight line distance between the co-ordination*/
#include <stdio.h>
#include <math.h>
void main()
{
    float x1,y1,x2,y2,distance;

    //input hub
    printf("Enter the co-ordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the co-ordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    //processing hub
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    //output hub
    printf("The straight line distance between the points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, y1, x2, y2, distance);

    
}