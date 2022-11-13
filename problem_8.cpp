#include <iostream>
using namespace std;

int main(){
    char character;
    cout << "Enter a Character";
    cin >> character;
    if( character >= 'a' && character <= 'z' ){
        cout << "character is a alphabet";
    }
    else{
        cout << "Character is a digit";
    }
}