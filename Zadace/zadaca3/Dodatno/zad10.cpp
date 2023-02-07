#include <iostream>
#include <vector>
#include <functional>

struct radnik{
  std::string ime;
  int plata;
};

void funkcija (std::vector<radnik>& a, std::function<radnik(radnik)> b){
  radnik R1;
  radnik R2;
  std::cout << "Unesite ime i platu radnika 1" << std::endl;
  std::cin >> R1.ime;
  std::cin >> R2.plata;

  std::cout << "Unesite ime i platu radnika 2" << std::endl;
  std::cin >> R2.ime;
  std::cin >> R2.plata;
  a.push_back(R1);
  a.push_back(R2);

  for(auto k=0; k<a.size(); ++k){
    b(a[k]);
  }

  for(auto k=0; k<a.size(); k++){
    std::cout << a[k].plata << std::endl;
  }



}

int main(void)
{
  std::vector<radnik> dnevnik;
  auto lambda = [] (radnik a){a.plata = a.plata + 20; return a;};
  funkcija (dnevnik, lambda);
  return 0;
}
