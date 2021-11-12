#include "Paddle.h"
#include "Ball.h"



int main()
{

    // Render Window
    sf::RenderWindow window(sf::VideoMode(2250, 1250), "Pong");

    int xCord1 = 150;
    int xCord2 = 2060;

    float xpos = 1175;

    

    // Init P1 & P2 Paddle
    Paddle p1(xCord1, sf::Keyboard::W, sf::Keyboard::S);
    Paddle p2(xCord2, sf::Keyboard::Up, sf::Keyboard::Down);
    
    // Init Ball 
    Ball ball(xpos);
  




    





    while (window.isOpen())
    {


        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();

        window.draw(ball.getBall());
        window.draw(p1.getPaddle());
        window.draw(p2.getPaddle());
        window.display();
    }
    
    
    return 0;
}