#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

void funkcija (std::vector<int>& prvi, std::vector<int>& drugi, std::vector<int>& treci){
  std::transform(prvi.begin(), prvi.end(), drugi.begin(), treci.begin(), std::plus<int>());

  for(auto element : treci)
    std::cout << element << std::endl;
}


int main(void)
{
  std::vector<int> a{3,2,1,2};
  std::vector<int> b{1,2,3};
  std::vector<int> c(4);

  funkcija(a,b,c);
  return 0;
}
