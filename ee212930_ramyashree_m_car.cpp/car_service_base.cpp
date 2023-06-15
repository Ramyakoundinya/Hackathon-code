#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

class car{
    protected:

        string car_C_name, car_M, car_R_num;
        string Y_purchase, no_owners, last_S_data;
        string Odo_read, ins_num, ins_exp_data, ins_type;
        string ins_pa_paid, chassisN, engineN;

    public:

        void get_car_details(){
            cout << "\n enter the car customer name : ";
            cin >> car_C_name;
            cout << "\n enter the car model name : ";
            cin >> car_M;
            cout << "\n enter the cara regestration number : ";
            cin >> car_R_num;
            cout << "\n enter the year of purchare : ";
            cin >> Y_purchase;
            cout << "\n enter the no of owners : ";
            cin >> no_owners;
            cout << "\n enter the last service date : ";
            cin >> last_S_data;
            cout << "\n enter the odometer reading : ";
            cin >> Odo_read;
            cout << "\n enter the insurance number : ";
            cin >> ins_num;
            cout << "\n enter the insurance expiery date : ";
            cin >> ins_exp_data;
            cout << "\n enter insurance type : ";
            cin >> ins_type;
            cout << "\n enter insurance premium amount paid : ";
            cin >> ins_pa_paid;
            cout << "\n enter the car chassis number : ";
            cin >> chassisN;
            cout << "\n enter the car engine number : ";
            cin >> engineN; 
        }
};