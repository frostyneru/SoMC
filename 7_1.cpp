#include <GL/glut.h>
#include <iostream>
#include <math.h>
using namespace std;

float fn(float k)
{
	float z;
	if (k+5<0)
		z=1/(2*k)-10;
	else
		if (k+5>0)
		{
			cout << "true"<< k+5 <<   endl;
			z=(k-sin(k))/k;
		}
	return(z);
}
void draw() {
	float x1;
	float Xst, Xen, step , max;
	cin >> Xst;
	cin >> Xen;
	cin >> step;
	if (fabs(Xst)>fabs(Xen))
		max=fabs(Xst);
	else
		max=fabs(Xen);
    	glClear(GL_COLOR_BUFFER_BIT);  
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	  	for (x1=-max; x1<-5; x1+=step)
		{
	  	glVertex2f(x1/fabs(max), -fn(x1)/2500);
	  	glVertex2f((x1+step)/fabs(max), -fn(x1+step)/2500);
		cout << x1 << " " << fn(x1) << endl;
		}
	glColor3f(0.0, 1.0, 0.0);
		for (x1=(-5+step); x1<max; x1+=step)
		{
	 	glVertex2f(x1/fabs(max), fn(x1)/1.5);
	  	glVertex2f((x1+step)/fabs(max), fn(x1+step)/1.5);
		cout << x1 << " " << fn(x1) << endl;
		}
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
