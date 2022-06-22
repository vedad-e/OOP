#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<int> kontejner;

int main(void)
{
  kontejner k;
  int suma = 0;
  int proizvod = 1;
  

  for(int broj ; std::cin >> broj; k.push_back(broj)){
    suma+=broj;
    proizvod = proizvod * broj;
  }
  std::cout << '\n' << std::endl;

  // Ispis u obrnutom redoslijedu
  auto kriterij = [] (int a, int b){
    return a>b;
  };
  std::sort(std::begin(k), std::end(k), kriterij);
  
  for(auto element : k)
    std::cout << element << " ";
  std::cout << '\n' << std::endl;

  // Ispis najvece cifre u kontejneru
  auto najveca = k.front();
  std::cout << najveca << " ";
  std::cout << '\n' << std::endl;

  auto najmanja = k.back();
  std::cout << najmanja << " ";
  std::cout << '\n' << std::endl;

  std::cout << suma << " ";
  std::cout << '\n' << std::endl;
  
  std::cout << proizvod << " ";

  return 0;
}
