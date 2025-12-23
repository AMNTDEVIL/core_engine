#include <stdio.h>
#include "twoDvector.h"
#include <math.h>
//Addition of 2 vectors
Vec2 vec2_add(Vec2 a, Vec2 b){
    Vec2 result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    return result;
}
//Subtraction of 2 vectors
Vec2 vec2_sub(Vec2 a, Vec2 b){
    Vec2 result;
    result.x=a.x-b.x;
    result.y=a.y-b.y;
    return result;
}
//Scaling of 2 Vectors
Vec2 vec2_scalar_scaling(Vec2 v, float s){
    Vec2 result;
    result.x=v.x*s;
    result.y=v.y*s;
    return result;
}

//Magnitude
float vec2_magnitude(Vec2 v){
    return sqrtf(v.x*v.x+v.y*v.y);
}
//Normalized Vector(direction/unit vector)
Vec2 vec2_normalize(Vec2 v){
    float mag=vec2_magnitude(v);
    //To avoid division with zero
    if(mag==0.0f){
        return(Vec2){NAN, NAN};
    }
    return (Vec2){v.x/mag,v.y/mag};
}