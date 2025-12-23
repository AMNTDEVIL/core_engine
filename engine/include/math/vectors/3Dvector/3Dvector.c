#include <math.h>
#include "threeDvector.h"

Vec3 vec3_add(Vec3 a, Vec3 b){
    Vec3 result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    result.z=a.z+b.z;
    return result;
}

Vec3 vec3_sub(Vec3 a,Vec3 b){
    Vec3 result;
    result.x=a.x-b.x;
    result.y=a.y-b.y;
    result.z=a.z-b.z;
    return result;
}
Vec3 vec3_scalar_scale(Vec3 v, float scale){
    Vec3 result;
    result.x=v.x*scale;
    result.y=v.y*scale;
    result.z=v.z*scale;
    return result;
}
float vec3_magnitude(Vec3 v){
    return sqrtf(v.x*v.x+v.y*v.y+v.z*v.z);
}
Vec3 vec3_normalize(Vec3 v){
    float mag=vec3_magnitude(v);
    if (mag == 0)
    {
        Vec3 zero={0,0,0};
        return zero;
    }
    return vec3_scalar_scale(v,1.0f/mag);
    
}