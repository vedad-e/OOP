#include <iostream>
#include <list>

template <typename A>
void ispisi(const std::list<A>& kontejner){
  for(auto i=kontejner.begin(); i != kontejner.end(); ++i){
    std::cout << *i << std::endl;
  }
}

int main(void)
{
  std::list<int> niz1{1,2,3};
  std::list<float> niz2{1.1,2.2,3.3};

  ispisi(niz1);
  ispisi(niz2);
  return 0;
}

