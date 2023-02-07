#include <iostream>
#include <vector>

void funkcija (int a, int b){
  std::vector<int> kontejner;

  for( ; a<=b; ++a){
    if(a%3==0){
      kontejner.push_back(a); 
    }
  }
  for(auto e : kontejner)
    std::cout << e << std::endl;
}

int main(void)
{
  funkcija(1,10);
  return 0;
}
