#include<iostream>
using namespace std;
 struct Person{ 	
	string Name; 
	Person *Child; 
};


int main(){
   
Person P, *C;
P.Name="Arif";
C = P.Child = new Person[2];
C[0].Name= "Sara";
C[0].Child = NULL;
C[1].Name= "Rahim";
C = C[1].Child = new Person;
C->Name, "Karim";
C->Child = NULL;


}
