#include <iostream>

int main(){
  
  
  int x = 6;
	int y = 5;
  std::cout << x << ';' << y << std::endl;
	x++;
	--y;

  std::cout << x << ';' << y << std::endl;
  x+=2;
  y = ++x;
  y -= x++;
  x += --y * x;
  std::cout << x << ';' << y << std::endl;

  x = (y+2)*2/2;
  std::cout << x << ';' << y << std::endl;
  y = x+(y--);
  std::cout << x << ';' << y << std::endl;
  
  return 0;

}
