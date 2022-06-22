#include <iostream>
#include <vector>

int main(void)
{
  std::vector<int> v1{1,2,3};
  
  for(auto i=v1.begin() ; i != v1.end() ; ++i){
    std::cout << *i << std::endl;
  }
  std::cout << '\n' << std::endl;

  v1.insert(v1.begin()+1, 5);

  //ovdje brisemo sve elemente vektora
  //v1.erase(v1.begin(), v1.end());
  
  v1.erase(v1.begin()+2);
  
  for(auto i=v1.begin() ; i != v1.end() ; ++i){
    std::cout << *i << std::endl;
  }

  return 0;
}
