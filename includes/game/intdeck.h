#ifndef INTDECK_H
#define INTDECK_H
using namespace std;
#include <vector>
#include <iostream>
#include <iomanip>
/*
You will need to represent both the suit
(clubs, diamonds, hearts or spades) as well
as the rank (A, K, Q, J, 10, 9, 8, 7, 6, 5, 4, 3, 2)
of each card.

Write methods to:
    Initialize the deck of cards Perform a perfect shuffle
    (In a perfect shuffle, the deck is broken exactly in half
    and rearranged so that the first card is followed by the
    27th card, followed by the second card, followed by the 28th
    card, and so on.)

    Print the deck of cards

    Compare two decks of cards

    Print out the initial deck, the deck after the first perfect
    shuffle, and the final deck.

    Print out how many perfect shuffles are necessary to return
    the deck to its original configuration.

    Make sure your main includes code to test all of your methods.
*/

class IntDeck
{
public:
    IntDeck();

    void init();
    void print_cards();

    void shuffle_deck();

    void compare(IntDeck a);

    void compare_visually(IntDeck a);

private:
    vector<int> shuffle();
    vector<int> cards;
};

#endif