double* sum3d(double a[], double b[])
{
    static double c[3] = { 0, 0, 0 };
    
    for(int i = 0; i < 3; ++i)
    {
        c[i] = a[i] + b[i];
    }
    return c;
}

double* sub3d(double a[], double b[])
{
    static double c[3] = { 0, 0, 0 };
    
    for(int i = 0; i < 3; ++i)
    {
        c[i] = a[i] - b[i];
    }
    return c;
}

double dot3d(double a[], double b[])
{
    double c;
    
    for(int i = 0; i < 3; ++i)
    {
        c += a[i] * b[i];
    }
    return c;
}

double* cross3d(double a[], double b[])
{
	static double c[3] = { 0, 0, 0 };

	for (int i = 0; i < 3; ++i)
	{
		c[i] = a[(i + 1) % 3] * b[(i + 2) % 3] - a[(i + 2) % 3] * b[(i + 1) % 3];
	}
	return c;
}
