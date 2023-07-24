#include<iostream>
using namespace std;

// THe vehicle is a base class
class Vehicle
{
 public:
  int number_typers;
  string name;
  int capacity;
   int milegage;
   public:
   	

};

// Now I will inherit the features of the base class into the derived classes
class SchoolBus: public Vehicle
{
  string school_name;
int number_holidays;

public:
void printname ()
{
cout<<"The name of the school is "<<name;
}
};
class Car:public Vehicle // DErived class car has inherited all the data from the base class
{

 public:
      int number_airbags;
      int ac_consumption;
//      public:
//      void set_milage (int milage)
//	{
//	  
//      this->milegage = milage
//     }
     
//     void calculatemileage ()
//{
//cout<‹"The mileage is "<<milegage;
//}
  void printname(){
  	cout<<name;
  }

};

class SUV: public Car
{ 
  public:
  int four_wheel_drive;
};

int main()
{
    Car a;
    SUV c;
    SchoolBus b;
    c.name = " Suzuki";
    b.name ="Toyota";
    a.printname();
    b.printname();
    //a.set_milage  (50;
    //a.calculatemileage ();
}
