#include <iostream>
using namespace std;

int main()
{
    int salary;
    cout << "Enter salary : ";
    cin>> salary ;

    if(salary>=5000)
    {
        salary =salary - (salary *15/100 ) ;
    }
    else if (salary >= 1000 && salary <= 1500)
    {
        salary = salary +  200 ;
    }
    else if (salary >= 3000 )
    {
        salary = salary -  (salary *10/100 ) ;
    }
    else if (salary <3000)
    {
        salary = salary - (salary *5/100 ) ;
    }
    cout<<"the netsalary is : " << salary ;


    return 0;
}