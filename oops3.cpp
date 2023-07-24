#include<iostream>
using namespace std;

class Coordinate
{

public:
float a;
float b;
public:
	
//	Coordinate operator+(Coordinate const & obj)
//{
//
//Coordinate z;
//z.a = this-›a + obj.a;
//z.b = this-›b + obj.b;
//return z;
//}
	
	void sqdistancefromcorodinate(float a)
{
float dist;
dist =(this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
cout<<dist;
}

void sqdistancefromcorodinate(float a,float b)
{
float dist;
dist =(this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
cout<<dist;
}
void sqdistancefromcorodinate(float a,float b,float c)
{
float dist;
dist =(this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
cout<<dist;
cout<<"the third function is used";
}
};
int main()
{
   Coordinate x;
   x.a = 3;
   x.b = 4;
   
   Coordinate y;
   y.a = 5;
   y.b = 6;
   
   Coordinate z;
 
//   z= x+y;
//   z= x-y;
//   cout <<"the coordinates after addition are "<<z.a<<" "<<z.b; 
   //x.sqdistancefromcorodinate(0,0);
   
   return 0;
   
}

//the base class is public
