/********************************************************************
 * **************************** Card ********************************
 * ********************************************************************
 * this struct represents a single playing card in a standard deck
 * each card consists of two string values
 * the suit (clubs, diamonds, hearts, spades)
 * the rank (A, K, Q, J, 10, 9, 8, 7, 6, 5, 4, 3, 2)
 **********************************************************************/

#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <iomanip>
using namespace std;

struct Card
{
    string suit = "null";
    string rank = "null";

    /*******************************************************
     * ostream &operator<<(ostream &os, const Card &card)
     * overloads the << operator to format
     * and display a card in the console.
     *
     * Parameters:
     * os
     * card
     *
     * Return:
     * the output stream with card details
     *******************************************************/
    friend ostream &operator<<(ostream &os, const Card &card)
    {
        os << setw(8) << card.suit << " , " << setw(2) << card.rank;
        return os;
    }

    /*******************************************************
     * bool operator==(const Card &other) const
     * overloads the equality operator to compare two cards.
     *
     * Parameters:
     * other
     *
     * Return:
     * true if both suit and rank match, else its false
     *******************************************************/
    bool operator==(const Card &other) const
    {
        return (suit == other.suit) && (rank == other.rank);
    }

    /*******************************************************
     * bool operator!=(const Card &other) const
     * overloads the inequality operator to compare two cards.
     *
     * Parameters:
     * other
     *
     * Return:
     * true if the cards are different, otherwise false
     *******************************************************/
    bool operator!=(const Card &other) const
    {
        return !(*this == other);
    }
};

#endif
