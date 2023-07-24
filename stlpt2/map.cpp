#include<iostream>
#include<map>
using namespace std;
int main(){

 map<string, int> hash;
 hash["rohit"] = 1;
 hash["prgramming"] = 2;
 hash[ "redd "]=3;
 //cout‹<"The value of rohit in the hashtable is"<<hash["rohit"] ;
  
  for (auto j=hash.begin();j!=hash.end(); j++)
{
cout<<"the key will be "<<j->first<<"The value in the kwy will be "<<j->second<<endl;
}

}
