#include <math.h>
#include "Ball.hpp"
#include <stdio.h>

Ball::Ball()
{
	this->isInHole=false;
	this->radius=12;
	this->xBorder=40;
	this->yBorder=40;
	this->xBorder1=940;
	this->yBorder1=490;
	this->dt=1.0f;
	this->lastFrame=0.0;//ok
}
//detects if ball is being hit by another ball
bool Ball::isBallHit(Ball* b){
	GLfloat length = this->position.distance(b->position);
	if(length< 2*radius){
		return true;
	}else{
		return false;
	}
}
//resolves the velocity of ball when hit
void Ball::resolve(Ball* b){
	float tmp;
	Vector normal,tangent, v1, v2, v1norm,v1temp,v2norm,v2temp;
	normal = b->position.minus(this->position);
	tmp = this->radius - normal.length()/2;
	normal.normalize();

	v1= this->velocity;
	v1norm.x = normal.x * normal.dot(this->velocity);
	v1norm.y = normal.y * normal.dot(this->velocity);
	v1norm.z = normal.z * normal.dot(this->velocity);
	v1temp=v1.minus(v1norm);

	normal.x*=-1.0f;
	normal.y*=-1.0f;
	normal.z*=-1.0f;

	v2=b->velocity;
	v2norm.x = normal.x * normal.dot(v2);
	v2norm.y = normal.y * normal.dot(v2);
	v2norm.z = normal.z * normal.dot(v2);
	v2temp=v2.minus(v2norm);

	this->velocity.x = v2norm.x +v1temp.x;
	this->velocity.y = v2norm.y +v1temp.y;
	this->velocity.z = v2norm.z +v1temp.z;

	b->velocity.x= v1norm.x+ v2temp.x;
	b->velocity.y= v1norm.y+ v2temp.y;
	b->velocity.z= v1norm.z+ v2temp.z;


	this->position.x=this->position.x + normal.x*tmp;
	this->position.y=this->position.y +normal.y*tmp;
	this->position.z=this->position.z +normal.z*tmp;

	b->position.x=b->position.x - normal.x*tmp;
	b->position.y=b->position.y -normal.y*tmp;
	b->position.z=b->position.z-normal.z*tmp;

}

bool Ball::hitLeft(){
	if(this->position.x < this->xBorder+this->radius){
		return true;
	}else{
		return false;
	}
}
bool Ball::hitRight(){
	if(this->position.x>this->xBorder1-this->radius){
		return true;
	}else{
		return false;
	}
}
bool Ball::hitTop(){
	if(this->position.y > this->yBorder1-this->radius){
		return true;
	}else{
		return false;
	}
}
bool Ball::hitBot(){
	if(this->position.y <this->yBorder+this->radius){
		return true;
	}else{
		return false;
	}
}
