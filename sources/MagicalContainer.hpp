#include <iostream>
#include <vector>

using namespace std;

#include "Iterator.hpp"

namespace ariel{
    class MagicalContainer {
        private:
            vector<int> arr;
            vector<int> ascending;
            vector<int> prime;
            vector<int> cross;

        public:
            MagicalContainer();
            ~MagicalContainer();

            void addElement(int num);
            void removeElement(int num);
            int size();


            class AscendingIterator : public Iterator {
                private:
                    vector<int>* arr;
                    int pointer;

                public:
                    AscendingIterator(MagicalContainer container);
                    AscendingIterator(const AscendingIterator& toCopy);
                    ~AscendingIterator();
            };

            class SideCrossIterator : public Iterator {
                private:
                    vector<int>* arr;
                    int pointer;

                public:
                    SideCrossIterator(MagicalContainer container);
                    SideCrossIterator(const SideCrossIterator& toCopy);
                    ~SideCrossIterator();
            };

            class PrimeIterator : public Iterator {
                private:
                    vector<int>* arr;
                    int pointer;

                public:
                    PrimeIterator(MagicalContainer container);
                    PrimeIterator(const PrimeIterator& toCopy);
                    ~PrimeIterator();
            };
    };
}