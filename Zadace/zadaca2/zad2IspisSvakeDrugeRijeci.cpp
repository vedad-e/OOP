#include <iostream>

int main(void)
{
  std::string recenica;
  getline(std::cin, recenica);

  for(int i=0; i<recenica.length(); ++(++i)){
    recenica.erase(recenica.begin()+i);}
  
  std::cout << recenica << std::endl;
  return 0;
}
