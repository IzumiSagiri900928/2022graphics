#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///�ƥ��x�}
        glRotatef(angle,0,0,1);
        glColor3f(1,1,0);///����
        glutSolidTeapot(0.3);///0.3��߯���
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();///�洫2����buffer
}
void motion(int x,int y)
{
    angle = x;
    display();
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///��l��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///�⭿+3D
    glutCreateWindow("week05_rotate������");///�ص���

    glutDisplayFunc( display );///���ѥΨӵe�Ϫ��禡
    glutMotionFunc(motion);
    glutMainLoop();///�D�n���j��
    return 0;
}
