#include <iostream>
#include <vector>

int main(void)
{
  std::vector<double> kontejner;
  double x,y;

  std::cin >> x;
  std::cin >> y;

  for( ; x<=y; ++x){
    kontejner.push_back(x);
    std::cout << x << std::endl;
  }
  return 0;
}
