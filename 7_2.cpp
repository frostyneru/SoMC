#include <GL/glut.h>
#include <iostream>
#include <math.h>
using namespace std;

void draw() {
     float p;
     glClear (GL_COLOR_BUFFER_BIT);
 
	glBegin(GL_LINES);

	glColor3f(1.0, 0.0, 0.0);
	  	for (p=-1; p<1; p+=0.4)
		{
	  	glVertex2f(p,-1);
	  	glVertex2f(p, 1);
          glVertex2f(-1, p);
	  	glVertex2f(1, p);
		}
     glColor3f(1.0, 0.0, 0.0);
	  	glVertex2f(-0.99999,-1);
          glVertex2f(-0.99999, 1);
          glVertex2f(-1,-0.99999);
          glVertex2f(1, -0.99999);
  	glEnd();
	glFlush();  
}

//Main program

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	/*Setting up  The Display
	/    -RGB color model + Alpha Channel = GLUT_RGBA
	*/
	glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);

	//Configure Window Postion
	glutInitWindowPosition(50, 25);

	//Configure Window Size
	glutInitWindowSize(480,480);

	//Create Window
	glutCreateWindow("Hello OpenGL");


	//Call to the drawing function
	glutDisplayFunc(draw);

	// Loop require by OpenGL
	glutMainLoop();
	return 0;
	}
//g++ 7.cpp -lGL -lglut -o test
