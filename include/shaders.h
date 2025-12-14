#pragma once

#include <glad/glad.h>
#include <string>

class Shader
{
public:
    unsigned int ID;

    // Constructor: loads, compiles, and links shaders
    Shader(const char* vertexPath, const char* fragmentPath);

    // Activate the shader program
    void use();

    // Utility uniform functions
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;

private:
    // Checks shader compilation/linking errors
    void checkCompileErrors(unsigned int shader, const std::string& type);
};
