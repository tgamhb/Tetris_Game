
#pragma once

#include <SFML/Graphics.hpp>

class Tile : sf::Drawable
{
private:
    
    sf::RectangleShape tile;

public:
    Tile(/* args */);
    ~Tile();
};

Tile::Tile(/* args */)
{
}

Tile::~Tile()
{
}
