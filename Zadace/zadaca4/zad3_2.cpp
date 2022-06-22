#include <iostream>
#include <list>



template<typename T>
void funkcija (std::list<T> l){
  auto lambda = [] (std::string a, std::string b){return a.size() < b.size();};

  l.sort(lambda);
  for(auto it=l.begin(); it != l.end(); ++it){
    std::cout << *it << std::endl;
  }
}

template<typename T>
T max(const std::list<T>& l){
  auto poc = l.front();
  for(auto it = l.begin() ; it != l.end(); ++it){
    if((*it).size() > (poc).size())
      poc = *it;
  }
  return poc;
}

int main(void)
{
  std::string a;
  std::list<std::string> kontejner;
  while(std::cin >> a){
    kontejner.push_back(a);
  }

  std::string max_vr = max<std::string>(kontejner);
  std::cout << max_vr << std::endl;
  return 0;
}
