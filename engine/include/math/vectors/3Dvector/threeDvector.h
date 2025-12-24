#ifndef THREEDVECTOR_H
#define THREEDVECTOR_H

#include <math.h>

#include "entities/Vec3.h"

Vec3 vec3_add(Vec3 a, Vec3 b);

Vec3 vec3_sub(Vec3 a, Vec3 b);

Vec3 vec3_scalar_scale(Vec3 v, float scale);

float vec3_magnitude(Vec3 v);

Vec3 vec3_normalize(Vec3 v);

#endif
