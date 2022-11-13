#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "enter a Character";
    cin >> character;

    switch (character)
    {
    case 'a':
        cout << "vowel";
        break;
    case 'e':
        cout << "vowel";
        break;
    case 'i':
        cout << "vowel";
        break;
    case 'o':
        cout << "vowel";
    case 'u':
        break;
        cout << "vowel";
        break;
    default:
        cout << "consonent";
    }
}