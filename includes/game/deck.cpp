#include "deck.h"

Deck::Deck()
{
    init();
}

void Deck::init()
{
    // string suit[4] = {"clubs", "diamonds", "hearts", "spades"};
    // string rank[13] = {"K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2", "A"};

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 13; j++)
    //     {
    //         Card card;

    //         card.suit = suit[i];
    //         card.rank = rank[j];

    //         cards.push_back(card);
    //     }
    // }
    for (int i = 1; i < 53; i++)
    {
        cards.push_back(i);
    }
}

void Deck::print_cards()
{
    for (int i = 0; i < cards.size(); i++)
    {
        cout << "[ ";
        // cards[i].print();
        cout << cards[i];
        cout << " ]" << endl;
    }
}

void Deck::shuffle()
{
    int half_of_the_deck_num = cards.size() / 2;

    // Create a new vector to hold the shuffled deck
    std::vector<int> shuffled_deck;
    shuffled_deck.reserve(cards.size()); // Reserve the size upfront for efficiency

    // Interleave the two halves
    for (int i = 0; i < half_of_the_deck_num; ++i)
    {
        shuffled_deck.push_back(cards[i]);                        // First half
        shuffled_deck.push_back(cards[half_of_the_deck_num + i]); // Second half
    }

    // Copy the shuffled deck back to the original deck
    cards = shuffled_deck;
}
