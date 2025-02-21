#include <iostream>
using namespace std;
// two strings that contain one from each list
// (clubs, diamonds, hearts or spades)
// (A, K, Q, J, 10, 9, 8, 7, 6, 5, 4, 3, 2)

struct Card
{
    string suit = "null";
    string rank = "null";

    void print()
    {
        cout << "| " << suit << " , " << rank << " |";
    }
};
