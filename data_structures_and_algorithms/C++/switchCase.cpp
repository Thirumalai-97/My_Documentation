#include<iostream>

using namespace std ;

int main (){

    int month ;
    std :: cout << "Enter the month (1-12)";
    std :: cin >> month ;

    switch(month){

        case 1:
            std :: cout << "This month is January ";
            break;
        case 2:
            std :: cout << "This month is Febrauary ";
            break;
        case 3:
            std :: cout << "This month is March ";
            break;
        case 4:
            std :: cout << "This month is April ";
            break;
        case 5:
            std :: cout << "This month is May ";
            break;
        case 6:
            std :: cout << "This month is June ";
            break;
        case 7:
            std :: cout << "This month is July ";
            break;
        case 8:
            std :: cout << "This month is August ";
            break;
        case 9:
            std :: cout << "This month is September ";
            break;
        case 10:
            std :: cout << "This month is October ";
            break;
        case 11:
            std :: cout << "This month is November ";
            break;
        case 12:
            std :: cout << "This month is December ";
            break;
        default:
            std :: cout << "Please eneter the number range from 1-12 ";
    }

    return 0;
}