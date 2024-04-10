#include <iostream>


using namespace std;

template <typename T>
class stack {
    
    public:

    stack(int size): size(size) {}

    stack(const stack &s): size(s.size){}

    ~stack(){
        delete [] data;
    }

    const stack & operator = (const stack &s) { 
        size  = y.size
        return *this;
    }


    
    private:
    unsigned size;
    T *data;

};