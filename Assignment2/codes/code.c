#include <stdio.h>

struct Point {
    int x;
    int y;
    int z;
};

// Function to calculate the midpoint of two points
struct Point midpoint(struct Point p1, struct Point p2) {
    struct Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    mid.z = (p1.z + p2.z) / 2;
    return mid;
}

void printPoint(struct Point p) {
    printf("(%d, %d, %d)\n", p.x, p.y, p.z);
}

int main() {
    // Define the points A, B, C, D
    struct Point A = {-1, 2, 1};
    struct Point B = {1, -2, 5};
    struct Point C = {4, -7, 8};
    struct Point D = {2, -3, 4};

    // Calculate midpoints of the diagonals AC and BD
    struct Point midAC = midpoint(A, C);
    struct Point midBD = midpoint(B, D);

    // Print the points
    printf("Points:\n");
    printf("A: ");
    printPoint(A);
    printf("B: ");
    printPoint(B);
    printf("C: ");
    printPoint(C);
    printf("D: ");
    printPoint(D);

    // Print the midpoints
    printf("\nMidpoint of AC: ");
    printPoint(midAC);
    printf("Midpoint of BD: ");
    printPoint(midBD);

    // Check if the midpoints are the same
    if (midAC.x == midBD.x && midAC.y == midBD.y && midAC.z == midBD.z) {
        printf("\nThe points form a parallelogram.\n");
    } else {
        printf("\nThe points do not form a parallelogram.\n");
    }

    return 0;
}

