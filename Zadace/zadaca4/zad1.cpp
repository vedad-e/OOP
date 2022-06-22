#include <iostream>
#include <list>
#include <algorithm>

int& funkcija (std::list<int>& lista, int broj){
  if(broj >= lista.size() || broj <0)
    throw std::logic_error("Iznimka");
  auto pocetak = lista.begin();
  for( ; broj > 0; --broj, ++pocetak);
  return *pocetak;
}

int main(void)
{
  std::list<int> lista;
  for(int a; std::cin >> a; lista.push_back(a)){}
  funkcija(lista, 1);
  lista.sort();

    std::cout << lista.front() << std::endl;
    std::cout << lista.back() << std::endl;
  return 0;
}
