#include "MagicalContainer.hpp"

namespace ariel{
    // Magical Container
    MagicalContainer::MagicalContainer() {}
    MagicalContainer::~MagicalContainer() {}

    void MagicalContainer::addElement(int num) {}
    void MagicalContainer::removeElement(int num) {}
    int MagicalContainer::size() {return 0;}

    // Iterators
    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer container) {}
    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& toCopy) {}
    MagicalContainer::AscendingIterator::~AscendingIterator() {}

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer container) {}
    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& toCopy) {}
    MagicalContainer::SideCrossIterator::~SideCrossIterator() {}

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer container) {}
    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& toCopy) {}
    MagicalContainer::PrimeIterator::~PrimeIterator() {}
}