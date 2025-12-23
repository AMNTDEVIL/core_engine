#include <stdio.h>
#include "math/vectors/2Dvector/twoDvector.h"

int main() {
    Vec2 a = {2.0f, 3.0f};   // Use .0f for float literals
    Vec2 b = {1.0f, 1.0f};
    float scalar = 2.0f;

    // Test addition
    Vec2 add_res = vec2_add(a, b);
    printf("Addition result: (%.1f, %.1f)\n", add_res.x, add_res.y);

    // Test subtraction
    Vec2 sub_res = vec2_sub(a, b);
    printf("Subtraction result: (%.1f, %.1f)\n", sub_res.x, sub_res.y);

    // Test scalar scaling
    Vec2 scaled = vec2_scalar_scaling(b, scalar);
    printf("Scalar scaling result: (%.1f, %.1f)\n", scaled.x, scaled.y);

    // Magnitude of vector a
    float vec2_mag = vec2_magnitude(a);
    printf("Magnitude of vector a (2,3): %.2f\n", vec2_mag);  // %.2f for 2 decimal places

    // Classic 3-4-5 triangle test
    Vec2 v = {3.0f, 4.0f};
    float mag = vec2_magnitude(v);
    printf("Magnitude of (3,4): %.1f\n", mag);  // Should print 5.0

    // Test normalization
    Vec2 unit = vec2_normalize(v);
    printf("Normalized (3,4): (%.3f, %.3f)  [length should be ~1.0]\n", 
           unit.x, unit.y);
    printf("  (check length: %.3f)\n", vec2_magnitude(unit));  // Should be 1.000

    return 0;
}