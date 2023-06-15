#include "taxmain.cpp"
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void select()
{
    Property t;
    Owner o;
    cal c;
    pay pa;
    print_tax pt;
    int ch;
    cout<<"1.Add property Details"<<endl;
    cout<<"2.Add owner Details"<<endl;
    cout<<"3.Calculate Tax"<<endl;
    cout<<"4.Pay tax"<<endl;
    cout<<"5.Print Tax Collected"<<endl;
    cin>>ch;
    do{
       switch(ch)
             {
       case 1:t.add_property();
           // t.disp_add();
           break;
       case 2:o.add_owner();
            // o.disp_owner();
       break;
      case 3:c.cal_tax();
      break;
       case 4:pa.pay_tax();
       break;
       case 5:pt.print_taxcollected(); 
       break;
        case 6: exit(0);
            default : cout << "\n invalid option";
                      cout << "\n choose the option : ";
                       cin >> ch;
        }
    }
    while(ch!=7);
}

int main()
{
    select();
    return 0;
    
    
    
    
    
    
    
}
             
    
