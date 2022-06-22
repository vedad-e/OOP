#include <iostream>


int a = 30;
double b = 2.1;
int main(){
    { 
      int a = 50;
      a += 1;
      std::cout << a << '\n' << b <<std::endl;
    }
    std::cout << a < std::endl;
return 0;
}
