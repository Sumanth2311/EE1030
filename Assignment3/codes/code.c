#include <stdio.h>

int main() {
    // Coefficients of the plane equation
    float a = 2.0; // Coefficient of x
    float b = 1.0; // Coefficient of y
    float c = -1.0; // Coefficient of z
    float d = 5.0; // Constant term

    // To find the intercept on the x-axis (y = 0, z = 0)
    float x_intercept = d / a; // x-intercept = d / a

    // Output the result
    printf("Length of the intercept on the x-axis: %.2f\n", x_intercept);
    
    // Verifying if the intercept calculation is correct
    // The length of the intercept is just the absolute value of x_intercept
    float length_of_intercept = x_intercept;

    if (length_of_intercept == 2.5) {
        printf("Verification successful: The length of the intercept is correct.\n");
    } else {
        printf("Verification failed: The calculated length does not match expected value.\n");
    }

    return 0;
}

