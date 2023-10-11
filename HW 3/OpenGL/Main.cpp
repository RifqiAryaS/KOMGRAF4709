#include <GL/glut.h>
#include <iostream>

void drawLineDDA(float x1, float y1, float x2, float y2)
{
    // Menghitung nilai delta
    float dx = x2 - x1;
    float dy = y2 - y1;
    float steps;

    // Menghitung jumlah step
    if (abs(dx) > abs(dy))
    {
        steps = abs(dx);
    }
    else
    {
        steps = abs(dy);
    }

    float xIncrement = dx / steps;
    float yIncrement = dy / steps;

    float x = x1;
    float y = y1;

    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_POINTS);
    for (int i = 0; i < steps; i++)
    {
        glVertex2f(x, y);
        x += xIncrement;
        y += yIncrement;
    }
    glEnd();
    glFlush();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    float x1, y1, x2, y2;

    // Prompt the user for input
    std::cout << "Masukkan koordinat (x1 y1 x2 y2): ";
    std::cin >> x1 >> y1 >> x2 >> y2;

    // Call the DDA line drawing function with user-provided endpoints
    drawLineDDA(x1, y1, x2, y2);

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("DDA Garis");
    glOrtho(0, 400, 0, 400, -1, 1);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
