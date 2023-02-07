#include <iostream>
#include <vector>
#include <algorithm>


struct radnik{
  std::string ime;
  int godiste;
  double plata;
};

void unos(std::vector<radnik>& lista, radnik& koji){
  std::cout << "Unesi ime, godiste, platu" << std::endl;
  std::cin >> koji.ime;
  std::cin >> koji.godiste;
  std::cin >> koji.plata;

  lista.push_back(koji);
}  

void ispis(std::vector<radnik>& lista){
  for(auto e : lista){
    std::cout << e.ime << " " << e.godiste << " " << e.plata << std::endl;
  }
}

auto sortiraj = [] (radnik& a, radnik& b){
  if(a.plata != b.plata)
    return a.plata > b.plata;
  else if(a.ime != b.ime)
    return a.ime < b.ime;
  else
    return a.godiste < b.godiste;
};

int main(void)
{
  radnik prvi;
  radnik drugi;
  std::vector<radnik> lista;
  
  unos(lista, prvi);
  unos(lista, drugi);
 
  std::sort(lista.begin(), lista.end(), sortiraj);

   ispis(lista);
  return 0;
}
