#include <iostream>

int main(void)
{
  int br_kartice;
  int pin;
  int pokusaji = 0;

  do{
    std::cout << "Unesite broj kartice: " << std::endl;
    std::cin >> br_kartice;

    if(br_kartice = true){
      std::cout << "Unesite pin: " << std::endl;
      std::cin >> pin;
      if(pin != 1234){
        std::cout << "Pogresan pin." << std::endl;
      } 
      else
        std::cout << "Dobrodosli u bankomat !" << std::endl;
    }
    ++pokusaji; 

} while(pokusaji < 3);

return 0;
}

