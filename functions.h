struct vector3d { float x, y, z; };

struct vector3d sum3d(struct vector3d* vect_a, struct vector3d* vect_b);
struct vector3d sub3d(struct vector3d* vect_a, struct vector3d* vect_b);
float dot3d(struct vector3d* vect_a, struct vector3d* vect_b);
struct vector3d cross3d(struct vector3d* vect_a, struct vector3d* vect_b);