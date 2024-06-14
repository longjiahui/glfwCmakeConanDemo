#version 410 core
in vec3 aPos;

out vec4 position;

void main()
{
    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);
    position = gl_Position;
}