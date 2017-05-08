//Name: Juan Lemus
/*Lab Description: This lab is meant to take in a set of values, add them up, 
find the min and max along with giving the sum of the values when added together.
In addition is should provide you with the amount of even and odd entries. 
*/
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

class ArrayTools{
   public:
    
    ArrayTools(int myArray[], int size_ = 10){
        
        SIZE = size_;
        for(int i = 0; i < SIZE; i++){
            myArray[i] = myArray_[i];
        }
        
    }
    
    int Find_min(int valOne, int valTwo){
        minVal = myArray_[valOne];
        
        for(i = valOne; i < valTwo; ++i){
            if(myArray_[i] < minVal){
                minVal = myArray_[i];
            }
        }
        return minVal;
    }
    int Find_max(int valOne, int valTwo){
        
        maxVal = myArray_[valOne];
        
        for(i = valOne; i < valTwo; ++i){
            if(myArray_[i] > maxVal){
                maxVal = myArray_[i];
            }
        }
        return maxVal;
    }
    int Find_sum(){
        sumVal = 0;
        for(i = 0; i < SIZE; ++i){
            sumVal = sumVal + myArray_[i];
        }
        return sumVal;
    }
    int Num_even(int valOne, int valTwo){
        evnCnt = 0;
        for(i = valOne; i < valTwo; ++i){
            if (myArray_[i] % 2 == 0){
                ++evnCnt;
            }
        }
        return evnCnt;
    }
    int Num_odd(int valOne, int valTwo){
        oddCnt = 0;
        for(i = valOne; i < valTwo; ++i){
            if(myArray_[i] % 2 != 0){
                ++oddCnt;
            }
        }
        return oddCnt;
    }
    int Search(int searchNum){
        for(i = 0; i < SIZE; i++ ){
            if(myArray_[i] == searchNum){
                return i;
            }
        }
    }
    int Is_sorted(){
        for(i = 0; i < SIZE; ++i){
          if(myArray_[i] > myArray_[ i + 1]){
              cout << "Is not sorted." << endl;
              
          }
          else{
              cout << "Is sorted." << endl;
          }
    }
}

    void Print(){
       
      cout << "The values in your array are: ";
      for( i = 0; i < 10; i++){
          cout << myArray_[i] << ", ";
      }
    }
    
    private: 
    
    int myArray_[];
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
    const int size_ = 10;
    int myArray[size_];
    int i = 0;
    
    cout << "Enter your values(Must be greater than -1): ";
    cin >> myArray[i];
    
    while( i < size_ && myArray[i] != -1){
        
        i++;
        cin >> myArray[i];
        
    }
    ArrayTools a(myArray, i);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10: "<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}