#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){

stack<int> a;
a.push(5);
a.push(6);
a.push(7);
 cout<<a.top();
a.pop();
cout<<a.top()<<endl;

if (a.empty()==0){

cout<<"the stack is currenlty not empty ";
}
else{
cout<<"the stack is empty ";	
}
a.pop();
a.pop();
if (a.empty()==0){

cout<<"the stack is currenlty not empty ";
}
else{
cout<<"the stack is empty "	;
}

queue<int> b;
b.push(5);
b.push(6);
b.push(7);

cout<<b.front()<<endl;
a.pop();
cout<<b.back()<<endl;

}
