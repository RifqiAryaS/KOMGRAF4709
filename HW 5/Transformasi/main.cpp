#include <GL/freeglut.h>


void display() {
    // set warna background ke hitam
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // Translasi dengan menggeser ke (-2,-2)
    glTranslatef(-0.2f,-0.2f,0.0f);

    // Gambar garis
    glBegin(GL_LINES);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);;
    glVertex2f(0.2,0.3);
    glVertex2f(0.5,0.3);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Translation");

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
