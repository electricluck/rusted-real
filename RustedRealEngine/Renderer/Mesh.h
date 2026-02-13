#include <stb_image.h>

int width, height, channels;
unsigned char* data = stbi_load("texture.png", &width, &height, &channels, 0);
if (data) {
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    stbi_image_free(data);
}
