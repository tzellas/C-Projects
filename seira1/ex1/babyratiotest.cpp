#include <iostream>
#include "babyratio.hpp"

using namespace std;
int main(){
    rational a(1,2);
    rational b(2,3);
   
    rational ne = a.add(b);
    ne.print();
    a.print();
    b.print();
   
    rational nesub = a.sub(b);
    nesub.print();
    a.print();
    b.print();
   
    rational nemul = a.mul(b);
    nemul.print();
    a.print();
    b.print();

    rational nediv = a.div(b);
    nediv.print();
    a.print();
    b.print();
 
}
int main(){
    rational a(1,2);
    rational b(3, 4);
    rational c(5, 6);
    a.add(b).sub(c).print();
    cout << endl;
    a.print();
    cout << " should still be 1/2" << endl;
}