// Unositi rijeci u vektor, sortirati ih od najduze ka najkracom
// Prvoj rijeci promijeniti ime
// ispisati koliko ima rijeci u vektoru

#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<std::string> kontejner;

int main(void)
{
  kontejner k{"Vedad", "Ado"};

  k.at(0) = "Laptop";
  for(std::string rijec; std::cin >> rijec; k.push_back(rijec)){
  }

  auto kriterij = [] (std::string a, std::string b){
  return a.size()>b.size();
  };

  std::sort(std::begin(k), std::end(k), kriterij);

  for(auto element : k)
    std::cout << element << std::endl;

  return 0;
}
