#include <GL/freeglut.h>


void display() {
    // set warna background ke hitam
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // Rotasi dengan 90 derajat
    glRotatef(90.0,0.0f,0.0f,0.1f);

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
    glutCreateWindow("Rotation");

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
