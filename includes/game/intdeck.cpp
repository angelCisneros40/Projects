#include "intdeck.h"

IntDeck::IntDeck()
{
    init();
}

void IntDeck::init()
{
    for (int i = 1; i < 53; i++)
        cards.push_back(i);
}

void IntDeck::print_cards()
{
    for (int i = 0; i < cards.size(); i++)
    {
        cout << "[ ";
        cout << cards[i];
        cout << " ]" << endl;
    }
}

vector<int> IntDeck::shuffle()
{
    int half_of_the_deck_num = cards.size() / 2;

    vector<int> shuffled_deck;
    shuffled_deck.reserve(cards.size());

    for (int i = 0; i < half_of_the_deck_num; ++i)
    {
        shuffled_deck.push_back(cards[i]);
        shuffled_deck.push_back(cards[half_of_the_deck_num + i]);
    }

    return shuffled_deck;
}

void IntDeck::shuffle_deck()
{
    cards = shuffle();
}

void IntDeck::compare(IntDeck a)
{
    for (int i = 0; i < a.cards.size(); i++)
    {
        if (a.cards[i] != cards[i])
        {
            cout << "decks are not the same!" << endl;
            return;
        }
    }
    cout << "decks ARE the same!" << endl;
}

void IntDeck::compare_visually(IntDeck a)
{
    for (int i = 0; i < a.cards.size(); i++)
    {
        cout << "[ ";
        cout << cards[i];
        cout << " ] | [ ";
        cout << a.cards[i] << " ]" << endl;
    }
}
