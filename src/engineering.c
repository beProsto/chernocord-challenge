#include <initmeawindowpls.h>

Display *d;
int s;
Window w;
XEvent e;
GLXContext glx;

int
init_me_a_window_pretty_please(
	unsigned char do_you_want_opengl_in_it) 
{
	if (do_you_want_opengl_in_it == NO_ID_RATHER_THE_APP_DIE)
	{
		return THE_APP_DIED;
	}

	XSetWindowAttributes goofyaaah;

	d = XOpenDisplay(NULL);

	s = DefaultScreen(d);

	XVisualInfo* vi;


	int versionGLX[2] = {0, 0}; /* Order: major[0], minor[1] */ 
	glXQueryVersion(d, &versionGLX[0], &versionGLX[1]);

	// printf("OWL: GLX version: %d.%d\n", versionGLX[0], versionGLX[1]);

	int attribsGLX[] = {
		GLX_RGBA,
		GLX_DOUBLEBUFFER,
		GLX_DEPTH_SIZE,     24,
		GLX_STENCIL_SIZE,   8,
		GLX_RED_SIZE,       8,
		GLX_GREEN_SIZE,     8,
		GLX_BLUE_SIZE,      8,
		GLX_ALPHA_SIZE,     8,
		GLX_BUFFER_SIZE,    32,
		GLX_SAMPLE_BUFFERS, 0,
		GLX_SAMPLES,        0,
		0L
	};
	vi = glXChooseVisual(d, s, attribsGLX);
	if(vi == NULL) {
		return NOOOOOOOOOOOOOOOOOOOOOOO;
	}

	goofyaaah.border_pixel = WhitePixel(d, s);
	goofyaaah.background_pixel = BlackPixel(d, s);
	goofyaaah.override_redirect = 1;
	goofyaaah.colormap = XCreateColormap(d, XRootWindow(d, s), vi->visual, AllocNone);
	goofyaaah.event_mask = dfjiodsjigopfsadfjgboidfshbvfuidlsghfuisghfi;

	w = XCreateWindow(
		d, XRootWindow(d, s), 
		0, 0, 
		1280, 720, 
		0, vi->depth, InputOutput, vi->visual, 
		CWBackPixel | CWColormap | CWBorderPixel | CWEventMask, 
		&goofyaaah
	);

	XClearWindow(d, w);
	XMapRaised(d, w);

	glx = glXCreateContext(d, vi, 0, 1);
	glXMakeCurrent(d, w, glx);

	// if (w==NULL) {
	// 	return NOOOOOOOOOOOOOOOOOOOOOOO;
	// }

	return APP_IS_FIIINE;
}

float 
myballs(
	)
{
	unsigned int a, b;
	Window tmpRoot; unsigned int tmpUnsignedInt; int tmpInt;
	XGetGeometry(d, w, &tmpRoot, &tmpInt, &tmpInt, &a, &b, &tmpUnsignedInt, &tmpUnsignedInt);
	return (float)a/(float)b;
}


void
eachofmyballs(
	float* theballs)
{
	unsigned int a, b;
	Window tmpRoot; unsigned int tmpUnsignedInt; int tmpInt;
	XGetGeometry(d, w, &tmpRoot, &tmpInt, &tmpInt, &a, &b, &tmpUnsignedInt, &tmpUnsignedInt);
	theballs[0] = a;
	theballs[1] = b;
}


void
suckmedry(
	float* assix)
{
	int a, b;

	int tmpInt; Window tmpRoot, tmpWin;
	XQueryPointer(d, w, &tmpRoot, &tmpWin, &tmpInt, &tmpInt, &a, &b, (unsigned int*)&tmpInt);

	assix[0] = a;
	assix[1] = b;
}