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

	vec3& operator*=(double t)
	{
		element[0] *= t;
		element[1] *= t;
		element[2] *= t;
		return *this;
	}

	vec3& operator/=(double t)
	{
		if (t == 0.0)
		{
			t = 1.0;
		}
		return *this *= 1 / t;
	}

	double length() const { return std::sqrt(length_squared()); }
	double length_squared() const { return element[0] * element[0] + element[1] * element[1] + element[2] * element[2]; }

private:
	double element[3] = { 0, 0, 0 };
};

using point3 = vec3;

// Vector Utility Functions
inline std::ostream& operator<<(std::ostream& out, const vec3& v)
{
	return out << v.x() << ' ' << v.y() << ' ' << v.z();
}