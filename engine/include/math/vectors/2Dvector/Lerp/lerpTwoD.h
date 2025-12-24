#ifndef LERPTWOD_H
#define LERPTWOD_H
#include "math/vectors/2Dvector/twoDvector.h"
#include "entities/spriteRotation.h"

//Scale
Vec2 vec2_lerp(Vec2 a,Vec2 b,float t);
Vec2 vec2_movetowards(Vec2 current,Vec2 target, float max_distance);
//Rotation
Vec2 vec2_rotation(Vec2 v, float radians);
Vec2 vec2_rotation_around(Vec2 point,Vec2 pivot, float radians);
#endif