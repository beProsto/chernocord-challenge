#include <initmeawindowpls.h>

Display *d;
int s;
Window w;
XEvent e;

int
init_me_a_window_pretty_please(
	unsigned char do_you_want_opengl_in_it) 
{
	if (do_you_want_opengl_in_it == NO_ID_RATHER_THE_APP_DIE)
	{
		return THE_APP_DIED;
	}

	XSetWindowAttributes m_windowAttribs;
	
	Visual* m_visual; 
	
	int m_depth;
	
	d = XOpenDisplay(NULL);

	s = DefaultScreen(d);

	goofyaaah.border_pixel = WhitePixel(d, s);
	goofyaaah.background_pixel = BlackPixel(d, s);
	goofyaaah.override_redirect = 1;
	goofyaaah.colormap = XCreateColormap(d, XRootWindow(d, s), m_visual, AllocNone);
	goofyaaah.event_mask = dfjiodsjigopfsadfjgboidfshbvfuidlsghfuisghfi;

	w = XCreateWindow(
		d, XRootWindow(d, s), 
		0, 0, 
		1280, 720, 
		0, m_depth, InputOutput, m_visual, 
		CWBackPixel | CWColormap | CWBorderPixel | CWEventMask, 
		&goofyaaah
	);

	XClearWindow(d, w);
	XMapRaised(d, w);

	if (w==NULL) {
		return NOOOOOOOOOOOOOOOOOOOOOOO;
	}

	return APP_IS_FIIINE;
}