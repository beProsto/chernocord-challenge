//🤤mm oo en gl=
#pragma once

#include <GL/gl.h>
#include <GL/glx.h>

#define GL_FUNC_LOAD(rettype, name, ...) \
	typedef rettype(*name##F)(__VA_ARGS__); \
	cum_##name = (name##F)glXGetProcAddress(#name);

#define GL_FUNC_DEF(rettype, name, ...) \
	typedef rettype(*name##F)(__VA_ARGS__); \
	extern name##F cum_##name;

#define GL_FUNC_INIT(rettype, name, ...) \
	typedef rettype(*name##F)(__VA_ARGS__); \
	name##F cum_##name;

#define INIT_MY_BALLS(what) \
	what(unsigned int, glCreateShader, unsigned int) \
	what(void, glShaderSource, unsigned int, unsigned int, const char**, unsigned int) \
	what(void, glCompileShader, unsigned int) \
	what(void, glGetShaderiv, unsigned int, unsigned int, int*) \
	what(void, glGetShaderInfoLog, unsigned int, unsigned int, unsigned int, char*) \
	what(unsigned int, glCreateProgram) \
	what(void, glAttachShader, unsigned int, unsigned int) \
	what(void, glLinkProgram, unsigned int) \
	what(void, glValidateProgram, unsigned int) \
	what(void, glDeleteShader, unsigned int) \
	what(void, glUseProgram, unsigned int) \
	what(void, glDeleteProgram, unsigned int) \
	what(void, glGenVertexArrays, unsigned int, unsigned int*) \
	what(void, glBindVertexArray, unsigned int) \
	what(void, glGenBuffers, unsigned int, unsigned int*) \
	what(void, glBindBuffer, unsigned int, unsigned int) \
	what(void, glDeleteVertexArrays, unsigned int, unsigned int*) \
	what(void, glDeleteBuffers, unsigned int, unsigned int*) \
	what(void, glBufferData, unsigned int, unsigned int, void*, unsigned int) \
	what(void, glVertexAttribPointer, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void*) \
	what(void, glEnableVertexAttribArray, unsigned int) \
	what(void, glViewport, unsigned int, unsigned int, unsigned int, unsigned int) \
	what(void, glClearColor, float, float, float, float) \
	what(void, glClear, unsigned int) \
	what(int, glGetUniformLocation, unsigned int, const char*) \
	what(void, glUniform2f, int, float, float) \
	what(void, glUniformMatrix4fv, int, unsigned int, unsigned char, float*) \
	what(void, glDrawArrays, unsigned int, unsigned int, unsigned int)

INIT_MY_BALLS(GL_FUNC_DEF)


#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_COMPILE_STATUS 0x8B81
#define GL_ARRAY_BUFFER 0x8892
#define GL_STATIC_DRAW 0x88E4

// dksopfskdopfkdopwsf