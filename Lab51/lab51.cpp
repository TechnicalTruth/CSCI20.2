//Name: Juan Lemus
//Lab description: This lab is made for us to identify pointers.

#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {

//missing firstStr variable
    int nameLength = 10;
//namelength was assigned to '0' but never re-assigned to '10' so I did that
    char * name = new char[10]; //poiter called name is set to the new char array
// added '10' to new char[] due to it needing a primary expression to work


//POinter should be '*name' not '* name'
//sandard input and output
    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

/* Pointers should not be named like this, it can lead to issues in the future
it should be '*head' & '*tail' */
    char * head  = name; //Pointer 'head' created 
    char * tail = name; //Pointer 'tail' created
    
    nameLength = strlen(*name); // sets nameLength equal to the length of 'name' poniter

    cout << "Your word is " << firststr << endl;

    if (nameLength<10)
    {
//while the value of the 'head pointer' does not reach the null terminator
         while (*head != '\0') 
         {
                cout << *head; //output pointer value at the specified location
                head++; //iterating through the pointer
         }
     }
     else
     {
// if the input is longer than 10 characters this will display
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; 
     }

     cout << endl;

     tail = &name[strlen(name) - 1]; /* stores t he memory address of the last 
    character in 'name' to tail*/

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail; //outputs the value of the pointer at the desired location
                 tail--;    //iterating backwards through the location the pointer is pointing at
          }
     }
     cout << endl;

     head = name;  //memory location of *name is set to 'head'
     tail = &name[strlen(name) - 1]; //'tail' is set to the memory address of the second to last char in 'name'

     head++; //incremental operator
     tail--; //decremental operator

     if (*head == *tail) //if the value of pointers head & tail are equal
     {
         cout << "It is an palindrome!" << endl;    //idnetify it as a palindrone
     }
     else
     {
         cout << "It is not an palindrome" << endl; //If it doesnt match this is output.
     }

     return 0; 
}