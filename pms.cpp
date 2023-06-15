#include<bits/stdc++.h>
using namespace std;
vector <string> loc={"BANGLAORE","PUNE","HYDRABAD","CHENNAI"};
vector <string> de={"SEC","satcom","Devices","RAN"};
vector <string> b={"GT","E1","E2","E3","L1","L2","L3"};
class employee     //EMPLOYEE DETAILS
{
    public:
    long int id=0;
    string name;
    string gender;
    int buld;
    string street;
    string area;
    //string area;
    string city;
    int pin;
    string location;
    string band;
    string dept;
   long  long int pf;
    
    long long int bank_no;
    int ctc;
    void add_user();
};
 vector<employee> em;
 //{{1,"Manoj kali","Male",3,"XYZ","ABC XYZZZ","Mangalore",580024,
//     "Bangalore","GT","RAN",123456,654321,25},{2,"Manoj kali","Male",3,"XYZ","ABC XYZZZ","Mangalore",580024,
//     "Bangalore","GT","RAN",123456,654321,25}};
void employee::add_user()    //ADDING EMPLOYEE
{
    id++;
    cout<<"Enter Employee Name:";
    getline(cin,name,' ');
    cout<<"Gender:";
    getline(cin,gender,' ');
    //cin>>gender;
    cout<<"ADDRESS"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Enter building/Gate/Door number:"<<endl;
   // getline(cin,buld,' ');
   cin>>buld;
    cout<<"Enter Street"<<endl;
    getline(cin,street,' ');
    cout<<"Enter Area"<<endl;
    getline(cin,area,' ');
    cout<<"enter city"<<endl;
    getline(cin,city,' ');
    cout<<"enter PIN code:"<<endl;
    //getline(cin,pin)
    cin>>pin;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter Company Base Location"<<endl;
    for(int i=0;i<loc.size();i++)
    cout<<loc[i]<<endl;
    getline(cin,location,' ');

    cout<<"Enter BAND"<<endl;
    for(int i=0;i<b.size();i++)
    cout<<b[i]<<endl;
    getline(cin,band,' ');

    cout<<"enter Department"<<endl;
    for(int i=0;i<de.size();i++)
    cout<<de[i]<<endl;
    getline(cin,dept,' ');
    
    cout<<"enter PF number";
    cin>>pf;
    cout<<"enter Bank Account Number";
    cin>>bank_no;
    cout<<"enter CTC (in Lakhs)";
    cin>>ctc;
em.push_back({
    id,name,gender,buld,street,area,city,pin,
    location,band,dept,pf,bank_no,ctc
    });

}
class print_emp:employee
{
    public:
    void p_emp()
    {
    //     cout<<"ID    NAME   GENDER BUILDING    street,area,city,pin,
    // location,band,dept,pf,bank_no,ctc"<<endl;
    if(em.size()==0)
    {
        cout<<"Data Empty"<<endl;
    }
        for(int i=0;i<em.size();i++)
        {
            cout<<"========================================================================"<<endl;
            cout<<"ID:"<<em[i].id<<endl;
            cout<<"NAME:"<<em[i].name<<endl;
            cout<<"GENDER:"<<em[i].gender<<endl;
            cout<<"BUILDING NUMBER:"<<em[i].buld<<endl;
            cout<<"STREET:"<<em[i].street<<endl;
            cout<<"AREA:"<<em[i].area<<endl;
            cout<<"CITY:"<<em[i].city<<endl; 
            cout<<"PINCODE:"<<em[i].pin<<endl;
            cout<<"COMPANY LOCATION:"<<em[i].location<<endl;
            cout<<"BAND:"<<em[i].band<<endl;
            //cout<<em[i].band<<" ";
            cout<<"DEPARTMENT:"<<em[i].dept<<endl;
            cout<<"PF NUMBER:"<<em[i].pf<<endl;
            cout<<"BANK ACC NUMBER:"<<em[i].bank_no<<endl;
            cout<<"CTC:"<<em[i].ctc<<" "<<endl;
            cout<<"========================================================================"<<endl;
            cout<<endl;
        }
}
};
class serch:employee
{
    public:
    void ser_employee()
{
    int st;
    int c=0;
    if(em.size()==0)
    {
        cout<<"Data Empty"<<endl;
    }
     start: cout<<"Eneter the Employ id"<<endl;
    cin>>st;
    for(int i=0;i<em.size();i++)
    {
        if(em[i].id==st)
        {
            c=1;
            cout<<"========================================================================"<<endl;
            cout<<"ID:"<<em[i].id<<endl;
            cout<<"NAME:"<<em[i].name<<endl;
            cout<<"GENDER:"<<em[i].gender<<endl;
            cout<<"BUILDING NUMBER:"<<em[i].buld<<endl;
            cout<<"STREET:"<<em[i].street<<endl;
            cout<<"AREA:"<<em[i].area<<endl;
            cout<<"CITY:"<<em[i].city<<endl; 
            cout<<"PINCODE:"<<em[i].pin<<endl;
            cout<<"COMPANY LOCATION:"<<em[i].location<<endl;
            cout<<"BAND:"<<em[i].band<<endl;
            //cout<<em[i].band<<" ";
            cout<<"DEPARTMENT:"<<em[i].dept<<endl;
            cout<<"PF NUMBER:"<<em[i].pf<<endl;
            cout<<"BANK ACC NUMBER:"<<em[i].bank_no<<endl;
            cout<<"CTC:"<<em[i].ctc<<" "<<endl;
            cout<<"========================================================================"<<endl;
            cout<<endl;
            // break;
        }
    }
    if(c==0)
    {
    cout<<"Employee ID not found"<<endl;
    goto start;
    }
}

};
class remov:employee
{
    public:
    void rem_employee()
{
    int str;
    int c=0;
    start: cout<<"Enter the Employ id to remove"<<endl;
    cin>>str;
   // if(em.size())
    // if(str==0)
    // exit(0);
    int temp=-1;
    int it=-1;
    //vector<int>::iterator it;
for(int i=0;i<em.size();i++)
{
    if(em[i].id==str)
    {
    em.erase(em.begin()+i);
    c++;
    cout<<"Sucessfully Removed"<<endl;
   }// it = find(em.begin(), em.end(),);

}
    if(c==0)
    {
    cout<<"Employee ID not found"<<endl;
    goto start;
    }
}

};
class modify:employee
{
    public:
    int emp;
    int temp=-1;
    //menu obj;
    // if(em.size()==0)
    // {
    //     cout<<"Empty Data";
    //     obj.disp();
    // }
    void mod()
    {

   start: cout<<"Enter the employee id"<<endl;
    cin>>emp;
    int n;
    for(int i=0;i<em.size();i++)

    {
        if(em[i].id==emp)
        {
            temp=5;
            id=i;
            cout<<"Enter Employee Name";
    getline(cin,name,' ');
    cout<<"Gender";
    //getline(cin,gender);
    cin>>gender;
    cout<<"ADDRESS"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Enter building/Gate/Door number"<<endl;
   // getline(cin,buld,' ');
   cin>>buld;
    cout<<"Enter Street"<<endl;
    getline(cin,street,' ');
    cout<<"Enter Area"<<endl;
    getline(cin,area,' ');
    cout<<"enter city"<<endl;
    getline(cin,city,' ');
    cout<<"enter PIN code:"<<endl;
    //getline(cin,pin)
    cin>>pin;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter Company Base Location"<<endl;
    for(int i=0;i<loc.size();i++)
    cout<<loc[i]<<endl;
    getline(cin,location,' ');

    cout<<"Enter BAND"<<endl;
    for(int i=0;i<b.size();i++)
    cout<<b[i]<<endl;
    getline(cin,band,' ');

    cout<<"enter Department"<<endl;
    for(int i=0;i<de.size();i++)
    cout<<de[i]<<endl;
    getline(cin,dept,' ');
    
    cout<<"enter PF number";
    cin>>pf;
    cout<<"enter Bank Account Number";
    cin>>bank_no;
    cout<<"enter CTC (in Lakhs)";
    cin>>ctc;
em.push_back({
    id,name,gender,buld,street,area,city,pin,
    location,band,dept,pf,bank_no,ctc
    });
        }
        break;
    }
    if(temp!=5)
    cout<<"Employee ID not found"<<endl;
    goto start;
    }
};
class pay:employee
{
    public:
    void cal()
{
    int num=0;
    string mon;
    int mess=0;
    int count=0;
    start:cout<<"Enter Employeer ID:";
    cin>>num;
    for(int i=0;i<em.size();i++)
{
    if(em[i].id==num)
    {
        count=1;
        break;
    }
}
if(count==0)
{
cout<<"Employee ID not found"<<endl;
goto start;
}
    cout<<"Emter Pay Month(in MM-YYYY):";
    cin>>mon;
    cout<<"Enter Mess bill:";
    cin>>mess;
int sal=0;
    for(int i=0;i<em.size();i++)
{
    if(em[i].id==num)
    {
        sal=em[i].ctc;
        break;
   }
}
if(sal==0)
{
    cout<<"EMPLOYEE ID NOT FOUND"<<endl;
}
if(sal>-1)
{
    sal=sal*100000;
   long long int bas_sal=0.6*sal;
    long int vpp=0.3*sal;
    long int pf=0.05*sal;
    int ot_al=0.05*sal;
    int tax=0;
    if(sal>=500000 && sal<=1000000)
    {
        tax=0.05*sal;
    }
    else if(sal>100000 && sal<=1500000)
    tax=0.1*sal;
    else if(sal>1500001 && sal<=2000000)
    tax=0.15*sal;
    else if(sal>2000000)
    tax=0.2*sal;
    long int gross=bas_sal+vpp+ot_al;
    long int net_pay=gross-mess-tax;

    cout<<"========================================"<<endl;
    cout<<mon<<endl;
    cout<<"Basic-Salary:"<<bas_sal<<endl;
    cout<<"Variable-Pay:"<<vpp<<endl;
    cout<<"Provident-Fund:"<<pf<<endl;
    cout<<"Income-Tax:"<<tax<<endl;
    cout<<"Mess-Bill:"<<mess<<endl;
    cout<<"Net-Pay:"<<net_pay<<endl;
    cout<<"Gross-pay:"<<gross<<endl;
   // cout<<"CTC:"<<sal<<endl;
    cout<<"======================================="<<endl;
}
}
};

class menu
{
    public:
    void disp()
    {
    int ch;
    employee e;
    print_emp p;
    serch se;
    remov re;
    modify m;
    pay pa;
    do
    {
    cout<<"Select option-"<<endl;
    //cout<<"Enter your choice"<<endl;
    cout<<"1.Add Employee"<<endl;//........
    cout<<"2.Modify Employee "<<endl;
    cout<<"3.Remove Employee"<<endl;//..............
    cout<<"4.Search Employee "<<endl;//.............
    cout<<"5.Print Employee "<<endl;//..................
    cout<<"6.Generate Pay slip"<<endl;
    cout<<"7.EXIT "<<endl;
   // cout<<"7. EXIT"<<endl;
    //cin>>x;
    cin>>ch;
    switch(ch)
    {
        case 1:e.add_user();
        break;
        case 2:m.mod();
        break;
        case 3:re.rem_employee();
                p.p_emp();
        break;
        case 4:se.ser_employee();
        break;
        case 5:p.p_emp();
        break;
        case 6:pa.cal();
        break;
        case 7:cout<<"-----------Thank you------------"<<endl;
        exit(0);
        default:cout<<"enter valide input";
    }
    }while(ch!=7);
    }
};
int main()
{
menu m;
m.disp();
}