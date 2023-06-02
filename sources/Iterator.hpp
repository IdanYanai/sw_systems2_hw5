// interface for all iterators

namespace ariel{
    class Iterator {
        public:
            Iterator& operator=(const Iterator& other);

            int operator*();

            Iterator& operator++();

            bool operator!=(const Iterator& other) const;
            bool operator==(const Iterator& other) const;
            bool operator>(const Iterator& other) const;
            bool operator<(const Iterator& other) const;

            Iterator& begin();
            Iterator& end();
    };
}