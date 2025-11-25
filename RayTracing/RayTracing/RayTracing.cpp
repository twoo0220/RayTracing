#include "color.h"
#include "ray.h"
#include "vec3.h"

color rayColor(const ray& r)
{
    return color(0, 0, 0);
}

int main()
{
    int imageWidth = 256;
    int imageHeight = 256;

    std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

    for (int j = 0; j < imageHeight; ++j)
    {
        for (int i = 0; i < imageWidth; ++i)
        {
            double red = static_cast<double>(i) / static_cast<double>(imageWidth - 1);
            double green = static_cast<double>(j) / static_cast<double>(imageHeight - 1);
            double blue = 0.0;

            int ired = static_cast<int>(255.999 * red);
            int igreen = static_cast<int>(255.999 * green);
            int iblue = static_cast<int>(255.999 * blue);

            std::cout << ired << ' ' << igreen << ' ' << iblue << '\n';
        }
    }

    return 0;
}
