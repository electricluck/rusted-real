#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Engine {
public:
    Engine();
    ~Engine();

    // Initialize all subsystems and window
    bool init();

    // Main engine loop
    void run();

    // Clean up resources
    void shutdown();

private:
    // Core members
    GLFWwindow* window;
    bool running;
    float deltaTime;
    float lastFrame;

    // Internal methods
    void processInput();
    void update(float dt);
    void render();
};