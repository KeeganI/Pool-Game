/*
 * Cue.cpp
 *
 *  Created on: Dec 4, 2017
 *      Author: garrett parris
 */
#include "Cue.hpp"
#include <math.h>
Cue::Cue(){
this->x=0;
this->y=0;
this->angle=0;

}
//garrett : draws the pool cue based on white ball coords.
void Cue::draw(Ball w,GLfloat x1, GLfloat y1){
	GLfloat x2=w.position.x,y2=w.position.y;

	static const double TWOPI = 6.2831853071795865;
		    double theta = atan2(y2-y1, x2 - x1);
		    if (theta < 0.0)
		        theta += TWOPI;
		GLfloat angle=theta;
		GLfloat x0,y0,d=30;
		GLfloat s = sin(angle);
			GLfloat c = cos(angle);
		x0=x2-c*d;
		y0=y2-s*d;
		glLineWidth(5.0f);
			glBegin(GL_LINES);
			glVertex2f(x1,y1);
			glVertex2f(x0,y0);
			glEnd();
			glutPostRedisplay();
			this->x=x0;
			this->y=y0;
			this->angle=angle;
}


