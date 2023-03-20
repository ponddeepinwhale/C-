#include<SFML/Graphics.hpp>
#include "birb.h"
using namespace std;

int main() {

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int birbColor2[] = { 200, 150, 200 };
	int birbColor3[] = { 150, 150, 100 };
	int birbColor4[] = { 100, 100, 200 };
	int birbColor5[] = { 50, 200, 150 };
	int birbColor6[] = { 250, 20, 100 };

	birb Alex(200, 200, birbColor);//instantiate 1 birb
	birb Polly(250, 250, birbColor);
	birb Blah(200, 200, birbColor);
	birb Huh(300, 300, birbColor);
	birb Mako(400, 400, birbColor);
	birb Matriarchy(350, 350, birbColor);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window


	while (1) {//GAME LOOP OMG

		Alex.draw(window);
		Polly.draw(window);
		Blah.draw(window);
		Huh.draw(window);
		Mako.draw(window);
		Matriarchy.draw(window);

		window.display();
	}
}


