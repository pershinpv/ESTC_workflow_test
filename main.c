#include <stdio.h>
#include "functions.h"

#define PF(operator, var) "%-5s %s %7.3f %7.3f %7.3f \n", (operator), "=", (var).x, (var).y, (var).z
#define PFdot(operator) "%-5s %s %7.3f \n", (operator), "="

int main()
{
	struct vector3d vect_a = { 1,2,3 };
	struct vector3d vect_b = { 3,2,1 };
	struct vector3d res;

	res = sum3d(&vect_a, &vect_b);
	printf(PF("sum", res));

	res = sub3d(&vect_a, &vect_b);
	printf(PF("sub", res));

	printf(PFdot("dot"), dot3d(&vect_a, &vect_b));

	res = cross3d(&vect_a, &vect_b);
	printf(PF("cross", res));
 
    return 0;
}