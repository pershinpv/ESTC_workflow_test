#include <stdio.h>
#include "functions.h"

/*Git push debug*/

int main()
{
	struct vector3d vect_a = { 1,2,3 };
	struct vector3d vect_b = { 3,2,1 };
	struct vector3d res;

	res = sum3d(&vect_a, &vect_b);
	printv3d(&res, "sum");

	res = sub3d(&vect_a, &vect_b);
	printv3d(&res, "sub");

	printf("%-5s = %7.3f \n", "dot", dot3d(&vect_a, &vect_b));

	res = cross3d(&vect_a, &vect_b);
	printv3d(&res, "cross");

	return 0;
}