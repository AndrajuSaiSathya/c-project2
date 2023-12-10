/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
#include "Veggie.h"

Veggie::Veggie(std::string name, std::string symbol, int points)
    : FieldInhabitant(symbol), name(name), points(points) {}

Veggie::~Veggie() {}

std::string Veggie::getName() const {
    return name;
}

void Veggie::setName(std::string name) {
    this->name = name;
}

int Veggie::getPoints() const {
    return points;
}

void Veggie::setPoints(int points) {
    this->points = points;
}
