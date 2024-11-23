// Suppose your ID is 24-58316-2. Use the middle part of your ID and draw the pattern as follows. [Hint Store the ID into an array. you can not use hard-coded value for iteration- use loop, array, and conditional statements]
 
// Output
 
// 12345
// 12345678
// 123
// 1
// 123456

#include <iostream>
using namespace std;
 
int main()
{
 
int size = 5;
    int id[size] ;
    cout<<"enter your id: "<<endl;
    for(int i=0;i<size;i++){
        cin>>id[i];
    }
 
   
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= id[i]; j++)
        {
            cout << j;
        }
        cout << endl;
    }
 
    return 0;
}
 
