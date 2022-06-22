// Napisati program koji kreira niz cijelih br
// i svakom neparnom broju doda 1
// i sve to ispise na ekran

#include <iostream>
#include <vector>

int main(void)
{
  std::vector<int> niz{1,2,3,4,5,6,7};
  for (int i=0; i<niz.size(); i++)
  {
    if(niz[i]%2==1)
      niz[i]++;
  }
  for(auto element : niz)
    std::cout << element << std::endl;
   return 0;
}


// Isto ali sa funkcijama u primjer_zadatka2.cpp
