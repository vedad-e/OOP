
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

void transformiraj (std::vector<std::string>& prvi, 
    std::vector<std::string>& drugi, 
    std::function<std::string(std::string)> lambda){

  if(prvi.size() == drugi.size())
    std::transform(prvi.begin(), prvi.end(), prvi.begin(), lambda);
  else
    throw std::logic_error("Iznimka");

}

int main(void)
{
  std::vector<std::string> v1{"lampa", "mis"};
  std::vector<std::string> v2{"pingvin"};
  
  try{
    transformiraj(v1, v2, [](std::string a){return a+a;});
  }
  catch(std::logic_error iznimka){
    std::cout << iznimka.what() << std::endl;
    exit(1);
  }

  for(auto e : v1)
    std::cout << e << std::endl;
  return 0;
}
