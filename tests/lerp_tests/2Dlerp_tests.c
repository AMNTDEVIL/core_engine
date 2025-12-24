#include <stdio.h>
#include "math/vectors/2Dvector/Lerp/lerpTwoD.h"
#include "entities/spriteRotation.h"
#include "Vec2_models.h"
#include "entities/M_PI.h"
#include <math.h>

int main() {
    // Vectors for testing
    Vec2 a = {0.0f, 0.0f};
    Vec2 b = {10.0f, 10.0f};
    Vec2 current = {0.0f, 0.0f};
    Vec2 target = {10.0f, 10.0f};
    Vec2 point = {10.0f, 10.0f};
    Vec2 pivot = {5.0f, 5.0f};

    // Lerp midpoint
    Vec2 mid = vec2_lerp(a, b, 0.05f);
    printf("Lerp midpoint: x=%.6f \t y=%.6f\n\n", mid.x, mid.y);

    // Move towards target
    Vec2 moved = vec2_movetowards(current, target, 3.05f);
    printf("Move towards: x=%.6f \t y=%.6f\n\n", moved.x, moved.y);

    // Rotate 90° around origin
    Vec2 rotated_origin = vec2_rotation(point, M_PI_H/2);
    printf("Rotation 90° through origin: x=%.6f \t y=%.6f\n", rotated_origin.x, rotated_origin.y);

    // Rotate 90° around pivot
    Vec2 rotated_pivot = vec2_rotation_around(point, pivot, M_PI_H/2);
    printf("Rotation 90° around pivot: x=%.6f \t y=%.6f\n", rotated_pivot.x, rotated_pivot.y);

    return 0;
}
