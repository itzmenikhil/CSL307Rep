#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setiosflags;
using std::setprecision;

void display(void);
void exits(int);


void shoot(int);
void update_objects(void);
void lala(void);
static void key(unsigned char key, int x, int y);
void reshape(int, int);
void init(void);

bool tank1 = true,tank2 = true,tank3 = true,tank4 = true,tank5 = true;
bool bullet1 = false,bullet2 = false,bullet3 = false,bullet4 = false,bullet5 = false;
bool shoot1 = false,shoot2 = false,shoot3 = false,shoot4 = false,shoot5 = false;
bool food1 = false,food2 = false,food3 = false,food4 = false,food5 = false;

//static int shoot1 = 0,shoot2 = 0,shoot3 = 0,shoot4 = 0,shoot5 = 0;
float e1,e2,e3,e4,e5;
float bulletspeed=0.0005;
int bulletborder = 80,v=0;
static float move=0.0;

int main (int argc,char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(700, 1200);
glutInitWindowPosition(200, 100);
glutCreateWindow("Tank Attempt");
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutIdleFunc(update_objects);
//printf("*******************\n");
glutKeyboardFunc(key);
glutMainLoop();
return 0;
}

void init(void)
{
glClearColor(0.1, 0.5, 0.1, 0.0);
glShadeModel(GL_SMOOTH);



}

void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);


glPushMatrix();
if (tank1 == true)
{
glTranslatef(-40.0, -40.0, 0.0);

glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-8.0, -10.0);
glVertex2f(-10.0, 5.0);
glVertex2f(10.0, 5.0);
glVertex2f(8.0, -10.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-10.0, 5.0);
glVertex2f(-8.0, 10.0);
glVertex2f(8.0, 10.0);
glVertex2f(10.0, 5.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-1.0, 10.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 10.0);
glEnd();

}
glPopMatrix();
glPushMatrix();
if (tank2 == true)
{
glTranslatef(-20.0, -40.0, 0.0);

glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-8.0, -10.0);
glVertex2f(-10.0, 5.0);
glVertex2f(10.0, 5.0);
glVertex2f(8.0, -10.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-10.0, 5.0);
glVertex2f(-8.0, 10.0);
glVertex2f(8.0, 10.0);
glVertex2f(10.0, 5.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-1.0, 10.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 10.0);
glEnd();
}
glPopMatrix();
glPushMatrix();
if (tank3 == true)
{
glTranslatef(0.0, -40.0, 0.0);

glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-8.0, -10.0);
glVertex2f(-10.0, 5.0);
glVertex2f(10.0, 5.0);
glVertex2f(8.0, -10.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-10.0, 5.0);
glVertex2f(-8.0, 10.0);
glVertex2f(8.0, 10.0);
glVertex2f(10.0, 5.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-1.0, 10.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 10.0);
glEnd();
}
glPopMatrix();
glPushMatrix();
if (tank4 == true)
{
glTranslatef(20.0, -40.0, 0.0);

glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-8.0, -10.0);
glVertex2f(-10.0, 5.0);
glVertex2f(10.0, 5.0);
glVertex2f(8.0, -10.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-10.0, 5.0);
glVertex2f(-8.0, 10.0);
glVertex2f(8.0, 10.0);
glVertex2f(10.0, 5.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-1.0, 10.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 10.0);
glEnd();
}
glPopMatrix();
glPushMatrix();
if (tank5 == true)
{
glTranslatef(40.0, -40.0, 0.0);

glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-8.0, -10.0);
glVertex2f(-10.0, 5.0);
glVertex2f(10.0, 5.0);
glVertex2f(8.0, -10.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-10.0, 5.0);
glVertex2f(-8.0, 10.0);
glVertex2f(8.0, 10.0);
glVertex2f(10.0, 5.0);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.5, 0.1, 0.2);
glVertex2f(-1.0, 10.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 10.0);
glEnd();
}

glPushMatrix();
if(bullet1 == true)
{
glTranslatef(-80.0, e1, 0.0);
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 20.0);
glVertex2f(-1.0, 20.0);
glEnd();
}
glPopMatrix();

glPushMatrix();
if(bullet2 == true)
{
glTranslatef(-60.0, e2, 0.0);
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 20.0);
glVertex2f(-1.0, 20.0);
glEnd();
}
glPopMatrix();


glPushMatrix();
if(bullet3 == true)
{
glTranslatef(-40.0, e3, 0.0);
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 20.0);
glVertex2f(-1.0, 20.0);
glEnd();
}

glPopMatrix();
glPushMatrix();
if(bullet4 == true)
{
glTranslatef(-20.0, e4, 0.0);
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 20.0);
glVertex2f(-1.0, 20.0);
glEnd();
}
glPopMatrix();
if(bullet5 == true)
{
glTranslatef(0.0, e5, 0.0);
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-1.0, 21.0);
glVertex2f(1.0, 21.0);
glVertex2f(1.0, 20.0);
glVertex2f(-1.0, 20.0);
glEnd();
}
glPopMatrix();
glPushMatrix();
        glLineWidth(12.5);
	glBegin(GL_LINES);
	glVertex3f(-10.0+move, 40.0, 0.0);
	glVertex3f(10.0+move, 40.0, 0.0);
	glEnd();
glPopMatrix();

if(shoot1 == true || shoot2 == true || shoot3 == true || shoot4 == true || shoot5 == true){
glColor3f(1.0, 1.0, 0.0);
glPushMatrix();
        glLineWidth(2.5);
	glBegin(GL_LINES);
	glVertex3f(0.0+move, 40.0, 0.0);
	glVertex3f(-5.0+move, 35.0, 0.0);
	glEnd();
glPopMatrix();
glPushMatrix();
        glLineWidth(2.5);
	glBegin(GL_LINES);
	glVertex3f(0.0+move, 40.0, 0.0);
	glVertex3f(-2.5+move, 33.5, 0.0);
	glEnd();
glPopMatrix();
glPushMatrix();
        glLineWidth(2.5);
	glBegin(GL_LINES);
	glVertex3f(0.0+move, 40.0, 0.0);
	glVertex3f(5.0+move, 35.0, 0.0);
	glEnd();
glPopMatrix();
glPushMatrix();
        glLineWidth(2.5);
	glBegin(GL_LINES);
	glVertex3f(0.0+move, 40.0, 0.0);
	glVertex3f(0.0+move, 32.0, 0.0);
	glEnd();
glPopMatrix();
glPushMatrix();
        glLineWidth(2.5);
	glBegin(GL_LINES);
	glVertex3f(0.0+move, 40.0, 0.0);
	glVertex3f(2.5+move, 33.5, 0.0);
	glEnd();
glPopMatrix();

shoot1 = false;
shoot2 = false;
shoot3 = false;
shoot4 = false;
shoot5 = false;
}

for(int l=-40;l<=40;l=l+20){
glColor3f(0.5, 0.7, 0.3);

if(l == -40 && food1 == true)
    glColor3f(1.0, 1.0, 1.0);
if(l == -20 && food2 == true)
    glColor3f(1.0, 1.0, 1.0);
if(l == 0 && food3 == true)
    glColor3f(1.0, 1.0, 1.0);
if(l == 20 && food4 == true)
    glColor3f(1.0, 1.0, 1.0);
if(l == 40 && food5 == true)
    glColor3f(1.0, 1.0, 1.0);

glPushMatrix();
        glLineWidth(2.5);
	glTranslatef(l,47.0,0.0);
	glutSolidSphere(3, 10, 8);
glPopMatrix();
}
glutSwapBuffers();
}

void reshape (int w, int h)
{
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}


static void key(unsigned char key, int x, int y)
{
switch (key)
{
case 'Q':
case 'q':
exit(0);
glutPostRedisplay();
break;

case 'H':
case 'h':
     if(move < 40.0){
       move = move+20.0;
      }
glutPostRedisplay();
break;

case 'F':
case 'f':
     if(move > -40.0){
       move = move-20.0;
      }
glutPostRedisplay();
break;

default:
break;
glutPostRedisplay();
}
}



void update_objects(void)
{


int v=0;
v = (rand() % 5) + 1;
printf("random %d \n",v);
if(v == 1){
bullet1 = true;
}
else if(v == 2){
bullet2 = true;
}
else if(v == 3){
bullet3 = true;
}
else if(v == 4){
bullet4 = true;
}
else{
bullet5 = true;
}


//glutPostRedisplay();
for(int i=0;i<10000;i++){
printf("iteration %d \n",i);
if (bullet1 == true)
{//cout << "shooting\n" << endl;
     e1 = e1 + bulletspeed;
     if (e1 > bulletborder ) {
       bullet1 = false;
       e1=0;
       food1 = true;
     }
     if((e1 >= 60 && e1 <= 61) && move == -40.0){
        shoot1 = true;
        bullet1 = false;
        e1=0;
     }
}

if (bullet2 == true)
{//cout << "shooting2\n" << endl;
     e2 = e2 + bulletspeed;
     if (e2 > bulletborder ) {
       bullet2 = false;
       e2=0;
       food2 = true;
     }
     if((e2 >= 60 && e2 <= 61) && move == -20.0){
        shoot2 = true;
        bullet2 = false;
        e2=0;
     }
}

if (bullet3 == true)
{//cout << "shooting3\n" << endl;
     e3 = e3 + bulletspeed;
     if (e3 > bulletborder ) {
       bullet3 = false;
       e3=0;
       food3 = true;
     }
     if((e3 >= 60 && e3 <= 61) && move == 0.0){
        shoot3 = true;
        bullet3 = false;
        e3=0;
     }
}

if (bullet4 == true)
{//cout << "shooting4\n" << endl;
     e4 = e4 + bulletspeed;
     if (e4 > bulletborder ) {
       bullet4 = false;
       e4=0;
       food4 = true;
     }
     if((e4 >= 60 && e4 <= 61) && move == 20.0){
        shoot4 = true;
        bullet4 = false;
        e4=0;
     }
}

if (bullet5 == true)
{//cout << "shooting5\n" << endl;
     e5 = e5 + bulletspeed;
     if (e5 > bulletborder ) {
       bullet5 = false;
       e5=0;
       food5 = true;
     }
     if((e5 >= 60 && e5 <= 61) && move == 40.0){
        shoot5 = true;
        bullet5 = false;
        e5=0;
     }
}

glutPostRedisplay();
//sleep(0.7);
}
} 
