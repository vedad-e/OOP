#include <iostream>
#include <vector>
#include <iterator>

void ispis (std::vector<int>::iterator prvi, std::vector<int>::iterator drugi){
  for( ; prvi != drugi; ++prvi)
    std::cout << *prvi << std::endl;
}

void foo(std::vector<double>::iterator i){

}

int main(void)
{
  std::vector<int> k;
  std::cout << "Unesite brojeve" << std::endl;
  for (int a ; std::cin >> a ; k.push_back(a)){
  }

  std::vector<int>::iterator ib(begin(k));
  std::vector<int>::iterator ie(end(k));
  ispis (ib,ie);
  return 0;
}
