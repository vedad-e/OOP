#include <map>
#include <iostream>
#include <list>
#include <functional>
#include <ctime>

/*
 4: {1 2 4 5 6 8 9}
 9: {1 2 3}

*/
// strelica???
//  Kriterij => std::function<bool(decltype(*U.begin()))

using std::map;

template <typename T, typename U, typename Kriterij>
void sortiraj(std::map<T, U> &mapa, Kriterij lambda, T key)
{
    if (mapa.count(key))
    {
        mapa[key].sort(lambda);
    }
    else
    {
        mapa[key] = {"foo"};
    }
}

int main()
{
    // std::pair<int,std::list<std::string>> for(auto e : mapa) { v.push_back(e);};
    srand(time(NULL)); // pravilo generisanja brojeva
    std::map<int, std::list<std::string>> mapa{{0, {"foo", "bar", "nesto", "jajsdlow"}}, {1, {"foof", "barks", "nedsasto", "jajsdlow"}}};
    std::function<bool(std::string, std::string)> lambda = [](std::string a, std::string b)
    {
        return a.size() < b.size();
    };
    // int *x = new int(10);
    // const char *x = "default";
    // nesto = x;

    // nesto2 = x;
    // std::string("foo").size();
    //  while(true){
    //      while(std::cin >> rijec){
    //          if(rijec == "kraj"){
    //              goto nesto;
    //          }
    //      }
    //      cin.clear()
    //  }
    //  nesto:
    sortiraj(mapa, lambda, 5);
    for (const std::string &s : mapa[5])
    {
        std::cout << s << " ";
    }
}
