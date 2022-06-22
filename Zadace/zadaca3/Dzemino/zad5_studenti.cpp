#include<iostream>
#include<list>

struct Studenti{
  std::string ime;
  int godine;
  int index;
};

void unos(std::list<Studenti>& d, Studenti& koji){
  std::cin >> koji.ime;
  std::cin >> koji.godine;
  std::cin >> koji.index;

  d.push_back(koji);
}

void ispis(std::list<Studenti>& i){
  for(auto e : i)
    std::cout << e.ime << " " << e.godine << " " << e.index << std::endl;
}

auto kriterij = [](Studenti& a, Studenti& b){
    return a.index < b.index;
};

int main(void)
{
  Studenti prvi;
  Studenti drugi;
  std::list<Studenti> dnevnik;

  unos(dnevnik, prvi);
  unos(dnevnik, drugi);

  dnevnik.sort(kriterij);

  ispis(dnevnik);

  return 0;
}
