#include <iostream>
#include <vector>

struct tacka {
  int x;
  int y;
};

void ispis (std::vector<tacka>& a){
  int max = a[0].x;
  int min = a[0].y;

  for(int i=0; i<a.size(); ++i){
    if(a[i].x > max)
      max = a[i].x;
  if(a[i].y < min)
      min = a[i].y;
  }
  std::cout << max << std::endl;
  std::cout << min << std::endl;
}


int main(void)
{
  std::vector<tacka> k{ {2,3}, {10,19}, {99, 5} };

  ispis (k);

  return 0;
}
