#include<iostream>
#include<vector>

typedef std::vector<int> cijeliBrojevi;

void povecajNeparne(cijeliBrojevi& niz)
{
  for(int i=0; i<niz.size(); ++i)
  {
    if(niz[i]%2==1)
      niz[i]++;
  }
}

void ispisi(const cijeliBrojevi& niz)
{
  for(auto& element : niz)
    std::cout << ++element << " ";
}
// U ispisi sada inkrementiramo svaki element niza
// ali zbog toga sto imamo const u parametru f-je
// ne mozemo mijenjati vrijednosti elemenata niza


int main(void)
{
  cijeliBrojevi niz{1,2,3,4,5,6};
  povecajNeparne(niz);
  ispisi(niz);

  return 0;
}
