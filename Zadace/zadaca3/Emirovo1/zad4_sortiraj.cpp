#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

std::vector<std::string> baza1 {"Pingvin", "Emir", "Ado"};
std::vector<std::string> baza2;

void sortiraj (std::vector<std::string>& prvi,
    std::function<int(std::string, std::string)> kriterij)
{
  std::sort(std::begin(prvi), std::end(prvi), kriterij);
}

int main(void)
{
  sortiraj (baza1, [](std::string a, std::string b){return a.size() < b.size();});
  
  for (auto element : baza1)
    std::cout << element << std::endl;

  
  return 0;
}
