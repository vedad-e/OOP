#include <iostream>
#include <vector>
#include <algorithm>

void funkcija (std::vector<int>& prvi, int N=1){
  for(int i=0; i<prvi.size(); ++i){
    std::cout << prvi[i]-N << std::endl; 
  }
 }

int main(void)
{
  std::vector<int> k{1,2,3};
  funkcija(k, 3);

  return 0;
}


