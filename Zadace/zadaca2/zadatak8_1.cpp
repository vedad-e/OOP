// Napisati program koji od korisnika ocekuje unos dva cijela broja
// te ih dijeli
// Dijeljenje sa nulom nije dozvoljeno, te unos bilo kojeg karaktera
// koji nije cijeli broj je zabranjen.

#include <iostream>

int main(void)
{
  int broj1, broj2;
  char operacija;
  std::cin >> broj1;
  std::cin >> broj2;
  std::cin >> operacija;

  if((broj1 >= '0' && broj1 <= '9') || (broj2 >= '0' && broj2 <= '9')) 
    std::cout << broj1+broj2 << std::endl;
  else
    std::cout << "Niste unijeli validne brojeve" << std::endl;

  return 0;
}
