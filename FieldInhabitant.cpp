/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
#include "FieldInhabitant.h"

FieldInhabitant::FieldInhabitant(std::string symbol) : symbol(symbol) {}

FieldInhabitant::~FieldInhabitant() {}

std::string FieldInhabitant::getSymbol() const {
    return symbol;
}

void FieldInhabitant::setSymbol(std::string symbol) {
    this->symbol = symbol;
}
