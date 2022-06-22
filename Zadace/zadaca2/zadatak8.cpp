#include <iostream>
#include <vector>


int main(void)
{
  double a,b;
  double d;
  char c;
  std::cout << "Unesite 2 cijela broja: " << std::endl;
  std::cin >> a;
  std::cin >> b;

  if(a&&b != std::isdigit(a&&b)){
    std::cout << "Nevalidan unos, " << 'a' << "ili" << 'b' << "nije broj" << std::endl;
    return 5;
    }

  std::cout << "Unesite operaciju koju zelite vrsiti: " << std::endl;
  std::cin >> c;

  if(c == '+'){
    d = a + b;
    std::cout << "Zbir 2 broja je: " << d << std::endl;
  }
  else if(c == '*'){
    d = a*b; 
    std::cout << "Proizvod 2 broja je: " << d << std::endl;
  }
  else if(c == '/'){
    if(b == 0){
      std::cout << "Dijeljenje sa nulom je nedefinisana operacija." << std::endl;
    return 1;
    }
    d = a/b;
    std::cout << "Kolicnik 2 broja je: " << d << std::endl;
  }
  return 0;
}
