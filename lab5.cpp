#include<iostream>
using namespace std;
struct player{
    string name;
    int age ;
    int id;
    string game_name;
};

void display(player s[],int n){
    for(int i=0;i<n;i++){
        cout<<"Details of player number "<<i+1<<"..."<<endl;
            cout<<"Player name = ";
            cout<<s[i].name<<endl;
            cout<<"Player age = ";
            cout<<s[i].age<<endl;
            cout<<"Player ID = ";
            cout<<s[i].id<<endl;
            cout<<"Game name = ";
            cout<<s[i].game_name<<endl;
            cout<<endl;
    }
}

void searching(player s[], int n,string input){
    for(int i=0;i<n;i++){
        if(s[i].game_name==input){
            cout<<"Player number "<<i+1<<"..."<<endl;
            cout<<"Player name = ";
            cout<<s[i].name<<endl;
            cout<<"Player age = ";
            cout<<s[i].age<<endl;
            cout<<"Player ID = ";
            cout<<s[i].id<<endl;
            cout<<"Game name = ";
            cout<<s[i].game_name<<endl;
            cout<<endl;
        }
    }
}

void younger_details(player s[],int younger,int n ){
     for(int i=0;i<n;i++){
        if(s[i].age==younger){   
            cout<<"Details of younger player number "<<i+1<<"..."<<endl;
            cout<<"Player name = ";
            cout<<s[i].name<<endl;
            cout<<"Player age = ";
            cout<<s[i].age<<endl;
            cout<<"Player ID = ";
            cout<<s[i].id<<endl;
            cout<<"Game name = ";
            cout<<s[i].game_name<<endl;
            cout<<endl;
        }
    }
}

int main(){
    cout<<"How many player do you want = ";
    int n;
    cin>>n;
    player s[n];
    int arr_age[n];
    string arr_game[n];

    for(int i=0;i<n;i++){
        cout<<"Enter player name = ";
        cin>>s[i].name;     
        cout<<"Enter player age = ";
        cin>>s[i].age;
        cout<<"Enter player ID = ";
        cin>>s[i].id;
        cout<<"Enter game name = ";
        cin>>s[i].game_name;
        cout<<endl;
        arr_age[i]=s[i].age;
        arr_game[i]=s[i].game_name;
    }
    cout<<endl;
    cout<<"Players details..."<<endl;
    display(s,n);
    
    cout<<endl;
    string input;
    cout<<"Searching player info..."<<endl;
    cout<<"Enter game name = ";
    cin>>input;
    searching(s,n,input);

    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            if(arr_age[i]>arr_age[j]){
                int temp = arr_age[j];
                arr_age[j]=arr_age[i];
                arr_age[i]=temp;
            }
        }
    }
    int younger = arr_age[0];
    cout<<"The youngest player details : "<<endl;
    younger_details(s,younger,n);

    cout<<endl;
    string game;
    cout<<"Enter a name of game = ";
    cin>>game;
    cout<<endl;
    int count=0;
    cout<<"The number of players participating in a specific game : ";
    for(int i=0;i<n;i++){
        if(s[i].game_name==game){
            count++;
        }
    }
    cout<<count;



}
