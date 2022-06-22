// isti zad kao iz primjer1, samo sada insertujemo broj
// na pocetak vektora, i na kraju ispisujemo drugi element vektora

#include <iostream>
#include <vector>

int main(void)
{
  std::vector<int> niz{1,2,3};
  niz.insert (begin(niz)+1, 4);

  for(auto i = niz.begin() ; i != niz.end() ; ++i){
    std::cout << *i << std::endl;
  }
  std::cout << *(niz.begin()+1) << std::endl;
  return 0;
}
