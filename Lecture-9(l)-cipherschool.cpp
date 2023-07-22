#include<iostream>
using namespace std;

// int compare(int a, int b){
//   int c;
//   if(a>b){
//   	c = a;
//   }
//   else{
//   	c = b;
//   }
   
//   now c will the maximum of a,b
//int compare(int a, int b)
//{ 
//   if(a>b)
//return a;
//}
//else{
//
//return b;
//}
//	if(a == 5){
//		return 1;
//	}
//	return 0;
//}
//
//int main(){
//	int a,b;
//	a=1,b=5;
//	cout<<compare(a,b);
//	return 0;
//}

int sum(int a,int b){
	return a+b;
}

int main(){
	int a,b;
	a=1,b=5;
	int c;
	c = sum(a,b);
	cout<<c;
	return 0;
}

