#include <iostream>
using namespace std;
void maximum (int a, int b,int c)
{
    if (a<b && a<c)
    {
        cout<< a << " is the minimum"<< endl;
    }
    else if (b<c)
    {
        cout<< b<< " is the minimum"<< endl;

    }
    else
    {
        cout<< c<< " is the minimum"<< endl;
    }
}
int main()
{
    int x,y,z;
    cout<< "Enter three number = ";
    cin >>x>>y>>z;
    maximum(x,y,z);



    return 0 ;
}
