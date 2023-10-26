#include <GL/freeglut.h>


void display() {
    // set warna background ke hitam
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // scaling (2,2)
    glScalef(2.0f,2.0f,2.0f);

    // Gambar garis
    glBegin(GL_TRIANGLES);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);;
    glVertex2f(0.2,0.3);
    glVertex2f(0.5,0.3);
    glVertex2f(0.35,0.0);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Scaling");

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
