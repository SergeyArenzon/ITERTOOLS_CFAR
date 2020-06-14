
namespace itertools {
    class range {
        int _start, _end;

        public:
        range(int a, int b) : _start(a), _end(b){};

        class iterator {
            int value;
            public:
            iterator() : value(0) {};
            iterator(int val) : value(val) {};

            int operator*(){
                return value;
            }
            int operator++(int){
                int temp = value;
                ++*this;
                return temp;
            }
            iterator& operator++(){
                ++value;
                return *this;
            }

            bool operator==(const iterator& other) const { 
                return value == other.value; 
            }
            bool operator!=(const iterator& other) const {
                return !(*this == other); 
            }
        };

        iterator begin() { 
            return iterator(_start); 
            }
        iterator end() {
            return iterator(_end); 
        }
    };
}

