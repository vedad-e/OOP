#include <iostream>
#include <vector>
#include <algorithm>

void funkcija (std::vector<int>& prvi, std::vector<int>& drugi, std::vector<int>& treci){
  std::transform(prvi.begin(), prvi.end(), drugi.begin(), treci.begin(), std::minus<int>());

  for(auto e : treci)
    std::cout << e << std::endl;
}

int main(void)
{
  std::vector<int> a{5,4,3};
  std::vector<int> b{1,2,3};
  std::vector<int> c(3);

  funkcija (a,b,c);
  return 0;
}
