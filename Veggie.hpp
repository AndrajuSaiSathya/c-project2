/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/HPPTemplate.hpp to edit this template
 */
#ifndef VEGGIE_H
#define VEGGIE_H

#include "FieldInhabitant.h"

class Veggie : public FieldInhabitant {
public:
    Veggie(std::string name, std::string symbol, int points);
    ~Veggie();

    std::string getName() const;
    void setName(std::string name);

    int getPoints() const;
    void setPoints(int points);

private:
    std::string name;
    int points;
};

#endif // VEGGIE_H
