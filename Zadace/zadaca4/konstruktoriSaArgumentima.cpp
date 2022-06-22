#include <iostream>

class Auto{
  public:
    std::string brend;
    std::string model;
    int godiste;

    Auto(std::string a, std::string b, int c){
      brend = a;
      model = b;
      godiste = c;
    }
};

int main(void){
  Auto prvi{"BMW", "E90", 2011};

  std::cout << prvi.brend << " " << prvi.model << " " << prvi.godiste << std::endl;
  
  return 0;
}
