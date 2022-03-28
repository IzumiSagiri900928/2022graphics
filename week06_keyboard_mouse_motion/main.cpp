#include <GL/glut.h>
#include <stdio.h>
float x=250,y=250,z=0,oldX,scale=1.0,angle=0.0,oldY;
int now=1;///1:���� 2:���� 3:�Y��
void display()
{
    glClearColor(0.5,0.5,0.5,1);///clear����mR,G,B,A Alpha�S�Ψ�
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef((x-250)/250.0,-(y-250)/250.0,z);///maya:w
        glRotatef(angle,0,0,1);
        glScalef(scale,scale,scale);///maya:r
        glColor3f(1,1,0);///����
        glutSolidTeapot(0.3);///0.3��߯���

    glPopMatrix();
    glutSwapBuffers();///�洫2����buffer
}
void keyboard(unsigned char key,int x,int y)
{

    //printf("�{�b���U:%c �y�Цb:%d %d\n",key,x,y);
    if(key=='w' || key=='W') now=1;///����
    if(key=='e' || key=='E') now=2;///����
    if(key=='r' || key=='R') now=3;///�Y��
}
void mouse(int button,int state,int mouseX,int mouseY)
{
    oldX = mouseX;oldY=mouseY;
}
void motion(int mouseX,int mouseY)
{
    if(now==1){///����
        x+=(mouseX-oldX);
        y+=(mouseY-oldY);
    }
    else if(now==2){///����
        angle+=(mouseX-oldX);

    }
    else if(now==3){
        if(mouseX>oldX)scale=scale * 1.01;
        if(mouseX<oldX)scale=scale * 0.99;
    }
    oldX=mouseX; oldY=mouseY;
    display();
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv);///��l��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///�⭿+3D
    glutInitWindowSize(500,500);
    glutCreateWindow("week06 keyboard mouse motion");///�ص���

    glutDisplayFunc( display );///���ѥΨӵe�Ϫ��禡
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();///�D�n���j��
}