// ispis elemenata vektora preko iteratora
#include <iostream>
#include <vector>

int main(void)
{
  std::vector<int> niz{1,2,3};
  for (auto i = niz.begin() ; i != niz.end(); ++i){
    std::cout << *i << std::endl;
  }
  return 0;
}
