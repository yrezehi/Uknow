#pragma once
#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card
{
    private:
        int number;

    public:
        explicit Card(int number);
        void displayCard() const;
};

#endif