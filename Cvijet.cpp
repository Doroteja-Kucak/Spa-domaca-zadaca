#include "Cvijet.h"
#include <SFML/Graphics.hpp>

Cvijet::Cvijet(sf::RenderWindow * window) {

	this->window = window;
}

void Cvijet::draw() {

	//Izrada oblika cvijeta

	sf::ConvexShape petal1;
	petal1.setPointCount(4);
	petal1.setPoint(0, sf::Vector2f(50.f, 50.f));
	petal1.setPoint(1, sf::Vector2f(70.f, 110.f));
	petal1.setPoint(2, sf::Vector2f(150.f, 150.f));
	petal1.setPoint(3, sf::Vector2f(110.f, 70.f));
	petal1.setFillColor(sf::Color::Blue);

	sf::ConvexShape petal2;
	petal2.setPointCount(4);
	petal2.setPoint(0, sf::Vector2f(150.f, 150.f));
	petal2.setPoint(1, sf::Vector2f(70.f, 190.f));
	petal2.setPoint(2, sf::Vector2f(50.f, 250.f));
	petal2.setPoint(3, sf::Vector2f(110.f, 230.f));
	petal2.setFillColor(sf::Color::Blue);


	sf::ConvexShape petal3;
	petal3.setPointCount(4);
	petal3.setPoint(0, sf::Vector2f(150.f, 150.f));
	petal3.setPoint(1, sf::Vector2f(190.f, 70.f));
	petal3.setPoint(2, sf::Vector2f(250.f, 50.f));
	petal3.setPoint(3, sf::Vector2f(230.f, 110.f));
	petal3.setFillColor(sf::Color::Blue);


	sf::ConvexShape petal4;
	petal4.setPointCount(4);
	petal4.setPoint(0, sf::Vector2f(150.f, 150.f));
	petal4.setPoint(1, sf::Vector2f(230.f, 190.f));
	petal4.setPoint(2, sf::Vector2f(250.f, 250.f));
	petal4.setPoint(3, sf::Vector2f(190.f, 230.f));
	petal4.setFillColor(sf::Color::Blue);


	sf::ConvexShape petal5;
	petal5.setPointCount(4);
	petal5.setPoint(0, sf::Vector2f(150.f, 150.f));
	petal5.setPoint(1, sf::Vector2f(130.f, 90.f));
	petal5.setPoint(2, sf::Vector2f(150.f, 50.f));
	petal5.setPoint(3, sf::Vector2f(170.f, 90.f));
	petal5.setFillColor(sf::Color::Cyan);


	sf::ConvexShape petal6;
	petal6.setPointCount(4);
	petal6.setPoint(0, sf::Vector2f(150.f, 150.f));
	petal6.setPoint(1, sf::Vector2f(170.f, 210.f));
	petal6.setPoint(2, sf::Vector2f(150.f, 250.f));
	petal6.setPoint(3, sf::Vector2f(130.f, 210.f));
	petal6.setFillColor(sf::Color::Cyan);


	sf::ConvexShape petal7;
	petal7.setPointCount(4);
	petal7.setPoint(0, sf::Vector2f(150.f, 150.f));
	petal7.setPoint(1, sf::Vector2f(210.f, 130.f));
	petal7.setPoint(2, sf::Vector2f(250.f, 150.f));
	petal7.setPoint(3, sf::Vector2f(210.f, 170.f));
	petal7.setFillColor(sf::Color::Cyan);


	sf::ConvexShape petal8;
	petal8.setPointCount(4);
	petal8.setPoint(0, sf::Vector2f(150.f, 150.f));
	petal8.setPoint(1, sf::Vector2f(90.f, 170.f));
	petal8.setPoint(2, sf::Vector2f(50.f, 150.f));
	petal8.setPoint(3, sf::Vector2f(90.f, 130.f));
	petal8.setFillColor(sf::Color::Cyan);

	sf::ConvexShape stem;
	stem.setPointCount(5);
	stem.setPoint(0, sf::Vector2f(150.f, 150.f));
	stem.setPoint(1, sf::Vector2f(152.f, 152.f));
	stem.setPoint(2, sf::Vector2f(152.f, 500.f));
	stem.setPoint(3, sf::Vector2f(147.f, 500.f));
	stem.setPoint(4, sf::Vector2f(147.f, 152.f));
	stem.setFillColor(sf::Color::Green);

	sf::ConvexShape leaf1;
	leaf1.setPointCount(4);
	leaf1.setPoint(0, sf::Vector2f(150.f, 500.f));
	leaf1.setPoint(1, sf::Vector2f(170.f, 370.f));
	leaf1.setPoint(2, sf::Vector2f(210.f, 310.f));
	leaf1.setPoint(3, sf::Vector2f(210.f, 370.f));
	leaf1.setFillColor(sf::Color::Green);

	sf::ConvexShape leaf2;
	leaf2.setPointCount(4);
	leaf2.setPoint(0, sf::Vector2f(150.f, 500.f));
	leaf2.setPoint(1, sf::Vector2f(90.f, 370.f));
	leaf2.setPoint(2, sf::Vector2f(90.f, 310.f));
	leaf2.setPoint(3, sf::Vector2f(130.f, 370.f));
	leaf2.setFillColor(sf::Color::Green);

	//Izrada oblika oblaka, ali ne crtamo ga odmah, veæ u animaciji

	sf::CircleShape cloud1(60.f);
	cloud1.move(350.f, 80.f);

	sf::CircleShape cloud2(60.f);
	cloud2.move(420.f, 80.f);

	sf::CircleShape cloud3(60.f);
	cloud3.move(490.f, 80.f);

	sf::CircleShape cloud4(60.f);
	cloud4.move(560.f, 80.f);

	sf::CircleShape cloud5(70.f);
	cloud5.move(400.f, 20.f);

	sf::CircleShape cloud6(70.f);
	cloud6.move(500.f, 20.f);

	//Crtanje osmišljenih oblika

	window->draw(stem);
	window->draw(petal1);
	window->draw(petal2);
	window->draw(petal3);
	window->draw(petal4);
	window->draw(petal5);
	window->draw(petal6);
	window->draw(petal7);
	window->draw(petal8);
	window->draw(leaf1);
	window->draw(leaf2);

	//Animiranje oblaka

	sf::Time tik_tak = frameClock.getElapsedTime();

	cloud1.setPosition(350.f - tik_tak.asMilliseconds() / 100.f, 80.f);
	window->draw(cloud1);

	cloud2.setPosition(420.f - tik_tak.asMilliseconds() / 100.f, 80.f);
	window->draw(cloud2);

	cloud3.setPosition(490.f - tik_tak.asMilliseconds() / 100.f, 80.f);
	window->draw(cloud3);

	cloud4.setPosition(560.f - tik_tak.asMilliseconds() / 100.f, 80.f);
	window->draw(cloud4);

	cloud5.setPosition(400.f - tik_tak.asMilliseconds() / 100.f, 20.f);
	window->draw(cloud5);

	cloud6.setPosition(500.f - tik_tak.asMilliseconds() / 100.f, 20.f);
	window->draw(cloud6);

}

