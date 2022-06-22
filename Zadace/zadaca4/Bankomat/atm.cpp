#include <iostream>
#include <vector>

#define DIZANJE_NOVCA 1
#define PROVJERA_STANJA 0.5

struct Korisnik{
  std::string broj_kartice_;
  std::string pin_;
  double stanjeNaRacunu = 0;
};

class Bankomat{
  double stanje;
  double dizanje;
  double uplata;

  public:
    std::vector<Korisnik> bazaKorisnika { {"12345", "1234", 100}, 
      {"09876", "4321", 500}, {"56789", "0000"} };


    bool autentifikacija(){
      std::string brKartice = "";
      std::string pin = "";
      int brPokusaja = 0;

      do{
        std::cout << "Unesite broj kartice: " << std::endl;
        std::cin >> brKartice;
        std::cout << "Unesite pin: " << std::endl;
        std::cin >> pin;

        for(auto it = bazaKorisnika.begin(); it != bazaKorisnika.end(); it++){
          if(it->broj_kartice_ == brKartice && it->pin_ == pin){
            std::cout << "Uspjesna autentifikacija" << std::endl; 
            return true;
          }
          else{
            std::cout << "Neuspjesna autentifikacija" << std::endl;
            brPokusaja++;
            continue;
          }
        } 

    } while(brPokusaja < 3);
      std::cout << "Unijeli ste pogresan pin 3 puta." << std::endl;
      return false;
  }

    void dizanjeNovca(){
      double kolicina;
      std::cout << "Unesite kolicinu koju zelite podici: " << std::endl;
      std::cin >> kolicina;
      
      for(auto &Korisnik : bazaKorisnika){
        if((Korisnik.stanjeNaRacunu - kolicina - DIZANJE_NOVCA) < 0){
          std::cout << "Nemate dovoljno sredstava" << std::endl; 
          return;
        }
        Korisnik.stanjeNaRacunu -= kolicina + DIZANJE_NOVCA;
      }
    }

    void provjeraStanja(){
      for(auto &Korisnik : bazaKorisnika){
      if((Korisnik.stanjeNaRacunu - PROVJERA_STANJA) < 0){
        std::cout << "Nemate dovoljno sredstava" << std::endl;
        return;
      }
      Korisnik.stanjeNaRacunu -= PROVJERA_STANJA;
      std::cout << "Stanje na racunu iznosi: " << Korisnik.stanjeNaRacunu << std::endl;
      }
    }

    void uplataNovca(){
      for(auto &Korisnik : bazaKorisnika){
        double suma;
        std::cout << "Upisite iznos koji zelite uplatiti: " << std::endl;
        std::cin >> suma;
        if(suma < 0){
          throw std::string("Unesite vrijednost necu od 0 KM");
        }
        Korisnik.stanjeNaRacunu += suma;
      }
    }

   
};

int main(void)
{
  Bankomat atm;
  

  atm.provjeraStanja();

  for(auto &Korisnik : atm.bazaKorisnika){
    std::cout << Korisnik.broj_kartice_ << " " << Korisnik.pin_ << " " << Korisnik.stanjeNaRacunu << std::endl;
  }
  
  return 0;
}
