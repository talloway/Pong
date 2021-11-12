#include "Paddle.h"

Paddle::Paddle(int xpos, sf::Keyboard::Key up, sf::Keyboard::Key down)
{
	//Position
	this->xpos = xpos;
	ypos = 200;


	//Up & Down control
	this->upKey = up;
	this->downKey = down;

	paddle.setSize(sf::Vector2f(30, 300));
	paddle.setPosition(xpos, ypos);
	paddle.setFillColor(sf::Color::White);

	//Speed modifier 

}

Paddle::~Paddle()
{

}


sf::RectangleShape Paddle::getPaddle()
{
	return this->paddle;
}

void Paddle::updatePosition()
{
	if (sf::Keyboard::isKeyPressed(upKey))
	{
		ypos += 1;
	}

	if(sf::Keyboard::isKeyPressed(downKey))
	{
		ypos -= 1;
	}


}

