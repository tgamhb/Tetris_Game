
#pragma once

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 800
#define BOARD_WIDTH 12
#define BOARD_HEIGHT 24


class Game
{
private:
    
    // RENDERING DATA
    sf::RenderWindow m_window;
    unsigned int m_board[BOARD_WIDTH][BOARD_HEIGHT];


    // CONTROL SEQUENCE DATA
    bool m_isOpen;


    // MEMBER FUNCTIONS
    inline void pollEvent();

public:
    Game(/* args */);
    ~Game();
    void run();
};

Game::Game(/* args */) : m_window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Tetris"), m_isOpen(true)
{
    this->m_window.setFramerateLimit(120);
}

Game::~Game()
{
}

inline void Game::pollEvent() {

    sf::Event event;

    while (this->m_window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
        this->m_isOpen = false;
            break;
        
        default:
            break;
        }
            
    }

}

void Game::run() {

    while(this->m_isOpen) {

        this->m_window.clear();

        this->pollEvent();        

        this->m_window.display();
    
    }

}