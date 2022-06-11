q1)

#include <iostream>
using namespace std;

int main() {

    char op;

    float  x,y,sum,multiply,z,Maximum,Minimum;

    cout << "\n choose your operation you need ";

    cout << "\n _____________________________________\n";

    cout <<"\n ( Enter  1 for multiplication / " <<" Enter  2 for summation / "<<" Enter 3 to calculate maximum and minimum / " << "\nEnter 0 to exit program ) :  ";

    cin>>op;

    switch(op) {

        case '1':
            cout << " Enter 2 numbers: ";
            cin >> x >> y;
            multiply = x * y;
            cout << "the result is : " << multiply;
            break;

        case '2':
            cout << "Enter 2 numbers: ";
            cin >> x >> y;
            sum = x + y;
            cout << "the result is : " << sum;
            break;

        case '3':
            cout << "Enter 3 numbers: ";
            cin >> x >> y >> z;
            Maximum = (x > y && x > z) ? x : (y > z) ? y : z;
            Minimum = (x < y && x < z) ? x : (y < z) ? y : z;
            cout << "\n Maximum is : " << Maximum;
            cout << "\n Minimum is : " << Minimum;
            break;

        case '0':
            cout << "Exit program";
            break;

        default:
            cout << "enter 1 or 2 or 3 or 0";
    }
    return 0;
}


