//Paddle.h

#include <SFML/Graphics.hpp>

#ifndef PADDLE_H
#define PADDLE_H

class Paddle {

private:
	sf::RectangleShape paddle;

	sf::Keyboard::Key upKey;
	sf::Keyboard::Key downKey;

	float xpos, ypos;




public:
	Paddle(int xpos, sf::Keyboard::Key up, sf::Keyboard::Key down);
	~Paddle();

	sf::RectangleShape getPaddle();

	void updatePosition();
	

};

#endif