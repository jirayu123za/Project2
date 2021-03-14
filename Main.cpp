#include <SFML/Graphics.hpp>
#include <time.h>
#include "Menu.h"
#include <iostream>
using namespace sf;



int main()
{
    srand(time(0));

    RenderWindow window(VideoMode(1080, 720), "Doodle Game!");

    Menu menu(window.getSize().x, window.getSize().y);
    sf::Texture texture;
    if (!texture.loadFromFile("C:\\Users\\user\\Desktop\\New folder (2)\\03 Arkanoid\\Project\\images\\bg1.png")) {

    }
    sf::Sprite background;
    background.setTexture(texture);

    window.setFramerateLimit(60);

  

    while (window.isOpen())
    {
        Event e;
        while (window.pollEvent(e))
        {
            switch (e.type)
            {
            case sf::Event::KeyReleased:
                switch (e.key.code)
                {
                case sf::Keyboard::Up:
                    menu.MoveUp();
                    break;

                case sf::Keyboard::Down:
                    menu.MoveDown();
                    break;
                }
                break;
           
            case sf::Event::Closed:
                window.close();
                break;
            }
        }

        window.clear();
        window.draw(background);
        menu.draw(window);
        window.display();
        
    }

    return 0;
}