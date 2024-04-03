#include <iostream>
#ifndef CONTEST
#include "fullratio.hpp"
#endif  

using namespace std;

rational::rational(int n, int d){
    nom=n;
    den=d;
}

rational operator + (const rational & x,const rational & y){
    int n1 = x.nom;
    int n2 = y.nom;

    n1=n1*y.den;
    n2=n2*x.den;
    int dn=x.den*y.den;
    int nn=n1+n2;
    int gr = rational::gcd(nn,dn);
    rational a = rational(nn/gr,dn/gr);
    return a;
}

rational operator - (const rational &x, const rational &y){
    int n1 = x.nom;
    int n2 = y.nom;

    n1=n1*y.den;
    n2=n2*x.den;
    int dn=x.den*y.den;
    int nn=n1-n2;
    int gr = rational::gcd(nn,dn);
    rational a = rational(nn/gr,dn/gr);
    return a;

}

rational operator * (const rational &x,const rational &y){
    int nn =x.nom*y.nom;
    int dn =x.den*y.den;

    int gr = rational::gcd(nn,dn);
    rational a = rational(nn/gr,dn/gr);
    return a;

}

rational operator / (const rational &x,const rational &y){
    int nn = x.nom*y.den;
    int dn = y.nom*x.den;
    
    int gr = rational::gcd(nn,dn);
    rational a = rational(nn/gr,dn/gr);
    return a;
}



int rational::gcd(int a,int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return std::abs(a);
}

std::ostream & operator << (std::ostream &out, const rational &x) {
    if (x.den == 1 or x.nom==0){
    out << x.nom;
    }else {
    out << x.nom<<"/"<<x.den;
    }
    return out;
    
}

int main(){

   rational a(1,2);
   rational b(1,2);
   cout<<a+b<<endl;
   cout<<a-b<<endl;
   cout<<a*b<<endl;
   cout<<a/b<<endl;
   rational c(2,6);
   cout << a + b - c << endl;
   cout<<a<<endl<<b;
   

}