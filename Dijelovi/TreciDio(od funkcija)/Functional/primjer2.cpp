#include <iostream>
#include <functional>

typedef std::function<double(double)> Funkcija;

double foo(double a){
  return 5.0;
}

auto bar = [] (double a){
  return 11.0;
};

double izvod (Funkcija a, double x){
  return 25.2;
}

int main(void)
{
  std::function<double(double)> f=foo;
  auto l = f(8.5);
  f = bar;
  auto m = f(1000);

  auto rezultat_izvoda=izvod(f,2.0);

  std::cout << l << std::endl;
  std::cout << m << std::endl;
  std::cout << rezultat_izvoda << std::endl;
  return 0;
}
