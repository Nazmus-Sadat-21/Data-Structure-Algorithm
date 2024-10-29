#include<iostream>
using namespace std;

void student(string name , int roll,double cgpa){
  cout<<"Name = "<<name<<endl;
  cout<<"ID   = "<<roll<<endl;
  cout<<"CGPA = "<<cgpa<<endl;
}

int main(){
   student("Nazmus Sadat",535343,3.51);
   student("Jabir Ahmed",53549,3.44);
}