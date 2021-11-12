#pragma once
#include <SFML/Graphics.hpp>

#ifndef BALL_H
#define BALL_H

class Ball
{
private:
	sf::CircleShape ball;
	
	

public:
	Ball(float xpos);
	~Ball();

	sf::CircleShape getBall();


};

#endif
