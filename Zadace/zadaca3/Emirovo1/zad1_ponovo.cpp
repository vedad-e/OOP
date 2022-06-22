#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

void svicarski_noz(int a){
  int b = pow(2,a);
  std::cout << b << std::endl;
}

void svicarski_noz (std::string a, std::string b){
  std::cout << a << std::endl;
  std::cout << b << std::endl;
}

void svicarski_noz (double a){
  int i=1;
  do{
    std::cout << a*i << std::endl;
    ++i;
  }
  while(i<=3);
}

void svicarski_noz (std::vector<int>& a){
  for (auto e : a)
    std::cout << e << std::endl;
}

std::string svicarski_noz(std::string a){
  std::reverse(a.begin(), a.end());
  return a;
}

int main(void)
{
  std::vector<int> niz{1,2,3};
  svicarski_noz(4);
  svicarski_noz("pozdrav","svima");
  svicarski_noz(3.14);
  svicarski_noz(niz);
  std::cout << svicarski_noz("pozdrav");
  return 0;
}
