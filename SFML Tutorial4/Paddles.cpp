#include "Paddles.h"

Paddles::Paddles(int xpos, sf::Keyboard::Key up, sf::Keyboard::Key down)
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
	speedMod = .5;

}

Paddles::~Paddles()
{

}


sf::RectangleShape Paddles::getPaddle()
{
	return this->paddle;
}

void Paddles::updatePosition()
{
	if (sf::Keyboard::isKeyPressed(upKey))
	{
		setPos(-1 * speedMod);
	}

	if (sf::Keyboard::isKeyPressed(downKey))
	{
		setPos(1 * speedMod);
	}


}

void Paddles::setPos (float key)
{
	ypos += key;
	paddle.setPosition(xpos, ypos);
}