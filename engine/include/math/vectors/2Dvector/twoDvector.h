#ifndef TWODVECTOR_H
#define TWODVECTOR_H
#include "Vec2_models.h"

// Vector operations
Vec2 vec2_add(Vec2 a, Vec2 b);
Vec2 vec2_sub(Vec2 a, Vec2 b);
Vec2 vec2_scalar_scaling(Vec2 v, float s);

// Magnitude (length) and normalization (unit vector / direction)
float vec2_magnitude(Vec2 v);
Vec2 vec2_normalize(Vec2 v);

#endif