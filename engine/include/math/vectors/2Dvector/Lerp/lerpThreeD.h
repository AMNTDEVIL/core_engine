#ifndef LERPTHREED_H
#define LERPTHREED_H
#include "Vec3.h"
//Scale
Vec3 vec3_lerp(Vec3 a,Vec3 b,float t);
Vec3 vec3_movetowards(Vec3 current,Vec3 target, float max_distance);
//Rotation
Vec3 vec3_rotate_x(Vec3 v, float radians);
Vec3 vec3_rotate_y(Vec3 v, float radians);
Vec3 vec3_rotate_z(Vec3 v, float radians);
Vec3 vec3_rotation_around(Vec3 point,Vec3 pivot, float radians);
#endif