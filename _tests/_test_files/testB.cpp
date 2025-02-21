#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
#include "../../includes/game/deck.h"
using namespace std;

bool test_stub(bool debug = false)
{
  Deck deck;
  deck.print_cards();
  cout << "\n\n==================\n\n  shuffling deck\n\n==================\n\n";
  deck.shuffle();
  deck.print_cards();
  for (int i = 0; i < 7; i++)
    deck.shuffle();
  cout << "\n\n==================\n\n  shuffling (7) more times\n\n==================\n\n";

  deck.print_cards();
  return true;
}

TEST(TEST_STUB, TestStub)
{
  EXPECT_EQ(1, test_stub(false));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "\n\n----------running testB.cpp---------\n\n"
            << std::endl;
  return RUN_ALL_TESTS();
}
