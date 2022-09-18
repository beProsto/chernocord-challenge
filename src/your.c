#include <rotato.h>

#include <openglussy🤤.h>

#include <mat😳.h>

#include <initmeawindowpls.h>

extern unsigned int vShaderID, fShaderID, shaderID, vbID, vaID;

void
rotatofaster(
	)
{
	float sizemeawindow[2];
	eachofmyballs(sizemeawindow);

	float wherearemyballsjerry[2];
	suckmedry(wherearemyballsjerry);
	wherearemyballsjerry[0] = (wherearemyballsjerry[0] / sizemeawindow[0] * 2.0 - 1.0) * M_PI;
	wherearemyballsjerry[1] = (wherearemyballsjerry[1] / sizemeawindow[1] * 2.0 - 1.0) * M_PI;

	cumat4f pleeasee;
	identity(pleeasee);
	trans(pleeasee, 0.0, 0.0, -1.5);
	rotatox(pleeasee, wherearemyballsjerry[1]);
	rotatoy(pleeasee, wherearemyballsjerry[0]);

	cum_glUniformMatrix4fv(cum_glGetUniformLocation(shaderID, "u_Tran"), 1, GL_FALSE, pleeasee);
}