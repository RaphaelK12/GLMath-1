#include "GLMatrix.h"

using namespace glmath;


int main() {

	vec4 vector4(1, 2, 3, 4);
	vec3 vector3(1, 2, 3);
	vec2 vector2(1, 2);

	vec4 a(1, 2, 3, 4);
	vec3 b(1, 2, 3);
	vec2 c(1, 2);

	mat4 id;
	
	

	mat4 mat = perspective(1920, 1080, 70, false);
	mat4 mat2 = perspective(1920, 1080, 70, true);
	mat2.m03 = 10.012312312312e+32f;
	std::cout << vector4 + a << mat2;
	std::cout << mat << std::endl;

	return 0;
}