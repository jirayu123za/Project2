#pragma once
#include <sfml\Graphics.hpp>
#include <string>
#define MAX_ITEM 3


class Menu
{
public:
	Menu(float width,float height);
	~Menu();

	void draw(sf::RenderWindow& window);
	void MoveUp();
	void MoveDown();


private:
	int selectecItem = 0;
	sf::Font font;
	sf::Text menu[MAX_ITEM];  //logo start exit
};

