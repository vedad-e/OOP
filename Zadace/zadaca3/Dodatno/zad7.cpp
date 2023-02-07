#include <iostream>
#include <vector>

struct tacka {
  int x;
  int y;
};

void ispis (std::vector<tacka>& a){
  int max = a[0].x;
  int min = a[0].y;

  for(auto i=0; i<a.size(); ++i){
    if(a[i].x > max){
      max = a[i].x;
    }
    if(a[i].y < min){
      min = a[i].y;
    }
  }
  std::cout << max << std::endl;
  std::cout << min << std::endl;
}

int main(void)
{
  std::vector<tacka> b{ {2,100}, {50,1}, {42, 80} };    
  ispis(b);
  return 0;
}
