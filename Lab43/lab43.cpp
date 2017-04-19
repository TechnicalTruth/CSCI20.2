//Name: Juan Lemus
//Date: 4/18/17
//Lab description: Simple store sytem desinged to work by user taking produce out of the store and keeping a live stock counter.
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

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
    /*
    for(int i = 0; i < 10;++i)
        
        cout << i+1 << ") " << menuItem[i] << endl;
        cout << "Choose product (1-10)"<< endl;
    
    while(cin >> menuItemDef){
        
        price_stock[1][menuItemDef-1] -= 1;
        
       
    */
    return 0;
}