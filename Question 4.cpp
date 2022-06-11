#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << " Enter a year to find out if its leap or not :  " ;

    cin  >> year ;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout <<year << "is a leap year ";
            else
                cout <<year << "isn't leap year";

        }
        else
            cout <<year << "is a leap year ";

    }

    else
        cout <<year << "isn't leap year";



    return 0;
}