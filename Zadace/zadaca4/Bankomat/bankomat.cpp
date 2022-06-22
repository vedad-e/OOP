#include <iostream>
#include <vector>

#define PROVJERA_STANJA 1

struct Korisnik{
  std::string brojKartice_;
  int pin_;
  double stanje;
};

struct Bankomat{
  std::vector<Korisnik> bazaPodataka{ {"12345", 0000, 1000}, {"98765", 1234, 0} };

  Korisnik& autentifikacija(){
    std::string brojKartice;
    int pin;
    int brPokusaja = 0;

    while(true){
    do{
      std::cout << "Unesite broj kartice: " << std::endl;
      std::cin >> brojKartice;
      std::cout << "Unesite pin: " << std::endl;
      std::cin >> pin;

      for(auto it=bazaPodataka.begin(); it != bazaPodataka.end(); ++it){
        if(it->brojKartice_ == brojKartice && it->pin_ == pin){
          std::cout << "Dobrodosli" << '\n' << std::endl;
          return *it;
        }
        else{
         std::cout << "Neuspjela autentifikacija, pokusajte ponovo." << std::endl;
          brPokusaja++;
          continue;
        }
      }
    } while (brPokusaja < 3);
    std::cout << "Unijeli ste pogresan pin 3 puta" << std::endl; 
    }
  } 

  void provjeraStanja(Korisnik &k){
    if( (k.stanje - PROVJERA_STANJA) < 0 ){
      std::cout << "Nedovoljno sredstava" << std::endl;
    }
    else
      k.stanje -= PROVJERA_STANJA;
  }



};
