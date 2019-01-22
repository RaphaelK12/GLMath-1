#include "GLMath.h"
#include <iostream>

std::ostringstream ss;

double glmath::rad(double degrees){
	return degrees * PI / 180.0f;
}

double glmath::deg(double radians){
	return radians * 180.0f / PI;
}

float glmath::fovy(float fovx, float aspect){
	return atan(tan(fovx / 2) / aspect) * 2;
}

std::string glmath::centered(const float &value, const int &size) {
	ss << std::setprecision(6) << value;
	std::string strVal = ss.str();

	ss.str("");
	ss.clear();

	int len = strVal.length();

	return std::string((int)(((size - len) / 2.0f) + 0.5f), ' ') + strVal + std::string((size - len) / 2.0f, ' ');
}
