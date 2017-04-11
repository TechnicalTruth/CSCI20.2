//Name: Juan Lemus
//Lab Description:
//Date: 3/2/17

#include <iostream>
#include <string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;


class BOOK {
	public:
	void setName(string N){
	name = N;
}
	void setAuthor(string A){
	author = A;
}
	void setPubYear(int Y){
	year = Y;
}	
	string getName(){
	return name;
}
	string getAuthor(){
	return author;
}
	int getPubYear(){
	return year;
}
	void print(){

	cout << "***********************************************************" << endl;
	cout << "*Book Title: " << getName() << endl;
	cout << "*Author: " << getAuthor() << endl;
	cout << "*Publication Year: " << getPubYear() << endl;
	cout << "***********************************************************" << endl;
	cout << endl << endl;
	}


	private:
	
	string name;
	string author;
	int year;
	
};


int main(){
    
    string N;
    string A;
    int Y;
    
    
	BOOK userBook1; 
	BOOK userBook2;
	BOOK userBook3;
	BOOK userBook4;
	BOOK userBook5;


	//Book 1; getlines used to take full book names.
	cout << "Welcome, today you will be inputting 5 different books into our archives!" << endl;
	cout << "Please enter the name of a book of your choice: ";
	getline(cin, N);
	cout << "Please enter the author of this book: ";
	getline(cin, A);
	cout << "Please enter the year this book was published: ";
    cin >> Y;
    
    userBook1.setName(N);
    userBook1.setAuthor(A);
	userBook1.setPubYear(Y);


	//Book2	
	cin.clear();
	cin.ignore();
	cout << "Thank you, we will now input information for the second book" << endl;
	cout << "Please enter the name of a book of your choice: ";
	getline(cin, N);
	cout << "Please enter the author of this book: ";
	getline(cin, A);
	cout << "Please enter the year that it was published on: ";
	cin >> Y;
	
	userBook2.setName(N);
	userBook2.setAuthor(A);
	userBook2.setPubYear(Y);


	//Book 3
	cin.clear();
	cin.ignore();
	cout << "Thank you, now we will move on to the third book you wish to describe." << endl;
	cout << "Please enter the name of your desired book: ";
	getline(cin, N);
	cout << "Please enter the author of this publication: ";
	getline(cin, A);
	cout << "Please enter the publication year for this book: ";
	cin >> Y;
	
	userBook3.setName(N);
	userBook3.setAuthor(A);
	userBook3.setPubYear(Y);


	//Book 4
	cin.clear();
	cin.ignore();
	cout << "Awesome!! You are almost finished with this program! Two more to go" << endl;
	cout << "Please enter the book's name: ";
	getline(cin, N);
	cout << "Please enter the author of this book: ";
	getline(cin, A);
	cout << "Please enter this books publication year: ";
	cin >> Y;
	
	userBook4.setName(N);
	userBook4.setAuthor(A);
	userBook4.setPubYear(Y);



	//Book 5
	cin.clear();
	cin.ignore();
	cout << "Merci, You are one book away from being finished! Lets finish strong!" << endl;
	cout << "Please enter the book's name: ";
	getline(cin, N);
	cout << "Please enter the Author of this book: ";
	getline(cin, A);
	cout << "Finally enter its publication year: "; 
	cin >> Y;
	
	userBook5.setName(N);
	userBook5.setAuthor(A);
	userBook5.setPubYear(Y);

	cin.clear();
	cin.ignore();


	userBook1.print();
	userBook2.print();
	userBook3.print();
	userBook4.print();
	userBook5.print();
	return 0;
}