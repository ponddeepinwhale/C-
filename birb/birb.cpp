#include"birb.h"
#include"random"
using namespace std;

//function definition for constructor
birb::birb(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];

}

void birb::fly() {

	xpos += 1;
	ypos += 1;
}

//function definition for draw
void birb::draw(sf::RenderWindow& window) {

	//leggies
	feets.setPosition(xpos + 10, ypos + 35);
	feets.setFillColor(sf::Color(200, 150, 0));
	feets.setSize(sf::Vector2f(5, 15));
	window.draw(feets); //first leg
	feets.setPosition(xpos + 25, ypos + 35);
	window.draw(feets); //second leg

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);
	
	//birb eyes
	body.setRadius(4);
	body.setFillColor((sf::Color(0,0,0))); //black
	body.setPosition(xpos+15, ypos+10);
	window.draw(body); //first eye
	body.setPosition(xpos + 30, ypos + 10);
	window.draw(body); //second eye

	//birb beak
	beak.setPointCount(3); //make it a triangle
	beak.setRadius(10);
	beak.setFillColor((sf::Color(200, 150, 0))); //orange
	beak.setPosition(xpos + 17, ypos + 10);
	window.draw(beak);

}

flower::flower(int x, int y, int u[3]) {
	xpos = x;
	ypos = y;
	colour[0] = u[0]; //if our array was any longer I would have used a for loop here :)
	colour[1] = u[1];
	colour[2] = u[2];
};

void flower::draw(sf::RenderWindow& window) {
	stem.setPosition(xpos + 15, ypos + 20);
	stem.setFIllColor(sf::Color(150, 150, 20));
	stem.setSize(sf::Vector2f(5, 15));
	window.draw(stem);

	petals.setRadius(10);
	petals.setFillColor((sf::Color(colour[0], colour[1], colour[2])));
	petals.setPosition(xpos, ypos);
	window.draw(petals);

	center.setRadius(30);
	center.setFillColor(sf::Color(100, 100, 100));
	center.setPosition(xpos + 20, ypos + 5);
}


void flower::changeColor() {
	int call = rand() % 5;
	
	if (int call = rand() % 5); colour[0] = rand() % 20);
	if (int call = rand() % 5); colour[1] = rand() % 20);
	if (int call = rand() % 5); colour[2] = rand() % 20);

}
