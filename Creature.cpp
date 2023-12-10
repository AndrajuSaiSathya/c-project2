/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
#ifndef CREATURE_H
#define CREATURE_H

#include "FieldInhabitant.h"

class Creature : public FieldInhabitant {
public:
    Creature(int x, int y, std::string symbol);
    ~Creature();

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

private:
    int x;
    int y;
};

#endif // CREATURE_H
