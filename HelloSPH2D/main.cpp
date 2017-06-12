#include "Vector2D.h"
#include <iostream>
#include "SPH.h"
#include <GL\freeglut.h>

using namespace std;

void drawParticles()
{
	SPH *sph = new SPH();
	sph->initFluid();
	vector<Particle*> ps = sph->getParticles();
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(5.0);
	glBegin(GL_POINTS);
	for (Particle *p : ps)
	{
		cout << p->position.x << endl;
		glVertex2f(p->position.x, p->position.y);
	}
	glEnd();

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawParticles();
	glFlush();
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glEnable(GL_POINT_SMOOTH);
	glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
}

int main(int argc, char**argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("helloSPH");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}