#include "Ball.h"



Ball::Ball()
{

	// Specs
	float size = 15;
	xpos = 1100;
	ypos = 600; 
	
	// Init Ball
	ball.setRadius(size);
	ball.setOrigin(size, size);
	ball.setPosition(xpos, ypos);
	ball.setFillColor(sf::Color::White);

	// Speed Mod and Init velocity 
	speedMod = 0.15;
	xVel = 1 * speedMod;
	yVel = 1 * speedMod;

}

Ball::~Ball()
{

}

sf::CircleShape Ball::getBall()
{
	return this->ball;
}

void Ball::updatePosition()
{



	// Reset Game 
	if(xpos >= 2235 || xpos <= 15)
	{
		// Reset Ball
		xpos = 1100;
		ypos = 600; 
		ball.setPosition(xpos, ypos);

		// Reset Time 
		bool elapsed = false;
		sf::Time t1 = sf::seconds(1);
		sf::Clock clock;

		// SHOW THEM THERE DEFEAT 
		while(!elapsed){
			if (clock.getElapsedTime() > t1)
				elapsed = true;
		}


		
	}

	
	// Bounce off wall
	if (ypos <= 15 || ypos >= 1235)
	{
		yVel *= -1;
	}

	//else if(ypos == 1235 || ypos == 15)


	xpos -= xVel;//xVel;
	ypos -= yVel;
	
	std::cout << ypos << "   " << yVel << std::endl;

	ball.setPosition(xpos, ypos);

}


