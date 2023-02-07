#include <iostream>
#include <vector>
#include <algorithm>

void funkcija1 (std::vector<int>& a){
  for(auto it = a.rbegin() ; it != a.rend(); ++it){
    std::cout << *it << std::endl;
  }
}

int main(void)
{
  std::vector<int> k{1,2,3};
  funkcija1(k);
  return 0;
}
