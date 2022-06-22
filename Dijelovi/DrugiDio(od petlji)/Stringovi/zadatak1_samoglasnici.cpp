#include <iostream>

int main(void)
{
  int sam=0, sug=0;
  int slovoA = 0;
  std::string recenica;
  std::cout << "Unesite string: " << std::endl;
  getline(std::cin, recenica);

  for(int i=0; i < recenica.length(); ++i){
    if(recenica[i] == 'a'){ 

    ++slovoA;
    }

  }

  std::cout << slovoA << std::endl;
  return 0;
}
