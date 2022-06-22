// Catchanje bilo kojeg throwa preko tri tacke ...
#include <iostream>
#include <exception>

int godine (int x){
// racunanje
  if (x<0)
    throw std::logic_error("Negativna vrijednost");
  return x;
}

int main(void)
{
  try{
    godine(1);
    std::cout << "Test" << std::endl;
  }
  catch(...){
    std::cout << "Negativan broj" << std::endl;
  }
  return 0;
}
