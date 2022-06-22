#include <iostream>

auto foo(){
  int k=3;
  int y=5;
  auto bar = [y,k] (double a){
    return a+y+k;
  };
  return bar;
}

int main(void)
{
  auto funkcija = foo();
  auto tar = funkcija (2);
  std::cout << tar << std::endl;

  return 0;
}
