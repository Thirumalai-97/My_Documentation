#include<iostream>

using namespace std ;

int main (){

    int grade ;
    std :: cout << "Enter your grade : "; 
    std :: cin >> grade;

    grade >=40 ? std :: cout << "Congrats, You have passed the exam " : std :: cout << "Sorry, you failed the exam";
    return 0;
}