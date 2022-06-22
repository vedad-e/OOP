#include <iostream>

int main(void)
{
  std::string prvi,drugi;
  std::cin >> prvi;
  std::cin >> drugi;
  int duzina=0;

  if(prvi.size() != drugi.size()){
    std::cout << "Stringovi moraju biti iste duzine" << std::endl;
    exit(0);
  }

  for(int i=0; prvi[i]!=0; ++i)
    if(prvi[i] != drugi[i])
      ++duzina;
  std::cout << "Hammingova distanca je: " << duzina << std::endl;
  return 0;
}
