#include <iostream>
#include <exception>


void dijeljenje(double a, double b){
  if(b==0)
    throw std::logic_error("Iznimka");
  else
    std::cout << a/b << std::endl;
}

int main(void)
{
  try{
    dijeljenje(4,2);
  }
  catch(std::logic_error a){
    std::cout << a.what() << std::endl;
  }
  return 0;
}
