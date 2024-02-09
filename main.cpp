//Linda Salazar, COSC 1436-57002, repl.it, accept input from the user while the value entered does not equal -1 (the exit value).
#include <cstdlib>
#include <iostream>
#include "Input_Validation_Extended.h"
#include <string>
#include<sstream>
using namespace std;

int main() 
{
  int counter = 0;
  double n = 0.0;
  while(n != -1.0)
    {
      n = validateDouble(n);
      if(n != -1.0)
        cout << "n * n = " << (n * n) << endl;
        cout << "n / n = " << (n / n) << endl;
        cout << "(n+3) / 5 = " << (n + n) << endl;
        cout << "[ ( (n+3) / 5 ) + ( (n+7) / 2 ) ] =" << (n + n) << endl;
        counter++;
    }
   cout << "\nThis program ran " << counter;
   cout << " times."; 

   cout << "\n " << endl;

return 0; 
}