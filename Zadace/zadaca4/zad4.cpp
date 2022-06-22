#include <iostream>
#include <functional>
#include <map>
#include <list>

  auto kriterij = [](int& a, int& b){
    return a>b;
  };

template<typename A>
void funkcija (std::map<A, std::list<A>>& mapa, std::function<bool(int& a, int& b)> lambda, A varijabla){
  if(mapa.find(varijabla) == mapa.end()){
    mapa[varijabla];
  }
  else{
    std::list<A>& c = mapa[varijabla];
    c.sort(lambda);
  }

}


int main(void)
{
  std::list<int> lista1{4,5};
  std::list<int> lista2{9,10, 11};
  std::list<int> lista3{23,99,74,93};
  std::map<int, std::list<int>> kontejner{ {1, lista1}, {2, lista2}, {3,lista3} };

  funkcija(kontejner, kriterij, 1); 

  for(auto it=begin(kontejner); it != end(kontejner); ++it){
    std::cout << it->first << std::endl;
  for(auto e : it->second){
    std::cout << e << std::endl;
  }
  std::cout <<std::endl;
  }


  return 0;
}
