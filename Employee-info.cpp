#include<iostream>
using namespace std;

struct Employee_info{
     string name;
     int salary;
     string join;
     int age;
};

void display(Employee_info s[],int n){
    for(int i=0;i<n;i++){
        if(s[i].salary>5000 && s[i].age>40){
            cout<<"Name : "<<s[i].name<<endl;
            cout<<"Salary : "<<s[i].salary<<endl;
            cout<<"Join Date : "<<s[i].join<<endl;
            cout<<"Age : "<<s[i].age<<endl;
            cout<<endl;
            
        }
    }
}

int main(){

    cout<<"Enter a size : ";
    int n;
    cin>>n;

    Employee_info info[n];

    for(int i=0;i<n;i++){

        cout<<"Name : ";
        cin>>info[i].name;

        cout<<"Salaray : ";
        cin>>info[i].salary;

        cout<<"Join Date : ";
        cin>>info[i].join;

        cout<<"Age : ";
        cin>>info[i].age;

        cout<<endl;

    }

    cout<<"Recheck : "<<endl;
    display(info,n);
}
