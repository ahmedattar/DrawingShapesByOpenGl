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
	// we want to draw 6 regular shapes
	glClear(GL_COLOR_BUFFER_BIT);
	// first regular shape is pentagon 
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(5.0, 15);
	glVertex2f(14.937,18.135 );
	glVertex2f(20.073, 10.319);
	glVertex2f(14.443 ,2.353 );
	glVertex2f(5.127 ,5.246 );
	glEnd();
	
	// second regular shape is hexagon 
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(35.0 ,11.34 );
	glVertex2f(40.0 ,20.0 );
	glVertex2f(50.0 ,20.0 );
	glVertex2f(55.0 ,11.34 );
	glVertex2f(50.0 ,2.679 );
	glVertex2f(40.0 ,2.697 );
	glEnd();
	
	// third regular shape is heptagon 
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(70.0 ,20.0 );
	glVertex2f(78.381 ,20.065 );
	glVertex2f(83.658 ,13.552 );
	glVertex2f(81.856 ,5.367 );
	glVertex2f(74.333,1.672 );
	glVertex2f(66.753 ,5.25 );
	glVertex2f(64.825 ,13.407 );
	glEnd();
	
	// fourth regular shape is octagon 
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10.0,50.0 );
	glVertex2f(18.0 ,50.042 );
	glVertex2f(23.686 ,44.415 );
	glVertex2f(23.728 ,36.415 );
	glVertex2f(18.101 ,30.729 );
	glVertex2f(10.102 ,30.687 );
	glVertex2f(4.415 ,36.314 );
	glVertex2f(4.373 ,44.314 );
	glEnd();
	
	
	// fifth regular shape is nanogon 
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(40.0 ,50.0 );
	glVertex2f(48.482 ,50.042 );
	glVertex2f(55.008 ,44.622 );
	glVertex2f(56.522 ,36.276 );
	glVertex2f(52.317 ,28.909 );
	glVertex2f(44.361 ,25.968 );
	glVertex2f(36.375 ,28.879 );
	glVertex2f(32.089 ,36.154 );
	glVertex2f(33.529 ,44.515 );
	glEnd();

	// sixth regular shape is decagon 
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(75.0 , 50.0);
	glVertex2f(81.743 , 50.042) ;
	glVertex2f(87.223 , 46.113 );
	glVertex2f(89.346 , 39.713 );
	glVertex2f(87.303 , 33.287 );
	glVertex2f(81.872 , 29.29 );
	glVertex2f(75.13 , 29.248 );
	glVertex2f(69.65 , 33.177 );
	glVertex2f(67.526 , 39.577 );
	glVertex2f(69.57 , 46.003 );
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
