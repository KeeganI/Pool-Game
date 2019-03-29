/*
 * vector.hpp
 *
 *  Created on: Dec 3, 2017
 *      Author: William Ireland
 */

#ifndef CVECTOR_H
#define CVECTOR_H

#include <GL/glut.h>

class Vector {
 public:
	GLfloat x,y,z; 			//the coordinates
	Vector();
	Vector(GLfloat dx, GLfloat dy, GLfloat dz);
	void set(GLfloat dx, GLfloat yy, GLfloat dz);
	void set(Vector& v);
	void flip(); 			// reverse this vector
	void normalize();		//adjust this vector to unit length
	Vector cross(Vector b); //return this cross b
	GLfloat dot(Vector b); 	//return this dottedok with b
	void build4tuple(GLfloat v[]); //v[0]=x,v[1]=y,v[2]=z,v[3]=0 for homogeneous
	void printVector();
	Vector minus(Vector);
	Vector add(Vector );
	GLfloat distance(Vector);
	GLfloat length();
};

#endif
