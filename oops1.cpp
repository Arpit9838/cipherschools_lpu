#include<iostream>
using namespace std;
//class Student
//{
//
//private:
//int marks;
//int attendence;
//string name;
//public:
//void displaymatks()
//{
//cout <<marks;
//}
//};
//int main (){
//
//int marks;
//int attendence;
//string name;
//}
// The vehicle is a base class

class Vehicle{
//	private:
public:
int number_typers;
string name;
int capacity;
int milegage;
 
 void calculatemileage()
{
cout<<"The mileage is "<<milegage;
}
 
};
// Now I will inherit the features of the base class into the derived classes
class  schoolBus:
 public Vehicle
 {

string school_name;
int number_holidays;
public:

void printnameofschool(){

cout<< "The name of the truck is "<<name;
}
};

class Car:public Vehicle
{
// No member named milage
// No member function named calculatemilage

int number_airbags;
int ac_consumption;
public:

};

int main(){
	Car a;
	a.milegage =50;
	a.calculatemileage();
}
