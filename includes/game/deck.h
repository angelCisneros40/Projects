/******************************************************************
 * Name: Angel Cisneros
 * Assignment 01: Deck of Cards
 * Section:32277
 * Date: 2/21/2025
 * Due: 2/24/25
 ******************************************************************/

/********************************************************************
 * ********************** Deck of Cards ******************************
 * ********************************************************************
 * This program will generate a deck of cards in the terminal in which
 * it will show the user how the cards are shuffled and how many shuffles are
 * needed in order to return the deck to its original state. The cards
 * are identified by two string values, the first being the suit
 * and the second is the rank of the card
 **********************************************************************/

#ifndef DECK_H
#define DECK_H
using namespace std;
#include "card.h"
#include <vector>
#include <iostream>
#include <iomanip>

class Deck
{
public:
    Deck();
    Deck(Deck &d);
    Deck &operator=(Deck &d);

    // accessors

    void printCards();
    void compare(Deck a);
    void compareVisually(Deck a);

    // mutators

    void init();
    void shuffleDeck();

private:
    // accessors

    // mutators

    vector<Card> shuffle();

    vector<Card> _cards;
};

#endif

/******************************************************
 * ************** Constructors *************************
 *******************************************************/

/*******************************************************
 * Deck();
 * Initializes the deck in an ordered sequence
 * Parameters: None
 * Return: None
 *******************************************************/

/*******************************************************
 * Deck(Deck& d);
 * Constructor: Copy Constructor, copies one class to another
 *
 * Parameters: Deck& d
 * Return: None
 *******************************************************/

/*******************************************************
 * Deck& operator=(Deck& t);
 * Constructor: Assignment Constructor, assigns one class
 * to another
 *
 * Parameters: Deck& d
 * Return: the second class being assigned to another class
 *******************************************************/

// accessors

/*******************************************************
 * void print_cards();
 * displays the cards in their current order from top to bottom
 *
 * Mutators:
 * None
 *
 * Return: none
 * *******************************************************/

/*******************************************************
 * void compare(Deck a);
 * compares the order of the deck from this class to the
 * order of the deck from another class
 *
 * Mutators:
 * None
 *
 * Return: none
 * *******************************************************/

/*******************************************************
 * void compare_visually(Deck a);
 * displays the deck from this class on the left and the
 * deck from class a on the right
 *
 * Mutators:
 * None
 *
 * Return: none
 * *******************************************************/

// Mutators

/*******************************************************
 * void init();
 * Initializes the deck in an ordered sequence
 *
 * Mutators:
 * cards
 *
 * Return: none
 * *******************************************************/

/*******************************************************
 * void shuffle_deck();
 * calls private function shuffle which performs the
 * logic of actually shuffling the deck. shuffle_deck
 * simply sets the cards vector = to the new shuffled
 * decksss
 *
 * Mutators:
 * vector<Card> cards;
 *
 * Return: 
 * none
 * *******************************************************/

/*******************************************************
 * vector<Card> shuffle();
 * performs a perfect shuffle on the deck in which the deck
 * is broken exactly in half and rearranged so that the
 * first card is followed by the 27th card, followed by the
 * second card, followed by the 28th card, and so on
 *
 * Mutators:
 * vector<Card> cards;
 *
 * Return: 
 * vector<Card> cards;
 * *******************************************************/
