/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/HPPTemplate.hpp to edit this template
 */
#ifndef FIELDINHABITANT_H
#define FIELDINHABITANT_H

#include <string>

class FieldInhabitant {
public:
    FieldInhabitant(std::string symbol);
    virtual ~FieldInhabitant();

    std::string getSymbol() const;
    void setSymbol(std::string symbol);

private:
    std::string symbol;
};

#endif // FIELDINHABITANT_H
