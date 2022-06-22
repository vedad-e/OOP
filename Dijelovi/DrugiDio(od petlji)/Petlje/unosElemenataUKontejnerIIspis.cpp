#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<std::string> kontejner;

int main(void)
{
  std::string a;
  kontejner k;
  std::cout << "Unesite imena studenata" << std::endl;
  for( ; std::cin >> a ; k.push_back(a) ){
      }

  auto kriterij = [](std::string a, std::string b){
      return a>b;
    };
  
  std::sort(std::begin(k),std::end(k), kriterij);
    
  for(auto element : k)
    std::cout << element << std::endl;


  return 0;
}
