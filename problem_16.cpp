#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout << "enter three side of triangle";
    cin >> side1 >> side2 >> side3;

    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)  // pehle dehko triangle ha bhi k nahi
    {
        if (side1 == side2 == side3) // all side same toh euilateral
        {
            cout << "triangle is euilateral";
        }

        else if (side1 == side2 || side2 == side3 || side3 == side1) // only two side same toh isoclies
        {
            cout << "triangle is isosceles";
        }
        else
        {
            cout << "triangle is scaline";  // nah euilateral nah isosceles toh scalien 
        }
    }
    else{
        cout << "not valid Triangle";
    }
}