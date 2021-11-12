
#include <SFML/Graphics.hpp>

#ifndef PADDLES_H
#define PADDLES_H

class Paddles {

private:
	sf::RectangleShape paddle;

	sf::Keyboard::Key upKey;
	sf::Keyboard::Key downKey;

	float xpos, ypos;
	float speedMod;



public:
	Paddles(int xpos, sf::Keyboard::Key up, sf::Keyboard::Key down);
	~Paddles();

	sf::RectangleShape getPaddle();

	void setPos(float key);

	void updatePosition();


};

#endif
