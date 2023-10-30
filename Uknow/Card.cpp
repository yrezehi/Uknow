#include "Card.h"

Card::Card(std::string cardRank, std::string cardSuit)
{
    rank = cardRank;
    suit = cardSuit;
}

void Card::displayCard()
{
    std::cout << rank << " of " << suit << std::endl;
}