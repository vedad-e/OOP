//ispis prvog elementa kreirane strukture
#include <iostream>
#include <vector>

struct tacka{
  int x;
  int y;
};

int main(void)
{
  std::vector<tacka> tacke;
  tacka prva;
  tacka druga;
  prva.x = 1;
  prva.y = 2;
  druga.x = 3;
  tacke.push_back(prva);
  tacke.push_back(druga);

  auto i = tacke.begin()+1;
  std::cout << (*i).x << std::endl;
  return 0;
}
