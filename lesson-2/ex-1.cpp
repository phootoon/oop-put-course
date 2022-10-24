//
// Created by mrozb on 24.10.2022.
//
#include <iostream>

using namespace std;
class Sharpie{
public:
  string color;
  float tipsize;

  Sharpie(string x, float y)
  {
      cout<<endl<<"what color is your new sharpie ?"<<endl;
      cin >> color;
      cout<<endl<<"what tip size does it have ? " <<endl;
      cin  >> tipsize;
      cout << "\ngret your new " <<color<<" sharpie of a tip size: "<<tipsize<< " was added as an object " ;
  }
};
int main()
{

    Sharpie sharpie2();
}
