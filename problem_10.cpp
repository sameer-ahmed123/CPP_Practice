#include <iostream>
using namespace std;

int main(){
    char  character;
    cout<<"Enter a character: ";
    cin>>character;

    if(character >= 'a' && character <= 'z'){
        cout << "character is lowercase alphabet";
    }
    else if (character >= 'A'&& character <= 'Z'){
        cout <<"Character is UpperCase Alphabet";
    }
    else if (character >= '0' && character <= '9'){
        cout << "character is digit";;
    }
    else {
        cout << "Character is Special Character";
    }
}