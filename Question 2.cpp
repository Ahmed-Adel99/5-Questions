#include <iostream>
using namespace std;

int main()
{
    float first_car_hours,second_car_hours,third_car_hours,total_car_hours;
    float first_car_charge,second_car_charge,third_car_charge,total_car_charge;

    cout <<"Enter first car charge hours : ";
    cin>> first_car_hours ;

    /* first car */

    if(first_car_hours < 3)
    {
        first_car_charge = 2.00 ;
    }
    else

    if(first_car_hours > 3 && first_car_hours < 24 )
    {
        first_car_charge = (first_car_hours - 3 ) * 0.50 + 2.00 ;
    }

    else
    if(first_car_hours >= 24)
    {
        first_car_charge = 10.00;
    }
/* ----------------------------------------*/
/* second car */

    cout <<"Enter second car charge hours : ";

    cin>> second_car_hours ;

    if(second_car_hours < 3)
    {
        second_car_charge = 2.00 ;
    }
    else if(second_car_hours > 3 && second_car_hours < 24 )
    {
        second_car_charge = (second_car_hours - 3 ) * 0.50 + 2.00 ;
    }

    else if(second_car_hours >= 24)
    {
        second_car_charge = 10.00;
    }
/* ----------------------------------------*/
/* third car */

    cout <<"Enter third car charge hours : ";
    cin>> third_car_hours ;

    if(third_car_hours < 3)
    {
        third_car_charge = 2.00 ;
    }
    else if(third_car_hours > 3 && third_car_hours < 24 )
    {
        third_car_charge = (third_car_hours - 3 ) * 0.50 + 2.00 ;
    }

    else if(third_car_hours >= 24)
    {
        third_car_charge = 10.00;
    }

    /* ------------<< total car charge & hours >>-------------------*/


    total_car_charge = first_car_charge + second_car_charge + third_car_charge ;
    total_car_hours = first_car_hours + second_car_hours + third_car_hours;

    cout<<" car\t hours \t charge \n";
    cout<<"1\t " << first_car_hours << "\t" <<first_car_charge ;
    cout<<"\n2\t"<<second_car_hours << "\t" <<second_car_charge;
    cout<<"\n3\t"<<third_car_hours  << "\t" <<third_car_charge ;
    cout<<"\ntotal\t" <<total_car_hours << "\t" <<total_car_charge;




    return 0;
}