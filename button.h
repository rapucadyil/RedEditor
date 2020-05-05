#include <SFML/Graphics.hpp>

struct button {
    sf::Vector2f position;
    sf::Color outline_color;
    sf::Color fill_color;

    button(sf::Vector2f pos, sf::Color out, sf::Color fill);
    ~button();

    void render(sf::Window& win);
    void update_position(sf::Vector2f new_position);
};