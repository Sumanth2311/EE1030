#include <stdio.h>

int main() {
    // Plane equation: 2x + y - z = 5
    // We need to find the x-intercept, where y = 0 and z = 0
    
    // Solve for x:
    double x_intercept = 5.0 / 2.0; // 2x = 5 => x = 5/2
    
    // Print the x-intercept
    printf("The x-intercept of the plane 2x + y - z = 5 is at (%.2f, 0, 0)\n", x_intercept);
    
    // Length of the intercept on the x-axis is 0 since it's a single point
    double intercept_length = 0.0;
    printf("The length of the intercept cut off by the plane on the x-axis is: %.2f\n", intercept_length);
    
    return 0;
}

