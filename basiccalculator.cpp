#include <iostream>
using namespace std;
int main()
{
    float x;
    cin >> x;
    char ch;
    cin >> ch;
    float y;
    cin >> y;
    if (ch == '+')
    {
        cout << x + y  ;
    }
    else if (ch == '-')
    {
        cout << x - y  ;
    }
    else if (ch == '*')
    {
        cout << x * y  ;
    }
    else if (ch == '/')
    {
        cout << x / y  ;
    }
   
     
  else{
        cout << "the operation is invalid";
    }
}
// this is by if else we can also use switch here