#include <map>
#include <iostream>
#include <string>

// pair nesto();
// struct nesto();
//

int main()
{
    std::map<std::string, int> mapa;

    // std::pair<std::string, int> p = *mapa.begin();
    // p.first(), p.second();

    // Structured binding
    // auto &[prva, druga] = nesto();

    std::string unos;
    while (std::cin >> unos)
    {
        if (isupper(unos.at(0)))
        {
            for (char &c : unos)
            {
                c = tolower(c);
            }
            if (mapa.count(unos) != 0)
            {
                mapa[unos]--;
                if (mapa[unos] == 0)
                {
                    mapa.erase(unos);
                }
            }
        }
        else
        {
            mapa[unos]++;
        }
    }

    for (auto &[ime, broj] : mapa)
    {
        std::cout << ime << " " << broj << std::endl;
    }
}
