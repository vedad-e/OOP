#include <iostream>
#include <vector>
#include <functional>

struct radnik{
  std::string ime;
  double plata;
};

typedef std::function <radnik(radnik)> fja;
fja lambda = [](radnik a){
  a.plata = a.plata + 10.0;
  return a;
};

void povecaj (std::vector<radnik>& niz1, fja func){
  for(auto& e : niz1){
    e=func(e);
  }

  for(auto e : niz1)
    std::cout << e.plata << std::endl;
}

int main(void)
{
  radnik prvi;
  std::vector<radnik> dnevnik;
  std::cout << "Unesi ime i platu za radnika1" << std::endl;
  std::cin >> prvi.ime;
  std::cin >> prvi.plata;
  dnevnik.push_back(prvi);

  povecaj(dnevnik, lambda);

  return 0;
}
