#include "doctest.h"
#include "sources/MagicalContainer.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("TESTING") {
    MagicalContainer container;

    // check remove with size 0
    CHECK_THROWS(container.removeElement(0));

    // check remove
    container.addElement(0);
    CHECK_NOTHROW(container.removeElement(0));

    container.addElement(1);
    container.addElement(4);
    container.addElement(2);

    // check size
    CHECK(container.size() == 3);

    // check remove nonexistent element
    CHECK_THROWS(container.removeElement(5));

    MagicalContainer::AscendingIterator ascIter(container);
    MagicalContainer::SideCrossIterator sideIter(container);
    MagicalContainer::PrimeIterator primIter(container);

    // Check iterators
    auto it1 = ascIter.begin();
    CHECK(*(it1) == 1);
    CHECK(*(++it1) == 2);
    CHECK(*(++it1) == 4);

    auto it2 = sideIter.begin();
    CHECK(*(it2) == 1);
    CHECK(*(++it2) == 2);
    CHECK(*(++it2) == 4);

    auto it3 = primIter.begin();
    CHECK(*(it3) == 1);
    CHECK(*(++it3) == 2);
    CHECK_THROWS(++it3);

    // check adding for existing iterator
    container.addElement(7);
    CHECK(*(++it3) == 7);

    // GT, LT checks
    auto it4 = ascIter.begin();
    auto it5 = ascIter.begin();
    ++it5;

    CHECK(it5 > it4);
    CHECK(it4 < it5);
    CHECK(it5 != it4);
    CHECK(!(it5 == it4));

    // GT, LT only valid for same type of iterators
    CHECK_THROWS(it4 < it2);
    CHECK_THROWS(it5 < it3);
}