#include <GL/glut.h>
void myTeapot(float x, float y)///�ۭq���禡
{
    glPushMatrix();///push�ƥ��x�}
        glTranslatef( x, y,0);
        glutSolidTeapot(0.3);///0.3��߯���
    glPopMatrix();///pop�٭�x�}
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);///red
    myTeapot(+0.5,+0.5);
    myTeapot(+0.5,-0.5);
    myTeapot(-0.5,-0.5);
    myTeapot(-0.5,+0.5);

    glutSwapBuffers();///�洫2����buffer
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///��l��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///�⭿+3D
    glutCreateWindow("week04������");///�ص���

    glutDisplayFunc( display );///���ѥΨӵe�Ϫ��禡

    glutMainLoop();///�D�n���j��
    return 0;
}
