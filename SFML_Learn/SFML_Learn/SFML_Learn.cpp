// LearnL3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>

int main()
{
    unsigned int largeur = 800;
    unsigned int hauteur = 600;
    std::string titre = "Gap3";

    sf::RenderWindow window(sf::VideoMode(largeur, hauteur), titre, sf::Style::Titlebar | sf::Style::Close);

    int r = 100.f;
    sf::CircleShape shape(r);
    shape.setFillColor(sf::Color::Green);

    // shape.setPosition(10, 20);

    sf::Vector2f move;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            /*if (event.type == sf::Event::KeyPressed) {

                if (event.key.code == sf::Keyboard::Z) {
                    // 
                    move.y -= 1;
                }

                else if (event.key.code == sf::Keyboard::S)
                {
                    move.y += 1;
                }

                else if (event.key.code == sf::Keyboard::Q)
                {
                    move.x -= 1;
                }

                else if (event.key.code == sf::Keyboard::D)
                {
                    move.x += 1;
                }
            }

            if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::Z) {
                    // 
                    move.y = 0;
                }

                else if (event.key.code == sf::Keyboard::S)
                {
                    move.y = 0;
                }

                else if (event.key.code == sf::Keyboard::Q)
                {
                    move.x = 0;
                }

                else if (event.key.code == sf::Keyboard::D)
                {
                    move.x = 0;
                }
            }*/

            /*if (event.type == sf::Event::MouseMoved) {
                shape.setPosition(event.mouseMove.x, event.mouseMove.y);
            }*/

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    shape.setPosition(event.mouseButton.x-r, event.mouseButton.y-r);
                }
            }
        }
        /*sf::Vector2f newPosition = shape.getPosition();
        newPosition = newPosition + move;

        shape.setPosition(newPosition);*/

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
