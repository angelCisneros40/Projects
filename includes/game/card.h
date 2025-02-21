#include <iostream>
using namespace std;
// two strings that contain one from each list
// (clubs, diamonds, hearts or spades)
// (A, K, Q, J, 10, 9, 8, 7, 6, 5, 4, 3, 2)

struct Card
{
    string suit = "null";
    string rank = "null";

    friend ostream &operator<<(ostream &os, const Card &card)
    {
        os << "| " << card.suit << " , " << card.rank << " |";
        return os;
    }

    bool operator==(const Card &other) const
    {
        return (suit == other.suit) && (rank == other.rank);
    }
    
    bool operator!=(const Card &other) const
    {
        return !(suit == other.suit) && (rank == other.rank);
    }
};
