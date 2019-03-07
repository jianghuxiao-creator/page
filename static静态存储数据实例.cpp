#include <iostream>
  using namespace std;
  
  int func(int n);
  
  int main()
  {    
      for(int i = 1; i <= 5; i++)
          cout << i << "! = " << func(i) << endl;
 
     return 0;
 }
 
 int func(int n)
 {
     static int f = 1;
     return f = f * n;
 }

