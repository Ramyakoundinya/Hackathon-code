#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<string>usg={"self","rental"};

class Property
{
  public:
  int khataid;
  float len,width;
  int numofstory,taxforprop;
  string usage;
  void add_property();
 // void disp_add();
};

vector<Property> prop;
void Property::add_property()
{ 
    
     cout<<"Enter The Khataid"<<endl;
     cin>>khataid;
    //cout<<"-----------------------------"<<endl;
    cout<<"Enter Physical Dimension length"<<endl;
    cin>>len;
    cout<<"Enter Physical Dimension breadth"<<endl;
    cin>>width;
    cout<<"Enter Number of Stories"<<endl;
      cin>>numofstory;
     cout<<"Enter Tax For the Property"<<endl;
      cin>>taxforprop;
     cout<<"Enter Usage"<<endl;
     for(int i=0;i<usg.size();i++)
     cout<<usg[i]<<endl;
     getline(cin,usage,' ');
     prop.push_back({khataid,len,width,numofstory,taxforprop,usage});

}
class Owner
{
    //float size;
    public:
    string name,address,phone,email;
    int k_list[10];
    void add_owner();
    //void  disp_owner();
};
vector<Owner> ownlist;
void Owner::add_owner()
{
   // add_property();
   int num=0;
    cout<<"Enter name"<<endl;
    getline(cin,name,' ');
    cout<<"Enter Address"<<endl;
    getline(cin,address,' ');
    cout<<"Enter phone Number"<<endl;
    getline(cin,phone,' ');
    cout<<"enter Email"<<endl;
     getline(cin,email,' ');
     cout<<"Number of properties owner owns: ";
      cin>>num;
     for(int i=0;i<num;i++)
        {
         cout<<"Enter the ID of "<< i+1<<"property: ";
          cin>>k_list[i];
         // data.push_back(k_list);
        }
        ownlist.push_back({name,address,phone,email});
      //break;
}
class cal:Property
{
    public:
    int num;
    int tax=0;
    int c=0;
   float size=len*width;
    void cal_tax()
    {
      cout<<"Enter Khata Number"<<endl;
        cin>>num;
        for(int i=0;i<prop.size();i++)
        {
               if(num==prop[i].khataid)
               {
                     //cout<<"TAx of the property id:"<<p.taxforprop<<endl;
                      c=1;
                      break;
               }
        if(c==0)
        {
             cout<<"no such property"<<endl;
             
        }  
        }
        if(numofstory==0)
        {
            tax=1*size;
        }
        else if(numofstory==1)
        {
            if(usage=="self")
            {
                tax=1.5*size;
            }
            else
            {
                tax=1.75*size;
            }
            
        }
        else if(numofstory==2)
        {
              if(usage=="self")
              {
                tax=2*size;
              }
              else{
                tax=2.25*size;
              }
        }
        else if(numofstory==3 || numofstory==5)
        {
            tax=numofstory *3.5;
        }
        if(numofstory>5 && numofstory<=25)

        {

            tax=numofstory*size;

        }
          cout<<"Tax = "<<tax;
    }

 };
 
 
//  vector<Property> proptype={ "plainground","Building with tiles"," House with RCC molds","Small commercial building"
//  ,"SEZ building"};
// class pay:cal,Tax
// {
//    public:
//    void pay_tax(int id)
//    {
//     Tax t;
//     t.khath_id=id;
//     t.amt=tax;
//     tax_list.push_back(t);
//    cout<<"The tax for year is: "<<tax<<endl;
//     int get_khata_id() 
//     {
//          return khata_id;
//     }
//    }
//  };
int totaltax=0;
class pay{
    public:
void pay_tax()
{
        cout<<"Enter the Khata id to display bill"<<endl;
        int Khataid;
        cin>>Khataid;
        int flag=0;
        for(int i=0;i<prop.size();i++){
            if(prop[i].khataid==Khataid){
                flag=1;
                cout<<"Khata ID is- "<<prop[i].khataid<<endl<<endl;
                cout<<"Number Of stories- "<<prop[i].numofstory<<endl<<endl;
                cout<<"Total Tax to be paid = "<<prop[i].taxforprop<<endl<<endl;
                totaltax+=prop[i].taxforprop;
            }
        }
        if(flag==0){
            cout<<"Khata Number does not exist"<<endl;
        }
        
       }
 };
 class print_tax
 {
    public:
void print_taxcollected(){
    
        cout<<"--------Total Tax collected by the corporation--------"<<totaltax<<endl;
        
    }
 };




