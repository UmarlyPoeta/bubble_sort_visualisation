#include <SFML/Graphics.hpp>
#include <random>
#include <vector>
#include <algorithm>
#include <unistd.h>

#define size 5

int main() {
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(500, 500), "Bubble Sort Visualisation");

    std::vector<sf::RectangleShape> columns;

    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        numbers[i] = rand() % 500 + 1;
    }

    for (int i = 0; i < size; i++)
    {
        sf::RectangleShape column(sf::Vector2f(100.0f, -1.0f * numbers[i] ));
        column.setPosition(1.0f * i * 100, 500.0f);
        column.setFillColor(sf::Color::Green);
        columns.push_back(column);
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::Black);

        for (int i = 0; i < size; i++)
            window.draw(columns[i]);
            
        for (int i =0; i < size - 1; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                window.clear(sf::Color::Black);

                for (int i = 0; i < size; i++)
                    window.draw(columns[i]);
                
                window.display();
                usleep(500 *1000);
                if (abs(columns[j].getSize().y) > abs(columns[j + 1].getSize().y))
                {
                    auto tmp = columns[j].getSize().y;
                    columns[j].setSize(sf::Vector2f(columns[j].getSize().x, columns[j + 1].getSize().y));
                    columns[j + 1].setSize(sf::Vector2f(columns[j + 1].getSize().x, tmp));
                }
            }
        }
    }

    return 0;
}