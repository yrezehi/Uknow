#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include "Card.h"

class Player
{
private:
    int id;
    std::vector<Card> cards;

public:
    void displayCards() const;
};

#endif