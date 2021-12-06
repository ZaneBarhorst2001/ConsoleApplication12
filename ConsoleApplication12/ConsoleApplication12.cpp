//Zane Barhorst
//CIS 1202 502
//12/5/21

#include <iostream>

using namespace std;

//Template for the half function.
template <class T>
T half(T value) {
    return value / 2;
}

//Function for the Integer portion of the half.
int half(int value) {
    if (value % 2 == 0) {
        return value;
    }

    else {
        round(value);
        return static_cast<int>(value);
    }
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    //This will be 3.5 if double a is 7.
    cout << half(a) << "\n";
    //This will be 2.5 if float b is 5.
    cout << half(b) << "\n";
    //This will be 2 if integer is 2.
    cout << half(c) << "\n";
}
