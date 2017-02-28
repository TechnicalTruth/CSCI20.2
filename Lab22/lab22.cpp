//Name: Juan Lemus
/*Lab Description: This lab focuses on the use of funcitons to perform cetain actions
in htis case is coming up with "random" numbers */
//Date: 2/21/17

#include <iostream>
#include <cstdlib>  //Enables use of rand()
#include <ctime>    //Enables use of time()

using std :: cout;
using std :: cin;
using std :: endl;

void rndmNum();     //rndmNum function is declared

int main(){
    
 rndmNum();     //calls upon the rndmNum() funciton
 
    return 0;
}

void rndmNum (){        //rndmNum function is defined
    
    srand(time(0));
    
    cout << "Your random number is: " << ((rand() % 101) + 1);
    
    return;
}