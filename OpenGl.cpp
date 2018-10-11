//Tactical_Hacker

#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0); 
	glMatrixMode(GL_PROJECTION); 
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}
void drawing_shapes(){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(5.0, 15);
	glVertex2i(14.937,18.135 );
	glVertex2i(20.073, 10.319);
	glVertex2i(14.443 ,2.353 );
	glVertex2i(5.127 ,5.246 );
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	
	glVertex2i(35.0 ,11.34 );
	glVertex2i(40.0 ,20.0 );
	glVertex2i(50.0 ,20.0 );
	glVertex2i(55.0 ,11.34 );
	glVertex2i(50.0 ,2.679 );
	glVertex2i(40.0 ,2.697 );
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(70.0 ,20.0 );
	glVertex2i(78.381 ,20.065 );
	glVertex2i(83.658 ,13.552 );
	glVertex2i(81.856 ,5.367 );
	glVertex2i(74.333,1.672 );
	glVertex2i(66.753 ,5.25 );
	glVertex2i(64.825 ,13.407 );
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	
	glBegin(GL_POLYGON);
	glVertex2i(10.0,50.0 );
	glVertex2i(18.0 ,50.042 );
	glVertex2i(23.686 ,44.415 );
	glVertex2i(23.728 ,36.415 );
	glVertex2i(18.101 ,30.729 );
	glVertex2i(10.102 ,30.687 );
	glVertex2i(4.415 ,36.314 );
	glVertex2i(4.373 ,44.314 );
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(40.0 ,50.0 );
	glVertex2i(48.482 ,50.042 );
	glVertex2i(55.008 ,44.622 );
	glVertex2i(56.522 ,36.276 );
	glVertex2i(52.317 ,28.909 );
	glVertex2i(44.361 ,25.968 );
	glVertex2i(36.375 ,28.879 );
	glVertex2i(32.089 ,36.154 );
	glVertex2i(33.529 ,44.515 );
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(75.0 , 50.0);
	glVertex2i(81.743 , 50.042) ;
	glVertex2i(87.223 , 46.113 );
	glVertex2i(89.346 , 39.713 );
	glVertex2i(87.303 , 33.287 );
	glVertex2i(81.872 , 29.29 );
	glVertex2i(75.13 , 29.248 );
	glVertex2i(69.65 , 33.177 );
	glVertex2i(67.526 , 39.577 );
	glVertex2i(69.57 , 46.003 );
	glEnd();

	glFlush();

	

}


void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowPosition(50,50); 
	glutInitWindowSize(1000, 600); //sets the initial window size
	glutCreateWindow("Polygons"); // creates the window with name line
	init();
	glutDisplayFunc(drawing_shapes); 
	glutMainLoop(); // enters the GLUT event processing loop
}
