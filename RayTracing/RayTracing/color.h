#pragma once

#include "vec3.h"

using color = vec3;

void writeColor(std::ostream& out, const vec3& pixelColor)
{
	double red = pixelColor.x();
	double green = pixelColor.y();
	double blue = pixelColor.z();

	// [0, 1] 범위의 성분 값을 [0, 255] 바이트 범위로 변환
	int redByte = static_cast<int>(255.999 * red);
	int greenByte = static_cast<int>(255.999 * green);
	int blueByte = static_cast<int>(255.999 * blue);

	out << redByte << ' ' << greenByte << ' ' << blueByte << '\n';
}
