/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
#include "GameEngine.h"

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    GameEngine game;
    game.initializeGame();
    game.intro();

    while (game.remainingVeggies() > 0) {
        cout << "Remaining veggies: " << game.remainingVeggies() << endl;
        cout << "Score: " << game.getScore() << endl;
        game.printField();
        game.moveRabbits();
        game.moveCaptain();
    }

    game.gameOver();

    return 0;
}
