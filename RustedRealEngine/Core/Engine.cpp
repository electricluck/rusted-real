#include "Engine.h"

Engine::Engine()
    : window(nullptr), running(false), deltaTime(0.0f), lastFrame(0.0f) {}

Engine::~Engine() {
    shutdown();
}

bool Engine::init() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return false;
    }

    window = glfwCreateWindow(1280, 720, "Rusted Real Engine", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGL()) {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        return false;
    }

    running = true;
    glEnable(GL_DEPTH_TEST);

    return true;
}

void Engine::run() {
    while (running && !glfwWindowShouldClose(window)) {
        float currentFrame = static_cast<float>(glfwGetTime());
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        processInput();
        update(deltaTime);
        render();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

void Engine::processInput() {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        running = false;
    }
}

void Engine::update(float dt) {
    // TODO: Update ECS systems here
}

void Engine::render() {
    glClearColor(0.1f, 0.1f, 0.15f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // TODO: Render all entities
}