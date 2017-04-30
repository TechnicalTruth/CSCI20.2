//Name: Juan Lemus
/*Lab Description: 
*/
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

class ArrayTools{
   public:
   
    int myArray[];
    int Find_min(int valOne, int valTwo){
        for(i = 0; i < SIZE; ++i){
            if(myArray[i] < minVal){
                minVal = myArray[i];
            }
        }
        
    }
    int Find_max(int valOne, int valTwo){
        for(i = 0; i < SIZE; ++i){
            if(myArray[i] > maxVal){
                maxVal = myArray[i];
            }
        }
        
    }
    int Find_sum(){
        for(i = 0; i < SIZE; ++i){
            sumVal = sumVal + myArray[i];
        }
        
    }
    int Num_even(int valOne, int valTwo){
        evnCnt = 0;
        for(i = 0; i < SIZE; ++i){
            if (myArray[i] % 2 == 0){
                ++evnCnt;
            }
        }
    }
    int Num_odd(int valOne, int valTwo){
        oddCnt = 0;
        for(i = 0; i < SIZE; ++i){
            if(myArray[i] % 2 != 0){
                ++oddCnt;
            }
        }
        
    }
    int search(int userIn){
        
        return myArray[userIn];
    }
    int Is_stored(){
        for(i = 0; i < SIZE; ++i){
            cout << myArray[i] << endl;
        }
        
    }
    void print(){
       
       cout << "Min. Value: " << Find_min() << endl;
       cout << "Max. Value: " << Find_max() << endl;
       cout << "The sum of all Values: " << Find_sum() << endl;
       cout << "Amount of even numbers: " << Num_even() << endl;
       cout << "Amount of odd numbers: " << Num_odd() << endl;
       cout << "You searched: " << userIn << "; its value is: " << search() << endl;
       cout << Is_stored() << endl;
    }
    
    private: 
    int SIZE;
    int valOne;
    int valTwo;
    int minVal;
    int maxVal;
    int sumVal;
    int evnCnt;
    int oddCnt;
    int i = 0;
    int userIn;
};



int main(){
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        cin >> myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}