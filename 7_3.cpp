#include <GL/glut.h>
#include <math.h>
#include <thread>
#include <chrono>
#include <iostream>
 
GLint Width = 512, Height = 512;
 
using namespace std;

void Timer(int value)
     {  
          glutPostRedisplay(); 
          glutTimerFunc(5000, Timer, 0); 
     }

void Display(void)
{
     float x=256.0,y=192.0;
     float r=64.0; //радиус
     int t=50;  //на сколько частей делить круг (сколько треугольников рисовать)
     while (y<250)
     {
          glClearColor(1, 1, 1, 1);
          glClear(GL_COLOR_BUFFER_BIT);
          glBegin( GL_TRIANGLE_FAN );
                         glColor3f(1,1,0);
                         glVertex2f( x, y );  //центр окружности
                         for(int i = 0; i <= t; i++ ) {
                             float a = (float)i / (float)t * 3.1415f * 2.0f;
                             glVertex2f( x-cos( a ) * r, y-sin( a ) * r );
                         }
              glEnd();
          glBegin( GL_LINES );
                    glColor3f(0,0,0);
                    glVertex2f(0,256);
                    glVertex2f(512,256);
               glEnd();
          glBegin ( GL_QUADS );
                    glColor3f(1,1,1);
                    glVertex2f(192,128);
                    glVertex2f(129,255);
                    glVertex2f(320,255);
                    glVertex2f(320,128);
               glEnd();
          y+=1;
          glutTimerFunc(5000, Timer, 0);
     }
     glFlush();
     glFinish();
}
 



void Reshape(GLint w, GLint h)
{
     Width = w; Height = h;
     glViewport(0, 0, w, h);
     glMatrixMode(GL_PROJECTION); 
     glLoadIdentity(); 
     glOrtho(0, w, 0, h, -1.0, 1.0); 
     glMatrixMode(GL_MODELVIEW);
     glLoadIdentity(); 
} 
 
void Keyboard( unsigned char key, int x, int y )
{
     #define ESCAPE '\033'
     if( key == ESCAPE ) exit(0);
}
 
 
main(int argc, char *argv[]) 
{
     glutInit(&argc, argv);                       //Инициализация
     glutInitDisplayMode(GLUT_RGB);               //Инициализация
     glutInitWindowSize(Width, Height);           //Инициализация окна с размерами w,h
     glutCreateWindow("Sunrise");      //Создание окна с названием в ""
     glutDisplayFunc(Display);                    //Процедура рисовки основного изображения
     glutReshapeFunc(Reshape);                  //Процедура перерисовки
     glutKeyboardFunc(Keyboard);                  //Процедура нажатия клавиш
     glutMainLoop();                              //Процедура обработки событий
}
