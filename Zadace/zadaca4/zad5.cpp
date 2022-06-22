#include <iostream>

class Bankomat{
  private:
    double podizanje;
    double stanje;
    double uplata;

  public:
    void set_stanje(double a){stanje = a;};

    void set_podizanje(double a){stanje = stanje-a;}

    void set_uplata(double a){stanje = stanje+a;}

    void ispisi() const{
    std::cout << stanje << std::endl;
    }

  private: 
};


int main(void)
{
  Bankomat atm1;
  double a;
  int b, izbor;

  std::cout << "Unesite broj kartice: " << std::endl;
  std::cin >> a;

  std::cout << "Unesite pin: " << std::endl;
  std::cin >> b;

  std::cout << "1. Podizanje novca" << '\n' <<
    "2.Uplata novca" << '\n' <<
    "3.Stanje" << '\n' <<
    std::endl;

  std::cout << "Odaberite opciju" << std::endl;
  std::cin >> izbor;

  switch(izbor){
    case 1:
      std::cout << "Unesite iznos koji zelite podici: " << std::endl;
      std::cin >> a;
      atm1.set_podizanje(a);
      break;
    
    case 2:
      std::cout << "Unesite iznos koji zelite uplatiti: " << std::endl;
      std::cin >> a;
      atm1.set_podizanje(a);
      break;

    case 3:
      atm1.ispisi();
      break;


    default:
      std::cout << "Nevalidan unos" << std::endl;
  }
 
  return 0;
}
