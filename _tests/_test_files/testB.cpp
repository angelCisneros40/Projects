#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
#include "../../includes/game/deck.h"
#include "../../includes/game/intdeck.h"
using namespace std;

bool test_deck(bool debug = false)
{
  Deck deck;
  deck.print_cards();
  cout << "\n\n====================================\n\n  shuffling deck once\n\n====================================\n\n";
  deck.shuffle_deck();
  deck.print_cards();
  for (int i = 0; i < 7; i++)
    deck.shuffle_deck();
  cout << "\n\n====================================\n\n  shuffling (7) more times\n\n====================================\n\n";

  deck.print_cards();

  cout << "\n[ A faro shuffle (perfect shuffle) needs to be done a total of 8 times in order to return the deck to its initial order ]";

  cout << "\n\n====================================\n\n  comparing shuffled deck to fresh deck\n\n====================================\n\n";
  Deck b;
  deck.compare(b);
  deck.compare_visually(b);

  cout << "\n\n====================================\n\n  shuffling deck b once and comparing\n\n====================================\n\n";
  b.shuffle_deck();
  deck.compare(b);
  deck.compare_visually(b);
  return true;
}

bool test_intdeck(bool debug = false)
{
  IntDeck deck;
  deck.print_cards();
  cout << "\n\n====================================\n\n  shuffling deck once\n\n====================================\n\n";
  deck.shuffle_deck();
  deck.print_cards();
  for (int i = 0; i < 7; i++)
    deck.shuffle_deck();
  cout << "\n\n====================================\n\n  shuffling (7) more times\n\n====================================\n\n";

  deck.print_cards();

  cout << "\n[ A faro shuffle (perfect shuffle) needs to be done a total of 8 times in order to return the deck to its initial order ]";

  cout << "\n\n====================================\n\n  comparing shuffled deck to fresh deck\n\n====================================\n\n";
  IntDeck b;
  deck.compare(b);
  deck.compare_visually(b);

  cout << "\n\n====================================\n\n  shuffling deck b once and comparing\n\n====================================\n\n";
  b.shuffle_deck();
  deck.compare(b);
  deck.compare_visually(b);
  return true;
}

TEST(TEST_DECK, TestDeck)
{
  // EXPECT_EQ(1, test_deck(false));
}

TEST(TEST_INTDECK, TestIntdeck)
{
  EXPECT_EQ(1, test_intdeck(false));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "\n\n----------running testB.cpp---------\n\n"
            << std::endl;
  return RUN_ALL_TESTS();
}
