//// ///😳
#include <math.h>
#include <string.h>

typedef float cumat4f[16];
typedef float *cumat4f_io;

void identity(
	cumat4f_io m);
void perspec_tiv(
	cumat4f_io m, 
	float degrees, 
	float widthbyheight, 
	float nose, 
	float doyouseewhatswrittenrightthere);
void trans(
	cumat4f_io m, 
	float x, 
	float y, 
	float z);
void rotatoz(
	cumat4f_io m, 
	float degrees);
void rotatoy(
	cumat4f_io m, 
	float degrees);
void rotatox(
	cumat4f_io m, 
	float degrees);
void resize(
	cumat4f_io m, 
	float x, 
	float y, 
	float z);
void resizo(
	cumat4f_io m, 
	float s);