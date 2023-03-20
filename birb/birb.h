#pragma once
#include<SFML/Graphics.hpp>

//class definition for birb
class birb {

private: //private stuff can only be seen/used by fellow class members

	//usually you keep variables private and functions public, but they can definitely not be that way too.
	int xpos;
	int ypos;
	int color[3]; //3-slot array to hold the birb's color. Remember, C++ arrays are a lot like python lists.


	sf::CircleShape body;
	sf::CircleShape beak; //SFML lets you set the number of sides of a circle, so this is how we make a triangle!
	sf::RectangleShape feets;

public: //public stuff can be seen/used by errbody in the clurb

	//you *can* have the whole definitions here, but its best to have just the declarations unless they are super short
	birb(int x, int y, int c[3]); //parameterized constructor
	void draw(sf::RenderWindow& window);
	void fly();

};

class flower {

private:
	int xpos;
	int ypos;
	int colour[3];


	sf::CircleShape petals;
	sf::CircleShape center;
	sf::RectangleShape stem;

public:
	flower(int x, int y, int u[3]);
	void changeColor();
	void draw(sf::RenderWIndow& window);


};





