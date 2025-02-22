/********************************************************************
 * ********************** Integer Deck ******************************
 * ********************************************************************
 * This program generates a deck of 52 integers in the terminal,
 * representing a standard deck of cards numbered from 1 to 52.
 * It simulates shuffling and counting the number of shuffles
 * needed to return the deck to its original state. This is a more
 * readable alternative of the primary Deck class
 **********************************************************************/

#ifndef INTDECK_H
#define INTDECK_H
using namespace std;
#include <vector>
#include <iostream>
#include <iomanip>

class IntDeck
{
public:
    IntDeck();
    IntDeck(IntDeck &d);
    IntDeck &operator=(IntDeck &d);

    // accessors
    void printCards();
    void compare(IntDeck a);
    void compareVisually(IntDeck a);

    // mutators
    void init();
    void shuffleDeck();

private:
    // accessors

    // mutators

    vector<int> shuffle();

    vector<int> _cards;
};

#endif

/******************************************************
 * ************** Constructors *************************
 *******************************************************/

/*******************************************************
 * IntDeck();
 * Initializes the deck in an ordered sequence.
 * Parameters: None
 * Return: None
 *******************************************************/

// accessors

/*******************************************************
 * void print_cards();
 * Displays the numbers in their current order from top to bottom.
 *
 * Mutators:
 * None
 *
 * Return: none
 *******************************************************/

/*******************************************************
 * void compare(IntDeck a);
 * Compares the order of the deck from this class to the
 * order of the deck from another class.
 *
 * Mutators:
 * None
 *
 * Return: none
 *******************************************************/

/*******************************************************
 * void compare_visually(IntDeck a);
 * Displays the deck from this class on the left and the
 * deck from class a on the right.
 *
 * Mutators:
 * None
 *
 * Return: none
 *******************************************************/

// Mutators

/*******************************************************
 * void init();
 * Initializes the deck in an ordered sequence.
 *
 * Mutators:
 * vector<int> cards;
 *
 * Return: none
 *******************************************************/

/*******************************************************
 * void shuffle_deck();
 * Calls private function shuffle which performs the
 * logic of actually shuffling the deck. shuffle_deck
 * simply sets the cards vector to the new shuffled deck.
 *
 * Mutators:
 * vector<int> cards;
 *
 * Return:
 * none
 *******************************************************/

/*******************************************************
 * vector<int> shuffle();
 * Performs a perfect shuffle on the deck in which the deck
 * is broken exactly in half and rearranged so that the
 * first number is followed by the 27th number, followed by the
 * second number, followed by the 28th number, and so on.
 *
 * Mutators:
 * vector<int> cards;
 *
 * Return:
 * vector<int> cards;
 *******************************************************/
