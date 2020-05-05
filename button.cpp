#include "button.h"

button::button(sf::Vector2f pos, sf::Color out, sf::Color fill) {
    this->position = pos;
    this->fill_color = fill;
    this->outline_color = out;
}

button::~button() {

}

void button::update_position(sf::Vector2f new_position){
    this->position = new_position;
}

void button::render(sf::Window& win) {

}