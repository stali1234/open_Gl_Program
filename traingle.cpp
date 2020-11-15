glBegin(GL_TRIANGLES);       // Each set of 3 vertices form a triangle
glColor3f(0.0f, 0.0f, 1.0f); // Blue
glVertex2f(0.1f, -0.6f);
glVertex2f(0.7f, -0.6f);
glVertex2f(0.4f, -0.1f);

#include <GL/glut.h>

void Display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(1, 1, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glEnd();

    glBegin(GL_TRIANGLES);       // Each set of 3 vertices form a triangle
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow(" polygon clipping algorithm");
    glutDisplayFunc(Display); //display callback

    glutMainLoop();

    return 0;
}