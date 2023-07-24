#include<iostream>
using namespace std;
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
		void set_credit_card_no(int credit_no){
			this->credit_no = credit_no;
		// The pointer to the object is inherently passed bya pointer called "this"	
		cout<<"the address of the object calling this function is "<<this<<endl;
		}
		
		int get_credit_card_no(){
			cout<<"credit card number is "<<credit_no;
			return credit_no;
		}
		
		
		void set_alltthestuffatonce (int credit_no,  int name, int password)
{
   this->credit_no = credit_no;
this->name = name;
this->password = password;
}

// Every object when we define a function, inherently passes the pointer of the object and the pointer is called !"this"
};

//We use get functions to get the data

// We use set functions to se tthe data

int main(){


	bank_client a,b,c;
	a.name = "rohit";
//	a.password = "enjoyc++";
//	a.cvv=788;
//	a.credit_no = 1245875;
	
//	cout<<"The password of rohit is: "<<a.password;
	
	a.set_credit_card_no(983593);
	// In this function, other than the parameters of the funcion, we also pass the pointer  of the object of this calss, ans the pointer is refferd to by "this
	//a.get_credit_card_no();
	cout<<"the address of this object is"<<&a<<endl;
a.credit_no;
	return 0;
}
