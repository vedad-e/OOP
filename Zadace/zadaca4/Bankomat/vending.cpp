//Programirati bazu studenata
#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

#define PROVJERA_STANJA 0.5
#define DIZANJE_NOVCA 1

struct Korisnik{
  std::string brKartice_;
  std::string pin_;
  double stanje;
};

struct Bankomat{
  std::vector<Korisnik> bazaKorisnika { {"12345", "0000", 1000}, {"98765", "1234", 50} };

  Korisnik &autentifikacija(){
    std::string brKartice;
    std::string pin;
    int brojPokusaja = 0;
   
    while(true){
    do{
      std::cout << "Unesite broj kartice: " << std::endl;
      std::cin >> brKartice;
      std::cout << "Unesite pin: " << std::endl;
      std::cin >> pin;

      for(auto it = bazaKorisnika.begin(); it != bazaKorisnika.end(); ++it){
        if(it->brKartice_ == brKartice && it->pin_ == pin){
          std::cout << "Dobrodosli !" << std::endl;
          return *it;
        }
        else
          std::cout << "Neuspjesna autentifikacija !" << std::endl;
          brojPokusaja++;
          continue;
      }
    } while(brojPokusaja < 3);
      std::cout << "Unijeli ste pogresan pin 3 puta" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    }
  } 

  void dizanjeNovca(Korisnik &k){
    double iznos;
    std::cout << "Upisite iznos koji zelite podici: " << std::endl;
    std::cin >> iznos;

      if( (k.stanje - iznos - DIZANJE_NOVCA) < 0 ){
        std::cout << "Nemate dovoljno sredstava" << std::endl;
        return; 
      }
      else{
        k.stanje -= iznos - DIZANJE_NOVCA;
      }
      std::cout << "Trenutno stanje racuna je: " << std::endl;
      std::cout << k.stanje << std::endl;
  }

  void provjeraStanja(Korisnik &k){
      if( (k.stanje - PROVJERA_STANJA) < 0){
        std::cout << "Nemate dovoljno sredstava !" << std::endl;
      }
      else{
        k.stanje -= PROVJERA_STANJA;
        std::cout << "Trenutno stanje racuna je: " << std::endl;
        std::cout << k.stanje << std::endl;
      }
  }

  void uplataNovca(Korisnik &k){
    double iznos;
    std::cout << "Unesite iznos koji zelite uplatiti: " << std::endl;
    std::cin >> iznos;
      if(iznos < 0){
        std::cout << "Unesite iznos veci od 0" << std::endl;
        return;
      }
      else{
        k.stanje += iznos;
      }
      std::cout << "Trenutno stanje racuna je: " << std::endl;
      std::cout << k.stanje << std::endl;
    }
};

int main(void){
  Bankomat atm;

  Korisnik prvi = atm.autentifikacija();

  atm.provjeraStanja(prvi);
 
  return 0;
}

