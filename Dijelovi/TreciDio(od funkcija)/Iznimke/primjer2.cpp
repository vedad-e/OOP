#include <iostream>
#include <exception>

int godine(int x){
  //racunanje
  
  if(x<0)
    throw std::logic_error("Negativna vrijednost");
  return x;
}

int main(void)
{
  try{
    godine(1);
    throw std::string("Iznimka");
    std::cout << "Test" << std::endl;
  }

  catch(std::logic_error iznimka){
    std::cout << iznimka.what() << std::endl;
  }

  catch(...){
    std::cout << "Nemam pojma" << std::endl;
  }
  return 0;
}
