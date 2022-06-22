//Korisnik unosi cijele brojeve
//Potrebno je izracunati sumu unesenih brojeva
//Naci srednju vrijednost i median

#include <iostream>
#include <vector>

typedef std::vector<int> kontejner;

int main(void)
{
  kontejner k;
  double suma = 0;

  std::cout << "Unosite cijele brojeve:" << std::endl;

  for(int unos; std::cin >> unos; k.push_back(unos))
    suma += unos;

  std::cout << "Uneseni brojevi su: " << " " ;
  for(auto element : k)
    std::cout << element << '\n';

  std::cout << "Suma unesenih brojeva je: " << suma << std::endl;

  std::cout << "Srednja vrijednost je: " << suma / k.size() <<std::endl;

  auto median = k.size()%2 == 0 ? (k[k.size()] - k[k.size()-1] / 2) : (k[k.size()]/2);

  std::cout << "Median je: " << median << std::endl;

  return 0;
}
