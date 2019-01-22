#pragma once

#include <sstream>
#include <iomanip>
#include <string>
#include <cmath>

#define PI 3.14159265358979

namespace glmath {

	//===================== Namespace Functions =============================

	double rad(double degrees);
	double deg(double radians);

	float fovy(float fovx, float aspect = 16.0f / 9.0f);

	std::string centered(const float &value, const int &size);

}