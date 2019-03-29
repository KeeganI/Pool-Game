/*
 * game.hpp
 *
 *  Created on: Dec 3, 2017
 *      Author: William Ireland
 */

#ifndef GAME_HPP
#define GAME_HPP
#include <GL/glut.h>
#include <math.h>
#include "Ball.hpp"
#include "Cue.hpp"
#define NUM_OF_BALLS 16
#define NUM_OF_POCKETS 6
GLint ticks=0;

const int border = 40;
GLint window_width = 980;
GLint window_height = (window_width / 2) + border;
GLfloat radius = 12;
GLfloat pocket_radius = 20;
bool isMoving = false;
GLint moving = 0,xBorder1=40,yBorder1=40;
GLfloat xBegin,yBegin,force=100;
Ball *balls[NUM_OF_BALLS];
Ball *pockets[NUM_OF_POCKETS];//ok
Cue cue;
void setupGame();
void initLights(void);
void setupRenderingContext(void);
void display(void);;
void reshape(int width, int height);
void mouseAction(GLint button, GLint state, GLint x, GLint y);
void mouseMotion(GLint x, GLint y);
void strikeBall();
void checkCollisions();
void ticker();
#endif /* 3D_POOL_SRC_GAME_HPP_ */
