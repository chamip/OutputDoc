#include <GL/glut.h>
#include <math.h>

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

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 800);
	glutCreateWindow("第一个OpenGL程序");
	//glutDisplayFunc(&myDisplay);
	//glutDisplayFunc(&myDisplay1);
	glutDisplayFunc(&myDisplay2);
	//glutDisplayFunc(&myDisplay3);
	//glutDisplayFunc(&myDisplayPlanet);
	glutMainLoop();
	return 0;
}