#include <stdio.h>
#include "math/vectors/3Dvector/threeDvector.h"

int main() {
    Vec3 v1 = {3, 4, 5};
    Vec3 v2 = {1, 2, 3};

    // Addition
    Vec3 add = vec3_add(v1, v2);
    printf("v1 + v2 = (%.2f, %.2f, %.2f)\n", add.x, add.y, add.z);

    // Subtraction
    Vec3 sub = vec3_sub(v1, v2);
    printf("v1 - v2 = (%.2f, %.2f, %.2f)\n", sub.x, sub.y, sub.z);

    // Scalar scaling
    float scaleFactor = 2.0f;
    Vec3 scaled = vec3_scalar_scale(v1, scaleFactor);
    printf("v1 scaled by %.2f = (%.2f, %.2f, %.2f)\n", scaleFactor, scaled.x, scaled.y, scaled.z);

    // Magnitude
    float mag = vec3_magnitude(v1);
    printf("|v1| = %.2f\n", mag);

    // Normalization
    Vec3 normalized = vec3_normalize(v1);
    printf("v1 normalized = (%.2f, %.2f, %.2f)\n", normalized.x, normalized.y, normalized.z);

    // Test zero vector normalization
    Vec3 zero = {0, 0, 0};
    Vec3 normalizedZero = vec3_normalize(zero);
    printf("zero vector normalized = (%.2f, %.2f, %.2f)\n", normalizedZero.x, normalizedZero.y, normalizedZero.z);

    return 0;
}
