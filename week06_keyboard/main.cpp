#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);///����
    glutSolidTeapot(0.3);///0.3��߯���

    glutSwapBuffers();///�洫2����buffer
}
void keyboard(unsigned char key,int x,int y)
{
    printf("�{�b���U:%c �y�Цb:%d %d\n",key,x,y);
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///��l��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///�⭿+3D
    glutCreateWindow("week06 keyboard");///�ص���

    glutDisplayFunc( display );///���ѥΨӵe�Ϫ��禡
    glutKeyboardFunc(keyboard);
    glutMainLoop();///�D�n���j��
}
