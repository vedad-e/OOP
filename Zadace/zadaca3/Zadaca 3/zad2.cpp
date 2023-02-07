#include <iostream>

double saberi(int a, int b, int c){
  return (a+b)*c;
}

void saberi(std::string a, std::string b, int c){
  std::string rez = (a+b);
  std::string r = rez;
  for(int i=0; i<c; ++i){
    rez += r;
  }
  std::cout << rez << std::endl;
}

int main(void)
{
  saberi("abc","d",3);
  return 0;
}
