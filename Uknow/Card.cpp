#include "Card.h"

Card::Card(int number)
{
    this->number = number;
}

void Card::displayCard() const
{
    std::cout << "#" << number << std::endl;
}