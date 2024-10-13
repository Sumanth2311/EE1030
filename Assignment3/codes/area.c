#include <stdio.h>
#include <math.h>

int main() {
    // Intercepts of the plane
    double x1 = 2.5, y1 = 0, z1 = 0;  // X-Intercept
    double x2 = 0, y2 = 5, z2 = 0;    // Y-Intercept
    double x3 = 0, y3 = 0, z3 = -5;   // Z-Intercept
    
    // Calculate vectors AB and AC
    double AB[3] = {x2 - x1, y2 - y1, z2 - z1};
    double AC[3] = {x3 - x1, y3 - y1, z3 - z1};
    
    // Cross product AB x AC
    double crossProduct[3];
    crossProduct[0] = AB[1] * AC[2] - AB[2] * AC[1];
    crossProduct[1] = AB[2] * AC[0] - AB[0] * AC[2];
    crossProduct[2] = AB[0] * AC[1] - AB[1] * AC[0];
    
    // Area of the triangle
    double area = 0.5 * sqrt(crossProduct[0] * crossProduct[0] +
                             crossProduct[1] * crossProduct[1] +
                             crossProduct[2] * crossProduct[2]);
    
    printf("%.2f\n", area); // Output the area
    return 0;
}

