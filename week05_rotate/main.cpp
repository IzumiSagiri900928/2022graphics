#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///備份矩陣
        glRotatef(angle,0,0,1);
        glColor3f(1,1,0);///黃色
        glutSolidTeapot(0.3);///0.3實心茶壺
    glPopMatrix();///還原矩陣
    glutSwapBuffers();///交換2倍的buffer
}
void motion(int x,int y)
{
    angle = x;
    display();
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///初始化
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///兩倍+3D
    glutCreateWindow("week05_rotate的視窗");///建視窗

    glutDisplayFunc( display );///今天用來畫圖的函式
    glutMotionFunc(motion);
    glutMainLoop();///主要的迴圈
    return 0;
}
