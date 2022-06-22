#include <iostream>
#include <vector>

void funkcija (std::vector<int> prvi, int N=1){
 for (int i=0; i<prvi.size(); ++i){
 std::cout << prvi[i]-N << std::endl; 
 } 
}


int main(void)
{
  std::vector<int> kontejner;
  for(int a ; std::cin >> a ; kontejner.push_back(a)){}

  funkcija(kontejner, 2);
  return 0;
}
