#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///�զ⪺
    glutSolidTeapot(0.3);///�j����
    glPushMatrix();
        glTranslatef(0.3,0,0);///��U�����઺�F�豾�b�Y�B
        glRotatef(angle,0,0,1);
        glTranslatef( 0.4,-0.07,0);
        glColor3f(1,0,0);
        glutSolidTeapot(0.2);///0.2��߯���
    glPopMatrix();
    glutSwapBuffers();///�洫2����buffer
    angle+=0.1;
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///��l��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///�⭿+3D
    glutCreateWindow("week12TRT");///�ص���
    glutIdleFunc(display);
    glutDisplayFunc( display );///���ѥΨӵe�Ϫ��禡

    glutMainLoop();///�D�n���j��
    return 0;
}
