#include "deck.h"

/************************************************************************
 * Deck::Deck()
 * ***********************************************************************
 * default constructor
 * ***********************************************************************
 * Pre conditions:
 * vector<Cards> _cards must be initialized
 *
 * Post conditions:
 * vector<Cards> _cards is initialized
 *
 *************************************************************************/

Deck::Deck()
{
    init(); // initializes a set of 52 unique cards using struct Card
}

/************************************************************************
 * Deck::Deck(Deck &d)
 * ***********************************************************************
 * copy constructor
 * ***********************************************************************
 * Pre conditions:
 * class that is gonna be used to copy from must be initialized first
 *
 * Post conditions:
 * this class contains a its own deck of cards that matches the order
 * of Deck d's deck of cards
 *
 *************************************************************************/

Deck::Deck(Deck &d)
{
    _cards = d._cards;
}

/************************************************************************
 *
 * Deck &Deck::operator=(Deck &d)
 * ***********************************************************************
 * assignment constructor
 * ***********************************************************************
 * Pre conditions:
 * class that is gonna be used to copy from must be initialized so that
 * Deck d can copy the deck succesfully
 *
 * Post conditions:
 * this class has successfully copied the order of the deck from another class
 *
 *************************************************************************/

Deck &Deck::operator=(Deck &d)
{

    if (this != &d) // Prevent self-assignment
        _cards = d._cards;
    return *this;
}

/************************************************************************
 * void Deck::init()
 * ***********************************************************************
 * initialize the deck of cards in an ordered sequence
 * ***********************************************************************
 * Pre conditions:
 * deck must be initialized
 *
 * Post conditions:
 * the deck of cards has been successfully initialized
 *
 *************************************************************************/
void Deck::init()
{
    // two arrays that will be iterated instead of making
    // some voodoo for loop that directly assigns string values
    string suit[4] = {"clubs", "diamonds", "hearts", "spades"};
    string rank[13] = {"K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2", "A"};

    // iterate the suit first so that all cards from the same suit are together
    // therefore respecting the ordered sequence
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            Card card;

            card.suit = suit[i];
            card.rank = rank[j];

            _cards.push_back(card);
        }
    }
}

/************************************************************************
 * void Deck::printCards()
 * ***********************************************************************
 * print order of cards in terminal
 * ***********************************************************************
 * Pre conditions:
 * vector<Card> _cards must have been initialized before printing
 *
 * Post conditions:
 * returns order of cards
 *
 *************************************************************************/

void Deck::printCards()
{
    for (int i = 0; i < _cards.size(); i++)
    {
        cout << "[ " << _cards[i] << " ]" << endl;
    }
}

/************************************************************************
 * vector<Card> Deck::shuffle()
 * ***********************************************************************
 * creates a perfect shuffle
 * ***********************************************************************
 * Pre conditions:
 * vector<Card> _cards must have been initialized before shuffling
 *
 * Post conditions:
 * cards are now shuffled such that the first card is followed by the
 * 27th card, followed by the second card, followed by the 28th card,
 * and so on
 *
 *************************************************************************/

vector<Card> Deck::shuffle()
{
    // obtains half the decks size so we can split the deck perfectly down the middle
    int half_of_the_deck_num = _cards.size() / 2;

    // empty deck in which shuffled cards can be placed
    vector<Card> shuffled_deck;
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
 * void Deck::shuffleDeck()
 * ***********************************************************************
 * sets _cards to a shuffled deck of Card
 * ***********************************************************************
 * Pre conditions:
 * vector<Card> _cards must have been initialized before shuffling
 *
 * Post conditions:
 * cards are now shuffled such that the first card is followed by the
 * 27th card, followed by the second card, followed by the 28th card,
 * and so on
 *
 *************************************************************************/

void Deck::shuffleDeck()
{
    _cards = shuffle();
}

/************************************************************************
 * void Deck::compare(Deck a)
 * ***********************************************************************
 * compares the order of this deck to deck a
 * ***********************************************************************
 * Pre conditions:
 * this deck and deck a must both be initialized
 *
 * Post conditions:
 * prints a string output on wether or not the two decks are the same
 *
 *************************************************************************/

void Deck::compare(Deck a)
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
 * void Deck::compareVisually(Deck a)
 * ***********************************************************************
 * generates a visual side by side comparisson of this deck and deck a
 * ***********************************************************************
 * Pre conditions:
 * this deck and deck a must both be initialized
 *
 * Post conditions:
 * prints a string output of the two decks with this deck
 * on the right and deck a on the left
 *
 *************************************************************************/

void Deck::compareVisually(Deck a)
{
    for (int i = 0; i < a._cards.size(); i++)
    {
        cout << "[ ";
        cout << _cards[i];
        cout << " ] | [ ";
        cout << a._cards[i] << " ]" << endl;
    }
}
