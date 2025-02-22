#include "intdeck.h"

/************************************************************************
 * IntDeck::IntDeck()
 * ***********************************************************************
 * Default constructor
 * ***********************************************************************
 * Pre conditions:
 * vector<int> cards must be initialized
 *
 * Post conditions:
 * vector<int> cards is initialized
 *
 *************************************************************************/

IntDeck::IntDeck()
{
    init(); // Initializes a set of 52 unique numbers
}

/************************************************************************
 *
 * IntDeck &IntDeck::operator=(IntDeck &d)
 * ***********************************************************************
 * assignment constructor
 * ***********************************************************************
 * Pre conditions:
 * class that is gonna be used to copy from must be initialized so that
 * IntDeck d can copy the Intdeck succesfully
 *
 * Post conditions:
 * this class has successfully copied the order of the deck from another class
 *
 *************************************************************************/

IntDeck::IntDeck(IntDeck &d)
{
    _cards = d._cards;
}

/************************************************************************
 *
 * IntDeck &IntDeck::operator=(IntDeck &d)
 * ***********************************************************************
 * assignment constructor
 * ***********************************************************************
 * Pre conditions:
 * class that is gonna be used to copy from must be initialized so that
 * IntDeck d can copy the deck succesfully
 *
 * Post conditions:
 * this class has successfully copied the order of the deck from another class
 *
 *************************************************************************/

IntDeck &IntDeck::operator=(IntDeck &d)
{
    if (this != &d) // Prevent self-assignment
        _cards = d._cards;
    return *this;
}

/************************************************************************
 * void IntDeck::init()
 * ***********************************************************************
 * Initializes the deck of numbers in an ordered sequence.
 * ***********************************************************************
 * Pre conditions:
 * Deck must be initialized.
 *
 * Post conditions:
 * The deck of numbers has been successfully initialized.
 *
 *************************************************************************/

void IntDeck::init()
{
    for (int i = 1; i < 53; i++)
        _cards.push_back(i);
}

/************************************************************************
 * void IntDeck::print_cards()
 * ***********************************************************************
 * Prints the order of numbers in the terminal.
 * ***********************************************************************
 * Pre conditions:
 * vector<int> cards must have been initialized before printing.
 *
 * Post conditions:
 * Returns order of numbers.
 *
 *************************************************************************/

void IntDeck::printCards()
{
    for (int i = 0; i < _cards.size(); i++)
    {
        cout << "[ ";
        cout << setw(2) << _cards[i];
        cout << " ]" << endl;
    }
}

/************************************************************************
 * vector<int> IntDeck::shuffle()
 * ***********************************************************************
 * Creates a perfect shuffle.
 * ***********************************************************************
 * Pre conditions:
 * vector<int> cards must have been initialized before shuffling.
 *
 * Post conditions:
 * Numbers are now shuffled such that the first number is followed by the
 * 27th number, followed by the second number, followed by the 28th number,
 * and so on.
 *
 *************************************************************************/

vector<int> IntDeck::shuffle()
{
    // obtains half the decks size so we can split the deck perfectly down the middle
    int half_of_the_deck_num = _cards.size() / 2;

    // empty deck in which shuffled cards can be placed
    vector<int> shuffled_deck;
    shuffled_deck.reserve(_cards.size());

    // places the first card, and then the 27th card
    // and then the second dard, and then the 28th card
    // and so on
    for (int i = 0; i < half_of_the_deck_num; ++i)
    {
        shuffled_deck.push_back(_cards[i]);
        shuffled_deck.push_back(_cards[half_of_the_deck_num + i]);
    }

    // returns shuffled deck to be assigned to _cards in shuffledCards function
    return shuffled_deck;
}

/************************************************************************
 * void IntDeck::shuffle_deck()
 * ***********************************************************************
 * Sets cards to a shuffled deck of integers.
 * ***********************************************************************
 * Pre conditions:
 * vector<int> cards must have been initialized before shuffling.
 *
 * Post conditions:
 * Numbers are now shuffled such that the first number is followed by the
 * 27th number, followed by the second number, followed by the 28th number,
 * and so on.
 *
 *************************************************************************/

void IntDeck::shuffleDeck()
{
    _cards = shuffle();
}

/************************************************************************
 * void IntDeck::compare(IntDeck a)
 * ***********************************************************************
 * Compares the order of this deck to deck a.
 * ***********************************************************************
 * Pre conditions:
 * This deck and deck a must both be initialized.
 *
 * Post conditions:
 * Prints a string output on whether or not the two decks are the same.
 *
 *************************************************************************/

void IntDeck::compare(IntDeck a)
{
    for (int i = 0; i < a._cards.size(); i++)
    {
        if (a._cards[i] != _cards[i])
        {
            cout << "decks are not the same!" << endl;
            return;
        }
    }
    cout << "decks ARE the same!" << endl;
}

/************************************************************************
 * void IntDeck::compare_visually(IntDeck a)
 * ***********************************************************************
 * Generates a visual side-by-side comparison of this deck and deck a.
 * ***********************************************************************
 * Pre conditions:
 * This deck and deck a must both be initialized.
 *
 * Post conditions:
 * Prints a string output of the two decks with this deck
 * on the right and deck a on the left.
 *
 *************************************************************************/

void IntDeck::compareVisually(IntDeck a)
{
    for (int i = 0; i < a._cards.size(); i++)
    {
        cout << "[ ";
        cout << setw(2) << _cards[i];
        cout << " ] | [ ";
        cout << setw(2) << a._cards[i] << " ]" << endl;
    }
}
