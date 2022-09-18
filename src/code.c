
#include <initmeawindowpls.h>
#include <needcam😭era.h>
#include <openglussy🤤.h>
#include <mat😳.h>

#include <stdbool.h>
#include <limits.h>
#include <math.h>

void
cum_init(
	);

void
cum_render(
	);

extern unsigned int vShaderID, fShaderID, shaderID, vbID, vaID;

int main(
	void)
{
	int cum =
	init_me_a_window_pretty_please(YES_I_WANT_OPENGL);

	if (cum == NOOOOOOOOOOOOOOOOOOOOOOO)
	{
		printf("You're computer broken.");
		free((void*)2);
	}
	if (cum == THE_APP_DIED)
	{
		printf("mmmmmm memry.");
		return (int) malloc(INT_MAX);
	}

	INIT_MY_BALLS(GL_FUNC_LOAD);

	cum_init();

	float t = 0.0f;

	while(1) {
		// 😎😎😎
		head shoulder knees and toes

		t+=0.05;

		float sint = sin(t) * 0.5f + 0.5f;

		float sizemeawindow[2];
		eachofmyballs(sizemeawindow);
		cum_glViewport(0,0,sizemeawindow[0],sizemeawindow[1]);

		cum_glClearColor(sint, sint, sint, 1.0f);
		cum_glClear(GL_COLOR_BUFFER_BIT);

		cumera();
		rotatofaster();

		cum_render();

		glXSwapBuffers(d, w);
	}
	

   return 0;
}
