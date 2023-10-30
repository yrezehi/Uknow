#pragma once
#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card
{
private:
    std::string rank;
    std::string suit;

public:
    Card(std::string cardRank, std::string cardSuit);
    void displayCard();
};

#endif