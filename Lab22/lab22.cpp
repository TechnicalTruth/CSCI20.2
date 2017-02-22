//Name: Juan Lemus
//Lab Description: 
//Date: 2/21/17

#include <iostream>
#include <cstdlib>  //Enables use of rand()
#include <ctime>    //Enables use of time()

using std :: cout;
using std :: cin;
using std :: endl;

int rndmNum (){
    
    srand(time(0));
    
    cout << "Your random number is: " << ((rand() % 101) + 1);
}

int main(){
    
 rndmNum();
 
    return 0;
}