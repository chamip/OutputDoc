// #include <GL/gl.h>
// #include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <time.h>
// #include <unistd.h>

static int day = 360;

double CalFrequency() {
    static int count;
    static double save;
    static clock_t last, current;
    double timeGap;

    ++count;
    last = current;
    current = clock();
    timeGap = (current - last) / (double)CLOCKS_PER_SEC;
    save = 50.0 / timeGap;
    return save;
}

void myDisplayPlanet(void)
{
    double FPS = CalFrequency();
    printf("FPS = %f\n", FPS);

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

    glutSwapBuffers();
}

void myIdle(void) {
    ++day;
    if(day >= 360) {
        day = 0;
    }
    myDisplayPlanet();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Sun/Earth/Moon");
	//glutDisplayFunc(&myDisplay);
	//glutDisplayFunc(&myDisplay1);
	//glutDisplayFunc(&myDisplay2);
	//glutDisplayFunc(&myDisplay3);
	glutDisplayFunc(&myDisplayPlanet);
    glutIdleFunc(&myIdle);
	glutMainLoop();
	return 0;
}