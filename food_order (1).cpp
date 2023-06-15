#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;





class Food{
    public:
    int food_id;
    int category_id;
    string food_name;
    float cost;
    int qty;
    public:
    Food(int id,int cat_id,string name,float c)
    {
        food_id=id;
        category_id=cat_id;
        food_name=name;
        cost=c;
        qty=0;
    }
    
    
};



class Report
{
    public:
    void display(vector<Food> s,int cat_id){
        
        
        for(auto it : s){
            if(it.category_id==cat_id){
            cout<<it.food_id<<" ";
            cout<<it.food_name<<" ";
            cout<<it.cost<<" ";
            
            
            cout<<"\n";
            }
            
        }
        
        
    }
    
    void display_all(vector<Food> s){
        
        
        for(auto it : s){
            
            cout<<it.food_id<<" ";
            cout<<it.food_name<<" ";
            cout<<it.cost<<" ";
            cout<<it.category_id<<" ";
            
            cout<<"\n";
            
            
        }
        
        
    }
    
   
    vector<Food> update_Food_name(vector<Food> s,string old_name,string new_name){
        
        for(auto &it:s){
            if(it.food_name==old_name){
                it.food_name=new_name;
                
            }
        }
        
        return s;
    }
    
     vector<Food> update_Food_cost(vector<Food> s,string old_name,float cost){
        
        for(auto &it:s){
            if(it.food_name==old_name){
                it.cost=cost;
                
            }
        }
        
        return s;
    }
    // int update(list<Food> s,int id,int ch){
    //     if(ch==1){
            
    //     }
    //     else if(ch==2){
            
    //     }
    // }
};
vector<Food> Dish={
                  Food(1,1,"Veg Pulav",70.00),
                  Food(2,1,"Biryani",120.00),
                  Food(3,1,"Pulka",100.00),
                  Food(4,1,"Roti Cury",100.00),
                  
                  Food(5,2,"Idly",70.00),
                  Food(6,2,"Upama",40.00),
                  Food(7,2,"Dosa",50.00),
                  Food(8,2,"Puri",70.00),
                  
                  Food(9,3,"Gobi Manchurian",70.00),
                  Food(10,3,"noodles",120.00),
                  Food(11,3,"Pulka",90.00),
                  Food(12,3,"Rolls",100.00),
                  Food(13,4,"Jamoon",20.00),
                  Food(14,4,"Rasgulla",120.00),
                  Food(15,4,"Pulka",90.00),
                  Food(16,4,"Rolls",100.00)};




int main(){
    
    
    // 1- North Indian 
    // 2- South Indian
    // 3- Chinese
    // 4- Desert
    int food_id=17;
    
    Report r;
    // r.dislpay(s);
    int ch;
    while(1){
        cout<<"1.North Indian"<<endl;
        cout<<"2.South Indian"<<endl;
        cout<<"3.Chinsese"<<endl;
        cout<<"4.Desert"<<endl;
        cout<<"5.Add/Update/Delete Item"<<endl;
        cout<<"6.Display Report"<<endl;
        cin>>ch;
        switch(ch){
            case 1: cout<<"Welcome to North Menu"<<endl;
            
                    int north_ch;
                    while(1){
                        r.display(Dish,1);
                        cout<<"-1.Exit"<<endl;
                        cout<<"Enter the Food ID Displayed to Order"<<endl;
                        cin>>north_ch;
                        if(north_ch==-1){
                            break;
                        }
                        cout<<Dish[north_ch-1].food_name<<" Has Been Ordered"<<endl;
                        Dish[north_ch-1].qty++;
                        
                    }
                    break;
            case 2: cout<<"Welcome to South Menu"<<endl;
            
                    int south_ch;
                    while(1){
                        r.display(Dish,2);
                        cout<<"-1.Exit"<<endl;
                        cout<<"Enter the Food ID Displayed to Order"<<endl;
                        cin>>south_ch;
                        if(south_ch==-1){
                            break;
                        }
                        cout<<Dish[south_ch-1].food_name<<" Has Been Ordered"<<endl;
                        Dish[south_ch-1].qty++;
                        
                    }
                    break;
            case 3: cout<<"Welcome to Chinese Menu"<<endl;
            
                    int chinese_ch;
                    while(1){
                        r.display(Dish,3);
                        cout<<"-1.Exit"<<endl;
                        cout<<"Enter the Food ID Displayed to Order"<<endl;
                        cin>>chinese_ch;
                        if(chinese_ch==-1){
                            break;
                        }
                        cout<<Dish[chinese_ch-1].food_name<<" Has Been Ordered"<<endl;
                        Dish[chinese_ch-1].qty++;
                        
                    }
                    break;
            case 4: cout<<"Welcome to Desert Menu"<<endl;
            
                    int desert_ch;
                    while(1){
                        r.display(Dish,4);
                        cout<<"-1.Exit"<<endl;
                        cout<<"Enter the Food ID Displayed to Order"<<endl;
                        cin>>desert_ch;
                        if(desert_ch==-1){
                            break;
                        }
                        cout<<Dish[desert_ch-1].food_name<<" Has Been Ordered"<<endl;
                        Dish[desert_ch-1].qty++;
                        
                    }
                    break;
            case 5: int update_ch;
                    cout<<"1.Add new Item"<<endl;
                    cout<<"2.Update Existing Item"<<endl;
                    cout<<"3.Delete an Item"<<endl;
                    cin>>update_ch;
                    if(update_ch==1){
                        string food_name_new;
                        float cost;
                        int cat_id;
                        cout<<"Enter Food Name"<<endl;
                        cin>>food_name_new;
                        cout<<"Enter Food category 1,2,3 or 4"<<endl;
                        cin>>cat_id;
                        cout<<"Enter Food cost\n"<<endl;
                        cin>>cost;
                        
                        Food f1(food_id++,cat_id,food_name_new,cost);
                        Dish.push_back(f1);
                    }
                    else if(update_ch==2){
                        int update_ch_food;
                        string old_name;
                        
                        cout<<"1.Food Name"<<endl;
                        cout<<"2.Food Cost"<<endl;
                        cin>>update_ch_food;
                        cout<<"Enter Food name to Update"<<endl;
                        cin>>old_name;
                        if(update_ch_food==1){
                            string new_name;
                            cout<<"Enter new Food name to update"<<endl;
                            cin>>new_name;
                            Dish = r.update_Food_name(Dish,old_name,new_name);
                        }
                        else if(update_ch_food==2){
                            float c;
                            cout<<"Enter new Cost to update"<<endl;
                            cin>>c;
                            Dish = r.update_Food_cost(Dish,old_name,c);
                        }
                        
                        
                    }
                    else{
                        int id;
                        cout<<"Enter food id to delete\n";
                        cin>>id;
                        int pos=0;
                        for(auto &it:Dish){
                            if(it.food_id==id){
                                break;
                            }
                            pos++;
                        }
                        
                        Dish.erase(Dish.begin()+pos);
                        
                        cout<<"Deleted\n"<<endl;
                    }
                    
                    break;
                    
    case 6: cout<<"Report"<<endl;
            r.display_all(Dish);
            break;
                    
                    
            
        }
    }
    // int id =2;
    
    // cout<<South_Dish[2].cost;
// }
//     // s.
//     r.dislpay(s);
    return 0;
}
