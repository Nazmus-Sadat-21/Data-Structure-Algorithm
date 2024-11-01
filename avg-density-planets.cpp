#include <iostream>
using namespace std;
int main()
{
  double mass ,dia,sum,vol,x,totaldensity;

  cout<< "Calculate the avergae density of the planets :- "<<endl;

  for (int i=1;i<=8;i++)
  {
      cout<< "Planet no = "<< i;
      cin >> mass>> dia;

      vol= (4.0/3)*3.1416*(dia*dia*dia);
      double density = mass/vol;

      double totaldensity = totaldensity + density;


  }


  double avgdensity = totaldensity/8;


  cout<< "The avg density of the planets = "<< avgdensity;

    return 0 ;
}
