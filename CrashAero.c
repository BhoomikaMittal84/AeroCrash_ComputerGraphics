#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
GLfloat a=0,b=0,c=0,d=0,e=0;
void building();
void building1();
void outline();
void blast();
void road();
void display2();
void display3();
void build_outline();
void update(int value)
{
a+=20.0; //Plane position takeoff on x axis
b-=10.0; //Road Strip backward movement
c+=15; //take off at certain angle on y axis
if(b<=-78.0)// moving of run way
b=0.0;
glutPostRedisplay();
glutTimerFunc(150,update,0);//delay
}
void display(void)
{
int i;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.300f, 1.000f, 0.300f);
char str[]="Vijaya Vittala Institute of Technology";
glRasterPos2f(200,450);
for(i=0;i<strlen(str);i++){
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
}
glColor3f(0.302f, 1.000f, 0.302f);
char str1[]="Bangalore";
glRasterPos2f(200,420);
for(i=0;i<strlen(str1);i++){
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
}
glColor3f(0.002f, 0.000f, 0.002f);
char str2[]="Department of Computer Science and Engineering";
glRasterPos2f(200,350);
for(i=0;i<strlen(str2);i++){
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str2[i]);
}
glColor3f(0.002f, 0.000f, 0.002f);
char str3[]="COMPUTER GRAPHICS AND VISUALIZATION";
glRasterPos2f(200,300);
for(i=0;i<strlen(str3);i++){
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str3[i]);
}
glColor3f(0.002f, 0.000f, 0.002f);
char str4[]="MINI PROJECT";
glRasterPos2f(220,280);
for(i=0;i<strlen(str4);i++){
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str4[i]);
}
glColor3f(0.002f, 0.000f, 0.802f);
char str7[]="Team Members:";
glRasterPos2f(50,200);
for(i=0;i<strlen(str7);i++){
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
}
glColor3f(1.002f, 0.700f, 0.302f);
char str8[]="HASAN ABBAS";
glRasterPos2f(50,175);
for(i=0;i<strlen(str8);i++){
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str8[i]);
}
glColor3f(1.002f, 0.700f, 0.302f);
char str9[]="KISHAN SHARMA ";
glRasterPos2f(50,150);
for(i=0;i<strlen(str9);i++){
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str9[i]);
}
glColor3f(1.002f, 0.700f, 0.302f);
char str21[]="BHOOMIKA MITTAL";
glRasterPos2f(50,125);
for(i=0;i<strlen(str21);i++){
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str21[i]);
}
glColor3f(0.302f, 0.005f, 0.302f);
char str14[]="Press e to enter";
glRasterPos2f(200,25); //calculate points by referring previous text positions
for(i=0;i<strlen(str14);i++){
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);
}
glEnd();
glFlush();
}
void secondpage(){
glClear(GL_COLOR_BUFFER_BIT);
road();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//rectangular body
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(135.0,55.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//upper triangle construction plane
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);//outline of upper triangle plane
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//lower triangle
glVertex2f(135.0,40.0);
glVertex2f(160.0,40.0);
glVertex2f(160.0,37.0);
glVertex2f(145.0,30.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//back wing
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(10.0,80.0);
glVertex2f(40.0,55.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//left side wing
glVertex2f(65.0,55.0);
glVertex2f(50.0,70.0);
glVertex2f(75.0,70.0);
glVertex2f(90.0,55.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//right side wing
glVertex2f(70.0,40.0);
glVertex2f(100.0,40.0);
glVertex2f(80.0,15.0);
glVertex2f(50.0,15.0);
glEnd();
glPopMatrix();
if(c>360) //timer to jump to next display
{
display2();
d+=20;//plane takeoff on x in 2nd display
}
if(a>500.0)//window position during take off
{
a=0.0;
b=0.0;
}
if(c>750)//timer to jump to 3rd display
{
display3();
e+=20;//plane takeoff on x in 3rd display
if(e>250)//timer to call blast function
{
blast();
e=250;
}
}
glFlush();
}
void building()
{
glColor3f(0.60,0.40,0.70);
glBegin(GL_POLYGON);
glVertex2f(350.0,80.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,400.0);
glVertex2f(400.0,0.0);
glEnd();
glColor3f(0.75,0.75,0.75);
glBegin(GL_POLYGON);
glVertex2f(400.0,0.0);
glVertex2f(400.0,400.0);
glVertex2f(450.0,400.0);
glVertex2f(450.0,0.0);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(400.0,400.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,480.0);
glVertex2f(450.0,400.0);
glEnd();
glColor3f(0.60,0.40,0.70);
glBegin(GL_POLYGON);//upper triangle of building
glVertex2f(400.0,400.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,480.0);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);//separation line of floors
glVertex2f(350.0,180);
glVertex2f(400.0,100);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(350.0,280);
glVertex2f(400.0,200);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(350.0,380);
glVertex2f(400.0,300);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(450.0,100);
glVertex2f(400.0,100);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(450.0,200);
glVertex2f(400.0,200);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(450.0,300);
glVertex2f(400.0,300);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(350.0,180);
glEnd();
build_outline();
}
void build_outline()//building outlines
{
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(350.0,80.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,400.0);
glVertex2f(400.0,0.0);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(400.0,0.0);
glVertex2f(400.0,400.0);
glVertex2f(450.0,400.0);
glVertex2f(450.0,0.0);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(400.0,400.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,480.0);
glVertex2f(450.0,400.0);
glEnd();
}
void blast(void)//blast polygon construction
{
glPushMatrix();
glTranslated(-10.0,-60.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(404.4,320.0);
glVertex2f(384.0,285.0);
glVertex2f(368.0,344.5);
glVertex2f(344.0,355.0);
glVertex2f(347.2,414.5);
glVertex2f(332.8,442.5);
glVertex2f(347.2,477.5);
glVertex2f(352.0,530.0);
glVertex2f(379.2,519.5);
glVertex2f(396.8,565.0);
glVertex2f(416.0,530.0);
glVertex2f(440.0,547.5);
glVertex2f(452.8,512.5);
glVertex2f(472.0,512.5);
glVertex2f(475.2,470.5);
glVertex2f(488.0,442.5);
glVertex2f(488.0,404.0);
glVertex2f(470.0,372.5);
glVertex2f(475.2,337.5);
glVertex2f(464.0,306.0);
glVertex2f(444.8,320.0);
glVertex2f(425.6,285.0);
glVertex2f(404.8,320.0);
glEnd();
glPopMatrix();
}
void road()
{
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//black road
glVertex2f(0.0,0.0);
glVertex2f(0.0,100.0);
glVertex2f(500.0,100.0);
glVertex2f(500.0,0.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//white strips on road
glVertex2f(0.0,40.0);
glVertex2f(8.0,60.0);
glVertex2f(58.0,60.0);
glVertex2f(50.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(100.0,40.0);
glVertex2f(108.0,60.0);
glVertex2f(158.0,60.0);
glVertex2f(150.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(200.0,40.0);
glVertex2f(208.0,60.0);
glVertex2f(258.0,60.0);
glVertex2f(250.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(300.0,40.0);
glVertex2f(308.0,60.0);
glVertex2f(358.0,60.0);
glVertex2f(350.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(400.0,40.0);
glVertex2f(408.0,60.0);
glVertex2f(458.0,60.0);
glVertex2f(450.0,40.0);
glEnd();
glPopMatrix();
}
void display2()
{
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(135.0,55.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,40.0);
glVertex2f(160.0,40.0);
glVertex2f(160.0,37.0);
glVertex2f(145.0,30.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(10.0,80.0);
glVertex2f(40.0,55.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(65.0,55.0);
glVertex2f(50.0,70.0);
glVertex2f(75.0,70.0);
glVertex2f(90.0,55.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(70.0,40.0);
glVertex2f(100.0,40.0);
glVertex2f(80.0,15.0);
glVertex2f(50.0,15.0);
glEnd();
glPopMatrix();
}
void display3()
{
glClear(GL_COLOR_BUFFER_BIT);
building();
glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(135.0,55.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,40.0);
glVertex2f(160.0,40.0);
glVertex2f(160.0,37.0);
glVertex2f(145.0,30.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(10.0,80.0);
glVertex2f(40.0,55.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(65.0,55.0);
glVertex2f(50.0,70.0);
glVertex2f(75.0,70.0);
glVertex2f(90.0,55.0);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(70.0,40.0);
glVertex2f(100.0,40.0);
glVertex2f(80.0,15.0);
glVertex2f(50.0,15.0);
glEnd();
glPopMatrix();
}
void myinit()
{
glClearColor(0.0f,0.5f,1.0f,0.0f);
glColor3f(1.0,0.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,499.0,0.0,499.0);
}
void myinit1()
{
glClearColor(0.0f,0.0f,0.0f,0.0f);
glColor3f(1.0,0.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,499.0,0.0,499.0);
}
void firstwindow(unsigned char firstwindow,int x,int y)
{
int id2;
if(firstwindow=='E' || firstwindow=='e')
{
glClearColor(0.0f,0.0f,0.0f,0.0f);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500.0,499.0);
id2=glutCreateWindow("AeroCrash");
glutDisplayFunc(secondpage);
myinit();
glutTimerFunc(100,update,0);
}
}
void main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500.0,500.0);
glutInitWindowPosition(0,0);
glutCreateWindow("First Page");
glutDisplayFunc(display);
glutKeyboardFunc(firstwindow);
myinit1();
glutMainLoop();

}

