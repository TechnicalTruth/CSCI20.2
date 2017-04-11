//Name: Juan Lemus
//Temp Conversions
//3/9/17

#include <iostream>
#include "lab9.cpp"

using std :: cin;
using std :: cout;
using std :: endl;


 class TemperatureConverter{
     public:
     
 //sets kelvin value to 0
        int TeperatureConverter(int kelvin_){
            kelvin_ = 0;
        }
        
//kelvin stays the same
       void SetTempFromKelvin(double kelvin_){
           kelvin_;
           
        }
// Celsius to kelvin
        void SetTempFromCelsius(double celsius){
            kelvin_ = celsius_ + 273.15; 
            
        }
//Fahrenheit to kelvin
        void SetTempFromFahrenheit(double fahrenheit){
            kelvin_ = (5 * (fahrenheit_ - 32)/9) + 273.15;
            
        }

//Get functions requried to pull informatino from class        
        double GetTempFromKelvin(){
            return kelvin_;
        }
        double GetTempAsCesius(){
            return kelvin_ - 273.15;
        }
        double GetTempAsFahrenheit(){
            return ((celsius_ * 9) / 5 + 32);
        }
//Print function to avoid redundancy
       void PrintTemperatures(double kelvin_, double celsius_, double fahrenheit_){
            
        }
        
     private:
        double kelvin_;
        double celsius_;
        double fahrenheit_;
 };
 
 int main(){
    
    /*if else statemtents not available to provide variability on what functions
    to use, hardcode seemed like the best option to test all requried functions*/
    
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
     
     return 0;
 }

/* Class named TemperatureConverter
    public:
        set function using kelvin (void)
        set funciton using celsius (void)
        set function using fahrenheit (void)
        
        get function using kelvin (double)
        get function using celsius (double)
        get function fahrenheit (double)
    
    private:
        kelvin_ (double)
        
        set function using kelvin defined;
        
        set function using celsius defined;
        
        set function using fahrenheit defined;
        
        get function using kelvin defined;
        
        get function using celsius defined;
        
        get function using fahrenheit defined;
        
        
        main (){
            Temp1 & Temp2 defined
            test overloaded constructors
            
            print temperatures for Temp1 & Temp2
            
            test mutator functions
            
            cout temp as kelvin
                print temperature 2 temps
                
            cout temp as celsius
                print temperature 2 temps
            
            cout temp as fahrenheit
                print temperature 2 temps
        }
        
        */