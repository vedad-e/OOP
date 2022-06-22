#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

std::vector<std::string> baza1 {"vedad", "Pingvin", "ado"};
std::vector<std::string> baza2 {"vedad"};
 
void ispisi (std::vector<std::string> v1, std::istream& potok){
  for (auto e:v1)
    std::cout << e << std::endl;
}

void dodaj (std::string rijec, std::vector<std::string>& v2){
  v2.push_back(rijec);
}

void kopiraj (std::vector<std::string>& prvi, std::vector<std::string>& drugi){
  baza2.clear();
  for (int i=0; i<baza1.size(); i++){
    baza2.push_back(baza1[i]);
  }
}

//void obrisi (std::vector<std::string>& prvi){
//  prvi.clear();
//}

void obrisi (std::vector<std::string>& prvi){
 prvi.erase(prvi.begin(), prvi.end()); 
}
 
void obrisiRijec (std::vector<std::string>& prvi, std::string rijec){
  prvi.push_back(rijec);
  prvi.erase(prvi.end()-1);
}

void sortiraj (std::vector<std::string>& prvi, std::function<int(std::string, std::string)> kriterij = [](std::string a, std::string b) {return a.size() > b.size();} ){
  std::sort(std::begin(prvi), std::end(prvi), kriterij);
}
 
void dodajVektor(std::vector<std::string>&prvi, std::vector<std::string>&drugi){
  for(int i=0; i<baza1.size(); ++i){
    baza2.push_back(baza1[i]);
  }
}

// void obrisiIsteRijeci (std::vector<std::string>& prvi, std::vector<std::string>& drugi){
//  std::sort(prvi.begin(), prvi.end());
//  prvi.erase(std::unique(prvi.begin(), prvi.end()), prvi.end());
//}

void obrisiIsteRijeci(std::vector<std::string>& prvi, std::vector<std::string>& drugi){
  auto end = prvi.end();
  for(auto it = prvi.begin(); it != prvi.end(); ++it){
    end = std::remove(it+1, end, *it);
  }
  prvi.erase(end, prvi.end());
}

void izvrsiNPuta(std::vector<std::string>&prvi, std::function<void(std::string)> lambda, int broj){
  for(int i=0; i<=broj; ++i){
    lambda(prvi[i]);
  }

}


int main()
{
//  sortiraj (baza1, [](std::string a, std::string b){return a.size()<b.size();});
//  sortiraj(baza1);
//  izvrsiNPuta(baza1, [](std::string rijec){rijec[0]++;}, 3);
   for(auto const& elementi : baza1)
    std::cout << elementi << std::endl;

 
   std::cout << '\n' << std::endl;

  obrisiRijec(baza1, "laptop");
//  for(auto it = baza1.begin(); it != baza1.end(); ++it){
//    std::cout << *it << std::endl;
//  }

  for(auto const& elementi : baza1)
    std::cout << elementi << std::endl;

 
  return 0;
}
