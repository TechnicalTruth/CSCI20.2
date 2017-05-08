//Name: Juan Lemus
//Date: 4/18/17
//Lab description: Simple store sytem desinged to work by user taking produce out of the store and keeping a live stock counter.
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

class CART{
    public:
    Cart(){
        totalCost_ = 0;
    }
    void setCharge(double price_){
        price_ = price;
    }
    void setSold(int amtSold){
        Sold_ = amtSold;
    }
     void setInventory
};

int main(){
    
   string menuItem[10];
    double price_stock[1][10];
    int numItem[10];
    int menuItemDef;
    double cart = 0;
    for(int i = 0; i < 10;++i){
       
        
    }
    for(int i = 0; i < 20;i++){
        if(i < 10)
            price_stock[0][i] = 1 + ( i*.75 );
        else
            price_stock[1][i-10] = 10.; 
    }
     
    menuItem [0] = "Apple";
    menuItem [1] = "Bannana";
    menuItem [2] = "Orange";
    menuItem [3] = "Pineapple";
    menuItem [4] = "Kiwi";
    menuItem [5] = "Pear";
    menuItem [6] = "Strawberry";
    menuItem [7] = "Raspberry";
    menuItem [8] = "Blueberry";
    menuItem [9] = "Blackberry";
  
    return 0;
}