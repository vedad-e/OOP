#include <iostream>
#include <vector>

void ispis(std::vector<int>::iterator& a, std::vector<int>::iterator& b){
  for( ; a != b; ++a){
    std::cout << *a << std::endl;
  }
}


int main(void)
{
  std::vector<int> kontejner;
  for(int a; std::cin >> a; kontejner.push_back(a)){}

  std::vector<int>::iterator ib(begin(kontejner));
  std::vector<int>::iterator ie(end(kontejner));

  ispis(ib,ie);
  return 0;
}
