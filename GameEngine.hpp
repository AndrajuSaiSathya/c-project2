/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/HPPTemplate.hpp to edit this template
 */
#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "FieldInhabitant.h"
#include "Captain.h"
#include "Rabbit.h"
#include "Veggie.h"
#include <vector>

class GameEngine {
public:
    GameEngine();
    ~GameEngine();

    void initializeGame();
    void intro();
    void printField();
    void moveRabbits();
    void moveCaptain();
    void gameOver();

    int getScore() const;
    int remainingVeggies() const;

private:
    FieldInhabitant*** field;
    int height;
    int width;
    int score;
    static const int NUMBEROFVEGGIES = 30;
    static const int NUMBEROFRABBITS = 5;
    Captain* captain;
    std::vector<Rabbit*> rabbits;
    std::vector<Veggie*> veggies;

    void initVeggies();
    void initCaptain();
    void initRabbits();
    void moveCptVertical(int movement);
    void moveCptHorizontal(int movement);
};

#endif // GAMEENGINE_H
