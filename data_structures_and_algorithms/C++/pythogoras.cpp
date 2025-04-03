#include<iostream>
#include<cmath>

using namespace std ;
int main (){

    double a;
    double b;
    double c;

    std :: cout << "Enter the value of a : " ;
    std :: cin >> a ;

    std :: cout << "Enter the value of b : " ;
    std :: cin >> b ;

    c = sqrt(pow(a,2) + pow(b,2));

    std :: cout << c <<'\n';


    return 0;
}