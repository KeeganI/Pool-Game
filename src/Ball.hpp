#ifndef Ball_H
#define Ball_H
#include <GL/glut.h>

#include "vector.hpp"
class Ball
{
	public:
		GLint xBorder,yBorder,xBorder1,yBorder1;
		GLfloat dt,lastFrame;//ok
		Ball();;
		Vector position;
		Vector velocity;
		bool isBallHit(Ball *b);
		void resolve(Ball *b);
		GLfloat radius;
		bool isInHole;
		bool hitLeft();
		bool hitRight();
		bool hitTop();
		bool hitBot();
};

#endif
