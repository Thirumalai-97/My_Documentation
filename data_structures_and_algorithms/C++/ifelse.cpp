#include<iostream>

using namespace std ;

int main (){

    int age ;

    std :: cout << " Enter your age : ";
    std :: cin >> age ;

    if (age >=18){
        std :: cout << "You qare eligble to vote ";
    }else {
        std :: cout << " Sorry buddy you are not elgible to vote ";
    }

    return 0;
}