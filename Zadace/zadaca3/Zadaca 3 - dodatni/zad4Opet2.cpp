#include <iostream>
#include <list>
#include <functional>

template<typename T>
void ispisi(std::list<T>& l, std::istream& u){
  for(auto it = l.begin(); it != l.end(); ++it){
    std::cout << *it << std::endl;
  }
}

template<typename T>
void dodaj (T a, std::list<T>& l){
  l.push_back(a);
}

template<typename T>
void kopiraj(std::list<T>& p, std::list<T>& d){
  for(auto it=p.begin(); it!=p.end(); ++it){
    d.push_back(*it);
  }
  auto itb = p.begin();
  auto itk = p.end();
  auto i = p.erase(itb, itk);
}

auto lambda = [](std::string a, std::string b){return a.size() < b.size();};

template<typename T>
void sortiraj(std::list<T>& l, std::function<bool(T& a, T& b)> lambda){
  l.sort(lambda);
} 

template<typename T>
T min(std::list<T>& l){
  auto min_el = l.front();

  for(auto it = l.begin(); it != l.end(); ++it){
    if(*it < min_el)
      min_el = *it;
  }
  return min_el;
}



int main(void)
{
  std::list<std::string> lista1;
  std::list<std::string> lista2{"pingvin", "mis", "al"};


  dodaj<std::string>("abc", lista1);
  kopiraj(lista1, lista2);

  sortiraj<std::string>(lista2, lambda);

  auto min_el = min(lista2);
  std::cout << "Min: " << min_el << std::endl;

  std::cout << "Prvi: " << std::endl;
  ispisi(lista1, std::cin);
  std::cout << "Drugi: " << std::endl;
  ispisi(lista2, std::cin);

  


  return 0;
}
