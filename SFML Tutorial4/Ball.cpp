#include "Ball.h"

Ball::Ball(float xpos)
{

	ball.setRadius(15);
	ball.setPosition(xpos, 200);
	ball.setFillColor(sf::Color::White);
}

Ball::~Ball()
{

}

sf::CircleShape Ball::getBall()
{
	return this->ball;
}
