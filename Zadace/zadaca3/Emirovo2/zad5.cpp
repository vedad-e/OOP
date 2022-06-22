#include <iostream>
#include <vector>
#include <algorithm>

void funkcija(std::vector<int>& a){
  std::sort(a.begin(), a.end(), [](int a, int b){return a>b;});

  std::cout << a.back() << std::endl;

}

int main(void)
{
  std::vector<int> kontejner {1,2,3};

  funkcija(kontejner);
  return 0;
}
