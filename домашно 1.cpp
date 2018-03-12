#include <iostream>

using namespace std;

int main()
{
    /**
    include <iostream.h>
int main ()
{ cout >>”a,b = ”;
 cout << ”the product of “<< a << “ and ” << b << “is: ” << a*b < “\n”
 cin << a,b;
if (!cin)
{cout<<”error. bad input! \n”;
return 1;
}
return 0;
}
     */
     int a,b;
     cout << "a,b = ";
     cin >> a >> b;
    cout << "the product of "<< a << "and" << b << "is: " << a*b << "\n";
    if (!cin) {cout << "error ";
    return 1 ;}
    return 0;
}
