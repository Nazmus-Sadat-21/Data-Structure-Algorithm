#include<iostream>
using namespace std;
struct Student{
    int id;
    int credit;
    float cgpa;
};
void HighCGPA(Student st[], int num)
{
    cout<<"CGPA above 3.75"<<endl;
    for(int i=0;i<num;i++)
    {
        if(st[i].cgpa>3.75)
            cout<<"ID: "<<st[i].id<<" CGPA: "<<st[i].cgpa<<endl;
    }
}
void CreditCompleted(Student st[], int num)
{
    cout<<"Credit completed above 50"<<endl;
    for(int i=0;i<num;i++)
    {
        if(st[i].credit>50)
            cout<<"ID: "<<st[i].id<<" CC: "<<st[i].credit<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of students ";
    cin>>n;
    Student s[n];
    cout<<"ADD Student Info: "<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<"Enter ID ";
        cin>>s[i].id;
        cout<<"Enter credit completed ";
        cin>>s[i].credit;
        cout<<"Enter CGPA ";
        cin>>s[i].cgpa;
    }
    cout<<"ALL Students Info"<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<"Student "<<i+1<<": ID= "<<s[i].id<<" CC= "<<s[i].credit<<" CGPA= "<<s[i].cgpa<<endl;

    }
    cout<<endl;
    HighCGPA(s,n);
    cout<<endl;
    CreditCompleted(s,n);

}
