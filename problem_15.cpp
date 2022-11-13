#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout << "Enter the 3 side of the triangle";
    cin >> side1 >> side2 >> side3;

    if (side1 + side2 > side3)
    {
        if (side2 + side3 > side1)
        {
            if (side3 + side1 > side2)
            {
                cout << "the Triangle is Valid";
            }
            else
            {
                cout << "the Triangle is not Valid";
            }
        }
        else
        {
            cout << "the Triangle is not Valid";
        }
    }
    else
    {
        cout << "the Triangle is Invalid";
    }
}

// A triangle valid if sum  two sides is large than the third side

//a + b > c
//a + c > b and
//b + c > a
// true if all true