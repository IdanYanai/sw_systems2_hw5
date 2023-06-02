#include "Iterator.hpp"

namespace ariel{
    Iterator& Iterator::operator=(const Iterator& other) {return *this;}

    int Iterator::operator*() { return 0;}

    Iterator& Iterator::operator++() {return *this;}

    bool Iterator::operator!=(const Iterator& other) const {return false;}
    bool Iterator::operator==(const Iterator& other) const {return true;}
    bool Iterator::operator>(const Iterator& other) const {return true;}
    bool Iterator::operator<(const Iterator& other) const {return true;}

    Iterator& Iterator::begin() {return *this;}
    Iterator& Iterator::end() {return *this;}
}