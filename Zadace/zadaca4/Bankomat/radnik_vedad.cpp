#include <iostream>
#include <vector>

#define PDV 20
#define GODINE_ZA_PENZIJU 60


struct Radnik{

  std::string ime;
  int godine;
  double plata;

  std::istream& ucitaj(std::istream & ulaz){
    std::cout << "Unesite ime, godine i platu: " << std::endl;
    ulaz >> ime >> godine >> plata;
    return ulaz;
  }

  void povecajPlatu(){
    double iznos;
    std::cout << "Unesite iznos plate: " << std::endl;
    std::cin >> iznos;

    plata += iznos - PDV;
    std::cout << "Plata sada iznosi: " << plata << std::endl;
  }

  void smanjiPlatu(){
    double iznos;
    std::cout << "Unesite iznos za koji se smanjuje plata: " << std::endl;
    std::cin >> iznos;

    if( (plata - iznos) < 0){
      plata = 0;
    }
    else{
      plata -= iznos;
    }
    std::cout << "Plata sada iznosi: " << plata << std::endl;
  }

  void godinaDoPenzije(){
    std::cout << "Godina do penzije" << std::endl;
    std::cout << (GODINE_ZA_PENZIJU - godine) << std::endl;
  }



};

int main(void){
  Radnik prvi;
  std::vector<Radnik> baza;

  prvi.ucitaj(std::cin);
  prvi.povecajPlatu();
  prvi.godinaDoPenzije();

  baza.push_back(prvi);

  for(auto e : baza){
    std::cout << e.ime << " " << e.godine << " " << e.plata <<  std::endl;
  }

  
  return 0;
}
