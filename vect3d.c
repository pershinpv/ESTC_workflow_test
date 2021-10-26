#include "functions.h"

struct vector3d sum3d(struct vector3d* vect_a, struct vector3d* vect_b)
{
	struct vector3d res;

	res.x = vect_a->x + vect_b->x;
	res.y = vect_a->y + vect_b->y;
	res.z = vect_a->z + vect_b->z;

	return res;
}

struct vector3d sub3d(struct vector3d* vect_a, struct vector3d* vect_b)
{
	struct vector3d res;

	res.x = vect_a->x - vect_b->x;
	res.y = vect_a->y - vect_b->y;
	res.z = vect_a->z - vect_b->z;

	return res;
}

float dot3d(struct vector3d* vect_a, struct vector3d* vect_b)
{
	return (vect_a->x * vect_b->x + vect_a->y * vect_b->y + vect_a->z * vect_b->z);
}

struct vector3d cross3d(struct vector3d* vect_a, struct vector3d* vect_b)
{
	struct vector3d res;

	res.x = vect_a->y * vect_b->z - vect_a->z * vect_b->y;
	res.y = vect_a->z * vect_b->x - vect_a->x * vect_b->z;
	res.z = vect_a->x * vect_b->y - vect_a->y * vect_b->x;

	return res;
}
