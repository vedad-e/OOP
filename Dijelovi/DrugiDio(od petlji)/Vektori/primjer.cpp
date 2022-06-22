#include <iostream>
#include <vector>
#include <algorithm>

std::vector <double> v(9, 2);

int main()
{
//  std::vector <double> v{4, 2, 9};
  std::sort(std::begin(v), std::end(v));
  v.push_back(5);
  v.push_back(9);
  for (auto ispis : v)
    std::cout << ispis << " ";

  std::cout << v.at(10) << std::endl;
  return 0;
}
