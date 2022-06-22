#include <iostream>
#include <vector>

void ispis(int &x, int &y){
  for( ; x <= y; ++x){
    std::cout << x << std::endl;
  }
}


int main(void)
{
  int x;
  int y;

  std::cin >> x;
  std::cin >> y;

  ispis (x,y);
  return 0;
}
