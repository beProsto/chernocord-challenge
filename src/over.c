#include <openglussy🤤.h>
#include <initmeawindowpls.h>
#include <stdio.h>

INIT_MY_BALLS(GL_FUNC_INIT)

float vertices[] = {
	-0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, 0.0f, 0.0f, 1.0f, 0.0f,
	0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f
};

const char* vsc = 
"#version 330\n\
\n\
layout (location = 0) in vec3 a_Position;\n\
layout (location = 1) in vec3 a_Color;\n\
\n\
out vec4 v_Color;\n\
\n\
uniform mat4 u_Proj;\n\
uniform mat4 u_Tran;\n\
\n\
void main() {\n\
\tgl_Position = u_Proj * u_Tran * vec4(a_Position, 1.0f);\n\
\tv_Color = vec4(a_Color, 1.0f);\n\
}\n";

const char* fsc = 
"#version 330\n\
\n\
out vec4 o_Color;\n\
\n\
in vec4 v_Color;\n\
\n\
void main() {\n\
\to_Color = v_Color;\n\
}\n";

unsigned int vShaderID, fShaderID, shaderID, vbID, vaID;


void
cum_init(
	)
{

	int  success;
	char infoLog[512];

	vShaderID = cum_glCreateShader(GL_VERTEX_SHADER);
	cum_glShaderSource(vShaderID, 1, &vsc, 0);
	cum_glCompileShader(vShaderID);

	cum_glGetShaderiv(vShaderID, GL_COMPILE_STATUS, &success);
	if(!success)
	{
		cum_glGetShaderInfoLog(vShaderID, 512, 0, infoLog);
		printf(infoLog);
	}

	fShaderID = cum_glCreateShader(GL_FRAGMENT_SHADER);
	cum_glShaderSource(fShaderID, 1, &fsc, 0);
	cum_glCompileShader(fShaderID);
	
	cum_glGetShaderiv(fShaderID, GL_COMPILE_STATUS, &success);
	if(!success)
	{
		cum_glGetShaderInfoLog(fShaderID, 512, 0, infoLog);
		printf(infoLog);
	}

	shaderID = cum_glCreateProgram();
	cum_glAttachShader(shaderID, vShaderID);
	cum_glAttachShader(shaderID, fShaderID);
	cum_glLinkProgram(shaderID);
	cum_glValidateProgram(shaderID);

	cum_glDeleteShader(vShaderID);
	cum_glDeleteShader(fShaderID);

	cum_glUseProgram(shaderID);

	cum_glGenVertexArrays(1, &vaID);
	cum_glBindVertexArray(vaID);

	cum_glGenBuffers(1, &vbID);
	cum_glBindBuffer(GL_ARRAY_BUFFER, vbID);

	cum_glBufferData(GL_ARRAY_BUFFER, 18 * sizeof(float), vertices, GL_STATIC_DRAW);

	cum_glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
	cum_glEnableVertexAttribArray(0);  
	cum_glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
	cum_glEnableVertexAttribArray(1);  
}

void
cum_render(
	)
{
	cum_glDrawArrays(GL_TRIANGLES, 0, 3);
}