#include <iostream>
#include <map>
#include <functional>
#include <list>

auto kriterij = [] (int& a, int&b){return a<b;};

template <typename T>
void funkcija (std::map<T, std::list<T>> mapa, std::function<bool(int& a, int& b)> lambda, T id){
  auto it = mapa.find(id);
  if(it != mapa.end()){
    mapa[id];
  }
  else{
    std::list<T>& a = mapa[id];
    a.sort(lambda);
  }
}


int main(void)
{
  std::list<int> lista1 {5,3, 24};
  std::list<int> lista2 {2,9};
  std::list<int> lista3 {21, 92, 33, 99};

  std::map<int, std::list<int>> kontejner { {1, lista1}, {2,lista2}, {3,lista3} };

  funkcija (kontejner, kriterij, 1);

  for(auto it=begin(kontejner); it != end(kontejner); ++it){
    std::cout << it->first << std::endl; 
  for(auto e : it->second){
    std::cout << e << std::endl;
  }
  std::cout << std::endl;
  }
 return 0;
}
