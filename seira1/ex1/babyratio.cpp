#ifndef CONTEST
#include "babyratio.hpp"
#include <iostream>
#endif

using namespace std;

rational::rational(int n, int d){
    nom=n;
    den=d;
}

rational rational::add(rational r){
    int n1=nom;
    int n2=r.nom;

    n1=n1*r.den;
    n2=n2*den;
    int dn=den*r.den;
    int nn=n1+n2;
    int x=gcd(nn,dn);
    rational a = rational(nn/x,dn/x);
    return a;
    
}

rational rational::sub(rational r){
    int n1=nom;
    int n2=r.nom;

    n1=n1*r.den;
    n2=n2*den;
    int dn=den*r.den;
    int nn=n1-n2;
    int x=gcd(nn,dn);
    rational a = rational(nn/x,dn/x);
    return a;
}

rational rational::mul(rational r){
    int nn=nom*r.nom;
    int dn=den*r.den;
    int x=gcd(nn,dn);
    rational a = rational(nn/x,dn/x);
    return a;
}

rational rational::div(rational r){
   int nn=nom*r.den;
   int dn=den*r.nom;
   int x= gcd(nn,dn);
   rational a = rational(nn/x,dn/x);
       
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

void rational::print(){
    
    if (den==1){
        cout<<nom;
    }else if(nom==0){
        cout<<"0";
    }else{
    cout<<nom<<"/"<<den;
    }
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