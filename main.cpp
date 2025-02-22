#include <iostream>
#include <iomanip>
#include <iostream>
#include <iomanip>
#include "includes/game/deck.h"
#include "includes/game/intdeck.h"
using namespace std;

void test_deck()
{
    Deck deck;
    deck.printCards();
    cout << "\n\n====================================\n\n  shuffling deck once\n\n====================================\n\n";
    deck.shuffleDeck();
    deck.printCards();
    for (int i = 0; i < 7; i++)
        deck.shuffleDeck();
    cout << "\n\n====================================\n\n  shuffling (7) more times\n\n====================================\n\n";

    deck.printCards();

    cout << "\n[ A faro shuffle (perfect shuffle) needs to be done a total of 8 times in order to return the deck to its initial order ]";

    cout << "\n\n====================================\n\n  comparing shuffled deck to fresh deck\n\n====================================\n\n";
    Deck b;
    deck.compare(b);
    deck.compareVisually(b);

    cout << "\n\n====================================\n\n  shuffling deck b once and comparing\n\n====================================\n\n";
    b.shuffleDeck();
    deck.compare(b);
    deck.compareVisually(b);
    return;
}

void test_intdeck()
{
    IntDeck deck;
    deck.printCards();
    cout << "\n\n====================================\n\n  shuffling deck once\n\n====================================\n\n";
    deck.shuffleDeck();
    deck.printCards();
    for (int i = 0; i < 7; i++)
        deck.shuffleDeck();
    cout << "\n\n====================================\n\n  shuffling (7) more times\n\n====================================\n\n";

    deck.printCards();

    cout << "\n[ A faro shuffle (perfect shuffle) needs to be done a total of 8 times in order to return the deck to its initial order ]";

    cout << "\n\n====================================\n\n  comparing shuffled deck to fresh deck\n\n====================================\n\n";
    IntDeck b;
    deck.compare(b);
    deck.compareVisually(b);

    cout << "\n\n====================================\n\n  shuffling deck b once and comparing\n\n====================================\n\n";
    b.shuffleDeck();
    deck.compare(b);
    deck.compareVisually(b);
    return;
}

int main(int argv, char **argc)
{
    cout << "\n\ntesting regular deck\n\n";
    test_deck();
    cout << "\n\ntesting int deck which is more readable\n\n";
    test_intdeck();
    return 0;
}

// project also available at https://github.com/angelCisneros40/Projects.git under branch assignmnet_01