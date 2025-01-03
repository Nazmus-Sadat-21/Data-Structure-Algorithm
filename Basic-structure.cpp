#include<iostream>
using namespace std;
struct student
{
    // string name;
    // double cg;
    // string dept;

    void display(string name,double cg,string dept){
    cout<<"Name = "<<name<<endl;
    cout<<"CGPA = "<<cg<<endl;
    cout<<"Department = "<<dept<<endl;
}

};
void display(string name,double cg,string dept){
    cout<<"Name = "<<name<<endl;
    cout<<"CGPA = "<<cg<<endl;
    cout<<"Department = "<<dept<<endl;


    
}

int main(){
     student s1,s2;
     s1.display("Nazmus Sadat",3.51,"CSE");
     s2.display("Jabir Ahmed",3.42,"CSE");
}
