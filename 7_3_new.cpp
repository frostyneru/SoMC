#include <GL/glut.h>
#include <math.h>
GLfloat x=320.0f,y=320.0f-64.0f,r=64.0f; GLint t = 50;

// Вызов функции для отрисовки сцены
void RenderScene(void)
{
	// Очищаем окно,используя текущий цвет очистки
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1,1,0);
	glBegin( GL_TRIANGLE_FAN );
		glVertex2f( x, y );  //центр окружности
		for(int i = 0; i <= t; i++ ) 
		{
			float a = (float)i / (float)t * 3.1415f * 2.0f;
			glVertex2f( x-cos( a ) * r, y-sin( a ) * r );
		}
	glEnd();
	glColor3f(0,0,0);
	glBegin( GL_LINES );
		glVertex2f(0.0f,320.0f);
		glVertex2f(640.0f,320.0f);
	glEnd();

	glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_QUADS);
		glVertex2f(320.0f-64.0f, 320.0f-128.0f-1.0f);
		glVertex2f(320.0f+64.0f, 320.0f-128.0f-1.0f);
		glVertex2f(320.0f+64.0f, 320.0f-1.0f);
		glVertex2f(320.0f-64.0f, 320.0f-1.0f);
	glEnd();
	// Очищаем очередь текущих команд и переключаем буффер
	glutSwapBuffers();
}
//Вызываем окно библиотекой GLUT в "холостом" состоянии
// (окно не меняет размера и не перемещается)
void TimerFunction(int value)
{
	if (y<320.0+192.0f)
		y+=1;
	glutPostRedisplay();
	glutTimerFunc(16, TimerFunction, 1);
}
void ChangeSize(GLsizei w, GLsizei h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 640.0, 0.0, 640.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glViewport(0, 0, 640, 640);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Hello OpenGL");
	glutDisplayFunc(RenderScene);
	glutReshapeFunc(ChangeSize);
	glutTimerFunc(16, TimerFunction, 1);
	glutMainLoop();
}
