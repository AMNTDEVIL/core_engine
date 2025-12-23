// engine/include/math/portfolio_math.h
typedef struct {
    float x, y;
} Vec2;

// Calculate 10,000 animation points in one go!
void calculate_graph_points(Vec2* output, float* data_input, int count, float animation_progress);
