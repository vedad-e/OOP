#include <iostream>
#include <vector>

struct knjiga {
  std::string autor;
  std::string naslov;
  std::string zanr;
};

void ispis(std::vector<knjiga>& a){
  knjiga K;
  std::cin>> K.autor;
  std::cin>> K.naslov;
  std::cin>> K.zanr;

  a.push_back(K);

  std::cout << K.autor << std::endl;
}


int main(void)
{
  std::vector<knjiga> A{};
  ispis(A);
  return 0;
}
  
