#include <stdio.h>
#include "entities/3DspriteRotation.h"
#include "Vec3.h"
#include "entities/M_PI.h"
#include <math.h>
#include "lerpThreeD.h"

int main() {
    // Vectors for testing
    Vec3 a = {0.0f, 0.0f,0.0f};
    Vec3 b = {10.0f, 10.0f,10.0f};
    Vec3 current = {0.0f, 0.0f,0.0f};
    Vec3 target = {10.0f, 10.0f,10.0f};
    Vec3 point = {10.0f, 10.0f,10.0f};
    Vec3 pivot = {5.0f, 5.0f,5.0f};

    // Lerp midpoint
    Vec3 mid = vec3_lerp(a, b, 0.05f);
    printf("Lerp midpoint: x=%.6f \t y=%.6f\t z=%.6f \n", mid.x, mid.y,mid.z);

    // Move towards target
    Vec3 moved = vec3_movetowards(current, target, 3.05f);
    printf("Move towards: x=%.6f \t y=%.6f \t z=%6f\n\n", moved.x, moved.y, moved.z);

    // Rotate 90° around origin
    Vec3 rotated_origin_z = vec3_rotate_z(point, M_PI_H/2);
    printf("Rotation 90° Z through origin: x=%.6f \t y=%.6f \t z=%6f\n", rotated_origin_z.x, rotated_origin_z.y,rotated_origin_z.z);
    Vec3 rotated_origin_x = vec3_rotate_x(point, M_PI_H/2);
    printf("Rotation 90° X through origin: x=%.6f \t y=%.6f \t z=%6f\n", rotated_origin_x.x, rotated_origin_x.y,rotated_origin_x.z);
    Vec3 rotated_origin_y = vec3_rotate_y(point, M_PI_H/2);
    printf("Rotation 90° Y through origin: x=%.6f \t y=%.6f \t z=%6f\n", rotated_origin_y.x, rotated_origin_y.y,rotated_origin_y.z);
    // Rotate 90° around pivot
    Vec3 rotated_pivot = vec3_rotation_around(point, pivot, M_PI_H/2);
    printf("Rotation 90° around pivot: x=%.6f \t y=%.6f \t z=%6f\n", rotated_pivot.x, rotated_pivot.y, rotated_pivot.z);

    return 0;
}
