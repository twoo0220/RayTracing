#pragma once

#include "vec3.h"

class ray
{
public:
	ray() = default;
	ray(const point3& origin, const vec3& direction)
		: mOrigin(origin)
		, mDirection(direction)
	{}

	const point3& origin() const { return mOrigin; }
	const vec3& direction() const { return mDirection; }

private:
	point3 mOrigin;
	vec3 mDirection;
};
