#version 410

layout(location = 1) in vec3 inColor;

out vec4 frag_color1;

void main() { 
	
	frag_color1 = vec4(inColor, 1.0); //* vec4(0.3, 0.1, 0.9, 1.0);
}