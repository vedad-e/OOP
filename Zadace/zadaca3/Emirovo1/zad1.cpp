#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int svicarski_noz (int a){
  int rezultat = pow(2,a);
  return rezultat;
}

void svicarski_noz(double a){
  int i=1;
  do{
    std::cout << a*i << " ";
    ++i;
  }
  while(i<=3);
  }

void svicarski_noz (std::string a, std::string b){
  std::cout << a << " " << b << std::endl; 
}

void svicarski_noz (const std::vector<int>& niz){
  for(auto element : niz)
    std::cout << element << " ";
}

std::string svicarski_noz(std::string a){
  std::reverse(a.begin(), a.end());
  return a;
}

int main(void)
{
  std::vector<int> niz{1,2,3};
  std::cout << svicarski_noz(2) << std::endl;
  std::cout << svicarski_noz(3) << std::endl;
  std::cout << svicarski_noz(4) << std::endl;
  svicarski_noz("pozdrav","svima");
  svicarski_noz(3.14);
  std::cout << '\n' << std::endl;
  svicarski_noz(niz);
  std::cout << '\n' << std::endl;
  std::cout << svicarski_noz("pozdrav") << std::endl;
  std::cout << svicarski_noz(svicarski_noz("pozdrav")) << std::endl;
  return 0;
}
