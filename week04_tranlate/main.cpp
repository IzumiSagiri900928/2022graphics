#include <GL/glut.h>
void myTeapot(float x, float y)///自訂的函式
{
    glPushMatrix();///push備份矩陣
        glTranslatef( x, y,0);
        glutSolidTeapot(0.3);///0.3實心茶壺
    glPopMatrix();///pop還原矩陣
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);///red
    myTeapot(+0.5,+0.5);
    myTeapot(+0.5,-0.5);
    myTeapot(-0.5,-0.5);
    myTeapot(-0.5,+0.5);

    glutSwapBuffers();///交換2倍的buffer
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///初始化
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///兩倍+3D
    glutCreateWindow("week04的視窗");///建視窗

    glutDisplayFunc( display );///今天用來畫圖的函式

    glutMainLoop();///主要的迴圈
    return 0;
}
