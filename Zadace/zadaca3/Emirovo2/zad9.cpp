#include <iostream>
#include <vector>

void funkcija(std::vector<int> prvi, std::vector<int> drugi){
  for(int i=1; i<=prvi.size(); ++i){
    drugi.push_back(i);
  }
  for(auto e : prvi)
    std::cout << e << std::endl;
  std::cout << '\n' << std::endl;
  for(auto e : drugi)
    std::cout << e << std::endl;
}

int main(void)
{
  std::vector<int> K1;
  std::vector<int> K2;
  for(int a; std::cin >> a; K1.push_back(a)){
  }

  funkcija (K1, K2);
  return 0;
}
