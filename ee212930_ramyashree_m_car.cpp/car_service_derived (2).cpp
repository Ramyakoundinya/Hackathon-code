#include "car_service_base.cpp"
#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

class service_station : public car{
    private:
        vector<vector<string>> register_cars;
        vector<vector<string>> car_list;
        vector<vector<string>> billing;
        string name, address;
        string issues, date, tim;
        string services_provide[7] = {"pressure checking","breaking system","alignment","painting","fittings","water wash","foam wash"};
        int y, m;
        int l_t_p = 350, b_n_r = 415, u_s = 550, w_a = 300, painting = 600 , fitting = 400, w_w = 200, f_w = 300, o_s = 300;

    public://///////////////////////////getting registration/////////////////////////////////////
        void get_regestrations(){
            get_car_details();
            cout << "\n enter the issues : ";
            getline(cin,issues);
            vector<string> data;
            data.push_back(car_R_num);
            data.push_back(car_M);
            data.push_back(car_C_name);
            data.push_back(Y_purchase);
            data.push_back(no_owners);
            data.push_back(last_S_data);
            data.push_back(Odo_read);
            data.push_back(ins_num);
            data.push_back(ins_exp_data);
            data.push_back(ins_type);
            data.push_back(ins_pa_paid);
            data.push_back(chassisN);
            data.push_back(engineN);
            data.push_back(issues);
            register_cars.push_back(data);
            update_insurance();
        }
/////////////////////////getting current date and time///////////////////////////////////////////////
        void getdate(){
            date = "";tim = "";
            int a[10],i=0,j=0;
            time_t now = time(0);
            tm* itm = localtime(&now);
            int year = 1900 + itm->tm_year;
            int mon = 1 + itm->tm_mon;
            int day = itm->tm_mday;
            int hour = itm->tm_hour;
            int min = itm->tm_min;
            y = year;
            m = mon;
            if(day/10 == 0){
                date += '0';
            }
            while(day!=0){
                int r = day%10;
                a[j] = r;
                j++;
                day = day/10;
            }
            for(int k=j-1;k>=0;k--){
                date += a[k] + '0';
            }
            date += '/';
            a[j] = {0};j=0;
            if(mon/10 == 0){
                date += '0';
            }
            while(mon!=0){
                int r = mon%10;
                a[j] = r;
                j++;
                mon = mon/10;
            }
            for(int k=j-1;k>=0;k--){
                date += a[k] + '0';
            }
            date += '/';
            a[j] = {0};j=0;
            while(year!=0){
                int r = year%10;
                a[j] = r;
                j++;
                year = year/10;
            }
            for(int k=j-1;k>=0;k--){
                date += a[k] + '0';
            }
            a[j] = {0};j=0;
            if(hour/10 == 0){
                tim += '0';
            }
            while(hour!=0){
                int r = hour%10;
                a[j] = r;j++;
                hour = hour/10;
            }
            for(int k=j-1;k>=0;k--){
                tim += a[k] + '0';
            }
            tim += ':';
            a[j] = {0};j=0;
            if(min/10 == 0){
                tim += '0';
            }
            while(min!=0){
                int r = min%10;
                a[j] = r;j++;
                min = min/10;
            }
            for(int k=j-1;k>=0;k--){
                tim += a[k] + '0';
            }
        }
///////////////////////////////////for printing car details////////////////////////////////////////////
        void print_all_car_details(){
            string reg_num;
            cout << "\n enter the registration number : ";
            cin >> reg_num;
            for(int i=0;i<register_cars.size();i++){
                if(reg_num == register_cars[i][0]){
                    cout << "\n registration number   : " << register_cars[i][0];
                    cout << "\n model number          : " << register_cars[i][1];
                    cout << "\n customer number       : " << register_cars[i][2];
                    cout << "\n year of purchase      : " << register_cars[i][3];
                    cout << "\n no of owners          : " << register_cars[i][4];
                    cout << "\n last service date     : " << register_cars[i][5];
                    cout << "\n Odometer reading      : " << register_cars[i][6];
                    cout << "\n insurance number      : " << register_cars[i][7];
                    cout << "\n insurance expiry date : " << register_cars[i][8];
                    cout << "\n insurance type        : " << register_cars[i][9];
                    cout << "\n insurance amount paid : " << register_cars[i][10];
                    cout << "\n chassis number        : " << register_cars[i][11];
                    cout << "\n engine number         : " << register_cars[i][12];
                    cout << "\n issues                : " << register_cars[i][13];
                }
                else if(i == register_cars.size()){
                    cout <<"\n no car is registered with that number";
                }
            }
        }
////////////////////////////////for updating insurance/////////////////////////////////////////////
        void update_insurance(){
            string num1,num2,num3,num4;
            for(int i=0;i<register_cars.size();i++){
                string exp_date = register_cars[i][8];
                int count = 0,edate[10],k=0,ed = 0;
                for(int j=exp_date.length()-1;j>=0;j--){
                    edate[k] = exp_date[j] - '0';
                    k++;
                }
                for(int k=0;k<4;k++){
                    ed = (ed*10) + (edate[k]);
                }
                int edd = 0;
                while(ed!=0){
                    int r = ed%10;
                    edd = (edd*10) + r;
                    ed = ed/10;
                }
                getdate();
                if(edd < y){
                    cout << "\n updated insurance number : ";
                    cin >> num1;
                    register_cars[i][7] = num1;
                    cout << "\n updated expiry date : ";
                    cin >> num2;
                    register_cars[i][8] = num2;
                    cout << "\n updated insurance type : ";
                    cin >> num3;
                    register_cars[i][9] = num3;
                    cout << "\n updated insurance amount : ";
                    cin >> num4;
                    register_cars[i][10] = num4;
                }
                // if(ed > y){
                //     for(int k = 5;k<7;k++){
                //         ed += (ed*10) + (edate[k]);
                //     }
                //     if(ed <= m){
                //         cout << "\n updated insurance number : ";
                //         cin >> num1;
                //         register_cars[i][7] = num1;
                //         cout << "\n updated expiry date : ";
                //         cin >> num2;
                //         register_cars[i][8] = num2;
                //         cout << "\n updated insurance type : ";
                //         cin >> num3;
                //         register_cars[i][9] = num3;
                //         cout << "\n updated insurance amount : ";
                //         cin >> num4;
                //         register_cars[i][10] = num4;
                //     }
                // }
            }
        }
///////////////////////////////////adding car to service///////////////////////////////////////////
        void add_car_to_service(){
            for(int i=0;i<register_cars.size();i++){
                vector<string> data;
                getdate();
                data.push_back(register_cars[i][0]);
                data.push_back(register_cars[i][2]);
                data.push_back(register_cars[i][6]);
                data.push_back(date);
                car_list.push_back(data);
            }
        }
//////////////////////////////////print ramaining car list to serve/////////////////////////////////////
        void print_car_list(){
            cout << "\n no of cars to service : ";
            for(int i=0;i<car_list.size();i++){
                cout << "\n" << car_list[i][0];
            }
        }
//////////////////////////////////drop the car to service//////////////////////////////////
        void drop_car_to_service(){
            int n, amount = 0;
            string reg_num;
            cout << "\n enter the registration number : ";
            cin >> reg_num;
            cout <<"\n services provided              : ";
            for(int i=0;i<sizeof(services_provide)/sizeof(services_provide[0]);i++){
                cout << services_provide[i] << " ";
            }
            for(int i=0;i<car_list.size();i++){
                string services[10],serviced = "",amo = "";
                vector<string> data;
                if(reg_num == car_list[i][0]){
                    if(car_list[i][0] == register_cars[i][0]){
                        data.push_back(car_list[i][0]);
                        data.push_back(car_list[i][2]);
                        data.push_back(car_list[i][3]);
                        getdate();
                        data.push_back(date);
                        cout << "no of services are doing : ";
                        cin >> n;
                        cout << "enter the services types : ";
                        for(int j=0;j<n;j++){
                            cin >> services[i];
                        }
                        for(int j=0;j<n;j++){
                            if(services[j] == "low_tire_pressure"){
                                serviced += services[j];
                                serviced += " ";
                                amount += l_t_p;
                            }
                            else if(services[j] == "break_not_responsive"){
                                serviced += services[j];
                                serviced += " ";
                                amount += b_n_r;
                            }
                            else if(services[j] == "understeering"){
                                serviced += services[j];
                                serviced += " ";
                                amount += u_s;
                            }
                            else if(services[j] == "wheel_alignment"){
                                serviced += services[j];
                                serviced += " ";
                                amount += w_a;
                            }
                            else if(services[j] == "painting"){
                                serviced += services[j];
                                serviced += " ";
                                amount += painting;
                            }
                            else if(services[j] == "fitting"){
                                serviced += services[j];
                                serviced += " ";
                                amount += fitting;
                            }
                            else if(services[j] == "water_wash"){
                                serviced += services[j];
                                serviced += " ";
                                amount += w_w;
                            }
                            else if(services[j] == "foam_wash"){
                                serviced += services[j];
                                serviced += " ";
                                amount += f_w;
                            }
                            serviced += "other_services";
                            data.push_back(serviced);
                            amount += o_s;
                            int z=0, a[z];
                            while(amount!=0){
                                int r = amount%10;
                                a[z] = r;
                                z++;
                                amount = amount/10;
                            }
                            for(int k=z-1;k>=0;k--){
                                amo += a[k] + '0';
                            }
                            data.push_back(amo);
                            billing.push_back(data);
                            remove_car();
                        }
                    }
                }
                else if(i == car_list.size()){
                    cout <<"\n no car is registered with that number";
                }
            }
        }
///////////////////////////////////printing the bill/////////////////////////////////
        void print_bill(){
            string reg_num;
            cout << "\n enter the registration number : ";
            cin >> reg_num;
            for(int i=0;i<billing.size();i++){
                if(reg_num == billing[i][0]){
                    cout << "\n registration number : " << billing[i][0];
                    cout << "\n customer name       : " << billing[i][1];
                    cout << "\n Odo number          : " << billing[i][2];
                    cout << "\n services            : " << billing[i][4];
                    cout << "\n date                : " << billing[i][3];
                    cout << "\n amount              : " << billing[i][5];
                }
                else if(i == billing.size()){
                    cout <<"\n no car is registered with that number";
                }
            }
        }
//////////////////////////////for removing the car after the car is served/////////////////////////////////////////
        void remove_car(){
            string reg_num;
            cout << "enter the registration number : ";
            cin >> reg_num;
            vector<vector<string>>::iterator it = car_list.begin();
            for(int i=0;i<car_list.size();i++){
                if(reg_num == car_list[i][0]){
                    car_list.erase(it+i);
                    register_cars.erase(it+i);
                }
            }
        }
};