#include <iostream>
#include "glut.h"


void desenho() {
    glClear(GL_COLOR_BUFFER_BIT);

    glFlush();
}

int main(int argc, char** argv) {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Primeira Janela");
    //inicia();
    glutDisplayFunc(desenho);
    glutMainLoop();
    return 0;
}