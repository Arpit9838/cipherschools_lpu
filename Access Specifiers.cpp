#include<iostream>
using namespace std;

class Student{
	public:
		//what is public ??
		string name;
		int attendance;
		float total_marks;
		
		void calculate_percentage(){
			cout<<total_marks<<"%";
		}
};

//you are making a software for a bank
class bank_client{
	private:
		int credit_no;
		int cvv;
		string password;
	
	public:
		string name;
		string user_name;
	
	//we use public function to set private data
	
	// Private members are accessbile inside class AND ONLY INSIDE THE CLASS
	
	//****to access stuff of an object you definetly need a public element, as private element of an object are always inacessible	
		void set_credit_card_no(int number){
			credit_no = number;
			
		}
		
		int get_credit_card_no(){
			cout<<"credit card number is "<<credit_no;
			return credit_no;
		}
		
		void set_alltthestuffatonce (int number,  int User_name, int pass)
{
credit_no = number;
name = name;
password = pass;
}
};

//We use get functions to get the data

// We use set functions to se tthe data

int main(){
//	Student a,b,c;
//	student is the class
// and a,b,c are the objects of that template
//	a.name = "rohit";
//	a.attendance = 90;
//	a.total_marks = 69;
//	
//	a.calculate_percentage();

	bank_client a,b,c;
//	a.name = "rohit";
//	a.password = "enjoyc++";
//	a.cvv=788;
//	a.credit_no = 1245875;
	
//	cout<<"The password of rohit is: "<<a.password;
	
	a.set_credit_card_no(124879);
	a.get_credit_card_no();
	
	return 0;
}
