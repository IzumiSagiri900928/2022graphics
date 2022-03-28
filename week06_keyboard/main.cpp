#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);///黃色
    glutSolidTeapot(0.3);///0.3實心茶壺

    glutSwapBuffers();///交換2倍的buffer
}
void keyboard(unsigned char key,int x,int y)
{
    printf("現在按下:%c 座標在:%d %d\n",key,x,y);
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///初始化
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///兩倍+3D
    glutCreateWindow("week06 keyboard");///建視窗

    glutDisplayFunc( display );///今天用來畫圖的函式
    glutKeyboardFunc(keyboard);
    glutMainLoop();///主要的迴圈
}
