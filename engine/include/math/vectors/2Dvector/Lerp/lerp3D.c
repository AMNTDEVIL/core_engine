#include <math.h>
#include "Vec3.h"
#include "threeDvector.h"
// Linear interpolation in 3D
Vec3 vec3_lerp(Vec3 a, Vec3 b, float t){
    Vec3 result;
    result.x = a.x + (b.x - a.x) * t;
    result.y = a.y + (b.y - a.y) * t;
    result.z = a.z + (b.z - a.z) * t;
    return result;
}

// Move towards target in 3D
Vec3 vec3_movetowards(Vec3 current, Vec3 target, float max_distance){
    Vec3 to_target = vec3_sub(target, current);      
    float distance = vec3_magnitude(to_target);
    if(distance <= max_distance || distance == 0.0f){
        return target; 
    }
    Vec3 dir = vec3_normalize(to_target);
    Vec3 movement = vec3_scalar_scale(dir, max_distance);
    return vec3_add(current, movement);
}

// Rotation around X axis
Vec3 vec3_rotate_x(Vec3 v, float radians){
    float c = cosf(radians);
    float s = sinf(radians);
    Vec3 result;
    result.x = v.x;
    result.y = v.y * c - v.z * s;
    result.z = v.y * s + v.z * c;
    return result;
}

// Rotation around Y axis
Vec3 vec3_rotate_y(Vec3 v, float radians){
    float c = cosf(radians);
    float s = sinf(radians);
    Vec3 result;
    result.x = v.x * c + v.z * s;
    result.y = v.y;
    result.z = -v.x * s + v.z * c;
    return result;
}

// Rotation around Z axis
Vec3 vec3_rotate_z(Vec3 v, float radians){
    float c = cosf(radians);
    float s = sinf(radians);
    Vec3 result;
    result.x = v.x * c - v.y * s;
    result.y = v.x * s + v.y * c;
    result.z = v.z;
    return result;
}

// Rotate around pivot using Euler angles
Vec3 vec3_rotation_around(Vec3 point, Vec3 pivot, Vec3 euler_angles){
    Vec3 translated = vec3_sub(point, pivot);
    Vec3 rotated = vec3_rotate_x(translated, euler_angles.x);
    rotated = vec3_rotate_y(rotated, euler_angles.y);
    rotated = vec3_rotate_z(rotated, euler_angles.z);
    return vec3_add(rotated, pivot);
}
