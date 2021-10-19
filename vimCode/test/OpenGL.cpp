#include <GL/glut.h>
#include <math.h>

const int n = 50;
const GLfloat R = 0.5f;
const GLfloat Pi = 3.1415926536f;

void myDisplay(void) {
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	//glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	/* glBegin(GL_LINES);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.0f, 0.0f);*/
	glBegin(GL_POLYGON);
	for (i = 0; i < n; i++) {
		glVertex2f(R*cos(2 * Pi / n*i), R*sin(2 * Pi / n*i));
	}
	glEnd();
	glFlush();
}

void myDisplay1(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(50.0f);
	glBegin(GL_LINES);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.5f, 0.5f);
	glEnd(); 
	glFlush();
}
const GLfloat factor = 0.1f;
void myDisplay2(void) {
	GLfloat x;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(0.0, -1.0);
	glVertex2f(0.0, 1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	for (x = -1.0/factor; x < 1.0/factor; x += 0.01f) {
		glVertex2f(x*factor, sin(x)*factor);
	}
	glEnd();
	glFlush();
}

void myDisplay3(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(2, 0x0f0f);
	glLineWidth(10.0f);
	glBegin(GL_LINES);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.5f, 0.5f);
	glEnd();
	glFlush();
}

static int day = 360;
void myDisplayPlanet(void)
{
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(75, 1, 1, 400000000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0, -200000000, 200000000, 0, 0, 0, 0, 0, 1);
	//绘制太阳
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidSphere(69600000, 20, 20);
	//绘制地球
	glColor3f(0.0f, 0.0f, 1.0f);
	glRotatef(day / 260.0*360.0, 0.0f, 0.0f, -1.0f);
	glTranslatef(150000000, 0.0f, 0.0f);
	glutSolidSphere(15945000, 20, 20);
	//绘制月亮
	glColor3f(1.0f, 1.0f, 0.0f);
	glRotatef(day / 30.0*360.0 - day / 360.0*360.0, 0.0f, 0.0f, -1.0f);
	glTranslatef(38000000, 0.0f, 0.0f);
	glutSolidSphere(4345000, 20, 20);
	glFlush();
}


int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 800);
	glutCreateWindow("第一个OpenGL程序");
	//glutDisplayFunc(&myDisplay);
	//glutDisplayFunc(&myDisplay1);
	//glutDisplayFunc(&myDisplay2);
	//glutDisplayFunc(&myDisplay3);
	glutDisplayFunc(&myDisplayPlanet);
	glutMainLoop();
	return 0;
}