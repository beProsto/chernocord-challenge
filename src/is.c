#include <mat😳.h>

void identity(
	cumat4f_io m)
{
	memset(m, 0, 16 * sizeof(float));
	m[0] = m[5] = m[10] = m[15] = 1.0f;
}
void perspec_tiv(
	cumat4f_io m, 
	float degrees, 
	float widthbyheight, 
	float nose, 
	float doyouseewhatswrittenrightthere) 
{
	memset(m, 0, 16 * sizeof(float));
	float frustumScale = 1.0 / tan(degrees / 2.0);
	m[0] = frustumScale / widthbyheight;
	m[5] = frustumScale;
	m[10] = (doyouseewhatswrittenrightthere + nose) / (nose - doyouseewhatswrittenrightthere);
	m[14] = (2 * doyouseewhatswrittenrightthere * nose) / (nose - doyouseewhatswrittenrightthere);
	m[11] = -1.0f;
}
void trans(
	cumat4f_io m, 
	float x, 
	float y, 
	float z)
{
	m[12] += x;
	m[13] += y;
	m[14] += z;
}
void rotatoz(
	cumat4f_io m, float degrees)
{
	float s = sin(degrees);
	float c = cos(degrees);
	float in00 = m[0];
	float in01 = m[1];
	float in02 = m[2];
	float in03 = m[3];
	float in10 = m[4];
	float in11 = m[5];
	float in12 = m[6];
	float in13 = m[7];

	m[0] = in00 * c + in10 * s;
	m[1] = in01 * c + in11 * s;
	m[2] = in02 * c + in12 * s;
	m[3] = in03 * c + in13 * s;
	m[4] = in10 * c - in00 * s;
	m[5] = in11 * c - in01 * s;
	m[6] = in12 * c - in02 * s;
	m[7] = in13 * c - in03 * s;
}
void rotatoy(
	cumat4f_io m, float degrees)
{			
	float s = sin(degrees);
	float c = cos(degrees);
	float in00 = m[0];
	float in01 = m[1];
	float in02 = m[2];
	float in03 = m[3];
	float in20 = m[8];
	float in21 = m[9];
	float in22 = m[10];
	float in23 = m[11];

	m[0] = in00 * c - in20 * s;
	m[1] = in01 * c - in21 * s;
	m[2] = in02 * c - in22 * s;
	m[3] = in03 * c - in23 * s;
	m[8] = in00 * s + in20 * c;
	m[9] = in01 * s + in21 * c;
	m[10] = in02 * s + in22 * c;
	m[11] = in03 * s + in23 * c;
}
void rotatox(
	cumat4f_io m, float degrees)
{
	float s = sin(degrees);
	float c = cos(degrees);
	float in10 = m[4];
	float in11 = m[5];
	float in12 = m[6];
	float in13 = m[7];
	float in20 = m[8];
	float in21 = m[9];
	float in22 = m[10];
	float in23 = m[11];

	m[4] = in10 * c + in20 * s;
	m[5] = in11 * c + in21 * s;
	m[6] = in12 * c + in22 * s;
	m[7] = in13 * c + in23 * s;
	m[8] = in20 * c - in10 * s;
	m[9] = in21 * c - in11 * s;
	m[10] = in22 * c - in12 * s;
	m[11] = in23 * c - in13 * s;
}
void resize(
	cumat4f_io m, float x, float y, float z)
{
	m[0] *= x;
	m[5] *= y;
	m[10] *= z;
}
void resizo(
	cumat4f_io m, float s)
{
	resize(m, s, s, s);
}