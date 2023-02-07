#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void ispisi(std::vector<std::string>& a, std::ostream& potok){
  for(auto e:a)
    std::cout << e << std::endl;
} 

void dodaj(std::string a, std::vector<std::string>& prvi){
  prvi.push_back(a);
  for(auto e : prvi)
    std::cout << e << std::endl;
}

void kopiraj (std::vector<std::string> prvi, std::vector<std::string> drugi){
  drugi.erase(begin(drugi), end(drugi));

  for(int i=0; i<=prvi.size(); ++i){
    drugi.push_back(prvi[i]);
  }
}

void izvrsi (std::vector<std::string>& prvi, std::function<void(int)> lambda){
  for(int i=0; i<=prvi.size(); ++i){
    lambda(i);
  }
   for(auto e : prvi)
    std::cout << e << std::endl;
}

void obrisi (std::vector<std::string>& prvi){
  prvi.erase(prvi.begin(), prvi.end());
}

void obrisiRijec(std::vector<std::string>& prvi, std::string a){
  prvi.push_back(a);
  prvi.erase(prvi.end()-1);
}
auto lambda = [](std::string a, std::string b){return a.size() > b.size();};
void sortiraj (std::vector<std::string>& prvi, 
    std::function<bool(std::string, std::string)> ){
  std::sort(prvi.begin(), prvi.end(), lambda);
}

void dodajVektor (std::vector<std::string>& prvi, std::vector<std::string>& drugi){
  for(int i=0; i<prvi.size(); ++i){
    drugi.push_back(prvi[i]);
  }
}

void izvrsiNPuta (std::vector<std::string>& prvi, std::function<void(std::string)> lambda, int a){
  for(int i=0; i<=a; ++i){
    lambda(prvi[i]); 
  }
}



int main(void)
{
  std::vector<std::string> v1{"lampa", "mis", "laptop"};
  std::vector<std::string> v2{"vedad"};

  izvrsiNPuta(v1, [](std::string a){a[0]++;}, 3);

  
  return 0;
}
