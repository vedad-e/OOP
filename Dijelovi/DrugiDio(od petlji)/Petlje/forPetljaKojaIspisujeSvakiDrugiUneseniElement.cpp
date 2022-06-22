#include <iostream>
#include <vector>

typedef std::vector<int> kontejner;

int main(void)
{
  kontejner k;

  for(int broj; std::cin >> broj; k.push_back(broj)){} 

  for(auto i=1; i<k.size(); ++(++i))
    std::cout << k[i] << " ";

  return 0;
}
