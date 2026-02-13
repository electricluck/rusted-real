#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

glm::mat4 view = glm::lookAt(cameraPos, cameraTarget, up);
glm::vec3 movement = glm::vec3(1.0f, 0.0f, 0.0f);
