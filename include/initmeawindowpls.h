#pragma once

#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern Display *d;
extern int s;
extern Window w;
extern XEvent e;

enum 
doyou 
{
	YES_I_WANT_OPENGL = 0,
	NO_ID_RATHER_THE_APP_DIE = 1,
};

enum
why
{
	APP_IS_FIIINE = 0,
	THE_APP_DIED = 1,
	NOOOOOOOOOOOOOOOOOOOOOOO = 2
};

int
init_me_a_window_pretty_please(
	unsigned char do_you_want_opengl_in_it);

#define dfjiodsjigopfsadfjgboidfshbvfuidlsghfuisghfi FocusChangeMask | KeyPressMask | ButtonPressMask