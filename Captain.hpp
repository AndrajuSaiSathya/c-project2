/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/HPPTemplate.hpp to edit this template
 */
#ifndef CAPTAIN_H
#define CAPTAIN_H

#include "Creature.h"
#include "Veggie.h"
#include <vector>

class Captain : public Creature {
public:
    Captain(int x, int y);
    ~Captain();

    void addVeggie(Veggie* veggie);
    const std::vector<Veggie*>& getCollectedVeggies() const;

private:
    std::vector<Veggie*> collectedVeggies;
};

#endif // CAPTAIN_H
