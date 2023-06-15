#include "car_service_derived.cpp"
#include<iostream>

using namespace std;

void select(){
    service_station s;
    int option;
    cout << "\n enter the option : ";
    cin >> option;
    do{
        switch(option){
            case 1: s.get_regestrations();
                    s.add_car_to_service();
                    cout << "\n enter the option : ";
                    cin >> option;
                    break;
            case 2: s.drop_car_to_service();
                    cout << "\n enter the option : ";
                    cin >> option;
                    break;
            case 3: s.print_all_car_details();
                    cout << "\n enter the option : ";
                    cin >> option;
                    break;
            case 4: s.print_bill();
                    cout << "\n enter the option : ";
                    cin >> option;
            case 5: s.print_car_list();
                    break;
            case 6: exit(0);
            default : cout << "\n invalid option";
                      cout << "\n choose the option : ";
                      cin >> option;
        }
    }
    while(option!=7);
}

int main(){
    select();
    return 0;
}