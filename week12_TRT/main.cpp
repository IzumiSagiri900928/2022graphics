#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glTranslatef( 0.4,-0.07,0);
        glutSolidTeapot(0.3);///0.3實心茶壺
    glPopMatrix();
    glutSwapBuffers();///交換2倍的buffer
    angle+=0.1;
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///初始化
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///兩倍+3D
    glutCreateWindow("week12TRT");///建視窗
    glutIdleFunc(display);
    glutDisplayFunc( display );///今天用來畫圖的函式

    glutMainLoop();///主要的迴圈
    return 0;
}
