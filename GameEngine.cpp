/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
#include "GameEngine.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

GameEngine::GameEngine() : field(nullptr), height(0), width(0), score(0), captain(nullptr) {}

GameEngine::~GameEngine() {
    if (field) {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                delete field[i][j];
            }
            delete[] field[i];
        }
        delete[] field;
    }

    delete captain;

    for (auto rabbit : rabbits) {
        delete rabbit;
    }

    for (auto veggie : veggies) {
        delete veggie;
    }
}

void GameEngine::initializeGame() {
    initVeggies();
    initCaptain();
    initRabbits();
    score = 0;
}

void GameEngine::initVeggies() {
    string veggieFileName;
    cout << "Enter the name of the veggie file: ";
    cin >> veggieFileName;

    ifstream veggieFile(veggieFileName);
    while (!veggieFile.is_open()) {
        cout << "Invalid file name. Enter a valid file name: ";
        cin >> veggieFileName;
        veggieFile.open(veggieFileName);
    }

    veggieFile >> height >> width;

    field = new FieldInhabitant**[height];
    for (int i = 0; i < height; ++i) {
        field[i] = new FieldInhabitant*[width];
        for (int j = 0; j < width; ++j) {
            field[i][j] = nullptr;
        }
    }

    string veggieName, veggieSymbol;
    int veggiePoints;
    while (veggieFile >> veggieName >> veggieSymbol >> veggiePoints) {
        Veggie* veggie = new Veggie(veggieName, veggieSymbol, veggiePoints);
        veggies.push_back(veggie);

        int x, y;
        do {
            x = rand() % height;
            y = rand() % width;
        } while (field[x][y] != nullptr);

        field[x][y] = veggie;
    }

    veggieFile.close();
}

void GameEngine::initCaptain() {
    int x, y;
    do {
        x = rand() % height;
        y = rand() % width;
    } while (field[x][y] != nullptr);

    captain = new Captain(x, y);
    field[x][y] = captain;
}

void GameEngine::initRabbits() {
    for (int i = 0; i < NUMBEROFRABBITS; ++i) {
        int x, y;
        do {
            x = rand() % height;
            y = rand() % width;
        } while (field[x][y] != nullptr);

        Rabbit* rabbit = new Rabbit(x, y);
        rabbits.push_back(rabbit);
        field[x][y] = rabbit;
    }
}

void GameEngine::intro() {
    // Add your introductory messages here
}

void GameEngine::printField() {
    // Add code to print the field
}

void GameEngine::moveRabbits() {
    // Add code to move rabbits
}

void GameEngine::moveCaptain() {
    // Add code to move captain
}

void GameEngine::gameOver() {
    // Add your game over messages here
}

int GameEngine::getScore() const {
    return score;
}

int GameEngine::remainingVeggies() const {
    // Add code to count remaining veggies
}
