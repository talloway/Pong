#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>


#ifndef BALL_H
#define BALL_H

class Ball
{
private:
	sf::CircleShape ball;

	float xpos, ypos;
	float xVel, yVel;

	float speedMod;
	
	

public:
	Ball();
	~Ball();

	sf::CircleShape getBall();

	void updatePosition();


};




#endif
