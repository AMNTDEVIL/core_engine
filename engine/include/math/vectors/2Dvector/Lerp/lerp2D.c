#include <math.h>
#include "lerpTwoD.h"
#include "math/vectors/2Dvector/twoDvector.h"
#include "Vec2_models.h"
#include "spriteRotation.h"
Vec2 vec2_lerp(Vec2 a, Vec2 b, float t){
    Vec2 result;
    result.x=a.x+(b.x-a.x)*t;
    result.y=a.y+(b.y-a.y)*t;
    return result;
}

Vec2 vec2_movetowards(Vec2 current_vec2, Vec2 target, float max_distance){
    Vec2 to_target= vec2_sub(target,current_vec2);
    float distance= vec2_magnitude(to_target);
    if(distance<=max_distance|| distance==0.0f){
        return target;
    }
    Vec2 dir=vec2_normalize(to_target);
    Vec2 movement=vec2_scalar_scaling(dir,max_distance);
    return vec2_add(current_vec2,movement);
}
Vec2 vec2_rotation(Vec2 v, float radians){
    float c=cosf(radians);
    float s=sinf(radians);
    Vec2 result;
    result.x=v.x*c-v.y*s;
    result.y=v.x*s+v.y*c;
    return result;
}

Vec2 vec2_rotation_around(Vec2 point, Vec2 pivot, float radians){
    Vec2 translated=vec2_sub(point,pivot);
    Vec2 rotated=vec2_rotation(translated,radians);
    return vec2_add(rotated,pivot);
}