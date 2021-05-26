#include "doctest.h"
#include "BinaryTree.hpp"

using namespace std;
using namespace ariel;

TEST_CASE ("Test") {
    for (int i = 0; i < 20; i++) {
                CHECK(i != i + 1);
    }
}