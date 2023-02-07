#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void ispisi (std::vector<std::string>& prvi, std::istream& potok){
  for(auto const& element : prvi)
    std::cout << element << std::endl;
}

void dodaj (std::string rijec, std::vector<std::string>& prvi){
  prvi.push_back(rijec);
}

void kopiraj (std::vector<std::string>& prvi, std::vector<std::string>& drugi){
  drugi.erase(drugi.begin(), drugi.end());
  for(int i=0; i<prvi.size(); ++i){
    drugi.push_back(prvi[i]); 
  }
}

void izvrsi (std::vector<std::string>& prvi, 
    std::function<int(std::string)> lambda = [] (std::string a){return a.size();}){
  for(int i=0; i<prvi.size(); ++i){
    lambda(prvi[i]);
  }
}

void obrisi (std::vector<std::string>& prvi){
  prvi.erase(prvi.begin(), prvi.end());
}

void obrisiRijec (std::vector<std::string>& prvi, std::string rijec){
  prvi.push_back(rijec);
  prvi.erase(prvi.end()-1);
}

void sortiraj (std::vector<std::string>& prvi,
    std::function<bool(std::string a, std::string b)> kriterij = [] (std::string a, std::string b){return a.size() > b.size();}){
  std::sort(prvi.begin(), prvi.end(), kriterij);
}

void dodajVektor(std::vector<std::string>& prvi, std::vector<std::string>& drugi){
  for(int i=0; i<prvi.size(); ++i){
    drugi.push_back(prvi[i]);
  }
}

void obrisiIsteRijeci(std::vector<std::string>& prvi, std::vector<std::string>& drugi){
  auto end = prvi.end();
  for(auto it = prvi.begin(); it != prvi.end(); ++it){
    end = std::remove(it+1, end, *it);
  }
  prvi.erase(end, prvi.end());
}

void izvrsiNPuta(std::vector<std::string>& prvi, std::function<void(std::string&)> lambda, int a){
  for(int i=0; i<a; ++i){
  for(int i=0; i<prvi.size(); ++i){
    lambda(prvi[i]);}
  }
}

std::vector<std::string> baza1 {"emir", "ado", "meliha"};
std::vector<std::string> baza2 {"gumica"};

int main(void)
{
  izvrsiNPuta(baza1, [](std::string& rijec){rijec[0]++;}, 3);

  ispisi(baza1, std::cin);
  std::cout << '\n' << std::endl;
  ispisi(baza2, std::cin);
  return 0;
}
