#include <iostream>
#include <vector>
#include <algorithm>

struct Radnik {
  std::string ime;
  std::string prezime;
  int godina_rodjenja;
  std::string mjesto;
  double plata;
};

void unos (std::vector<Radnik>& pisanje, Radnik& koji){
  std::cout << "Unesite ime, godinu rodjenja i platu za radnika: " << std::endl;
  std::cin >> koji.ime;
//  std::cin >> koji.prezime ;
  std::cin >> koji.godina_rodjenja;
//  std::cin >> koji.mjesto;
  std::cin >> koji.plata;
  pisanje.push_back(koji);
}

void ispis(std::vector<Radnik>& ispisi){
//  for(auto k=0; k<ispisi.size(); ++k)
//    std::cout << ispisi.at(k).ime << std::endl;
  for(auto e : ispisi){
    std::cout << e.ime << " " << e.godina_rodjenja << " " << e.plata << std::endl;
  }
}

bool sortiraj(const Radnik& a, const Radnik& b){
  if (a.plata != b.plata)
    return a.plata > b.plata;
  else if (a.ime != a.ime)
    return a.ime < a.ime;
  else
    return a.godina_rodjenja < b.godina_rodjenja;
}

int main(void)
{
  Radnik prvi;
  Radnik drugi;

  std::vector<Radnik> rokovnik;

  unos (rokovnik, prvi);
  unos (rokovnik, drugi);

  std::sort(begin(rokovnik), end(rokovnik), sortiraj);

  std::cout << '\n' << std::endl;
  ispis (rokovnik);
  
   return 0;
}
