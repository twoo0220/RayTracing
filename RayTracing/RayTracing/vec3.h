#pragma once

#include <cmath>
#include <iostream>

class vec3
{
public:
	vec3() {}
	vec3(double e0, double e1, double e2)
		: element{e0, e1, e2}
	{}

	double x() const { return element[0]; }
	double y() const { return element[1]; }
	double z() const { return element[2]; }

	vec3 operator-() const { return vec3(-element[0], -element[1], -element[2]); }
	double operator[](unsigned int i) const
	{
		if (i < 3)
		{
			return element[i];
		}
	}

	double& operator[](unsigned int i)
	{
		if (i < 3)
		{
			return element[i];
		}
	}

private:
	double element[3] = { 0, 0, 0 };
};
