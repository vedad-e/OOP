#include <iostream>
#include <functional>

void ispisi (std::function<void(int)> funkcija){
  funkcija(2);
}

int main(void)
{
  ispisi([](int a){std::cout << a << std::endl;});
  return 0;
}
