// Always include the pch.h FIRSST in every cpp file we need it ( if our project is setup to use precompiled header files)
#include "pch.h"

// second include you own items
#include "VectorMath.h"
#include <cmath>

extern "C" __declspec(dllexport) Vec3 VectorAdd(Vec3 a, Vec3 b)
{
	return { a.x + b.x, a.y + b.y, a.z + b.z };
}
extern "C" __declspec(dllexport) float VectorMagnitude(const Vec3& v) {
	return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}