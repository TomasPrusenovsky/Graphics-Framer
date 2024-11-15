#include "Framer/Framer.h"

int main() {
    fr::Window window(800, 800, "Framer-Project");

    while (window.IsRunning()) {
        glViewport(0, 0, 800, 800);
        glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        window.OnUpdate();
    }
}
