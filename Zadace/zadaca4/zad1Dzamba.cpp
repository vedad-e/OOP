#include <list>
#include <iostream>
#include <functional>

int &ref(std::list<int> l, int pos)
{
    std::list<int>::iterator it = l.begin();
    // for (int i = 0; i < pos; i++){
    //     it++;
    // }
    std::advance(it, pos);
    return *it;
}

int main()
{
    std::list<int> l;
    int x;
    //  std::function<bool(int, int)> lambda = [](int a, int b)
    // {
    //     return a > b;
    // };

    while (std::cin >> x)
    {
        l.push_back(x);
    }

    l.sort();

    int &r = ref(l, 3);


    std::cout << "Najmanji broj: " << l.front() << std::endl;
    std::cout << "Najveci broj: " << l.back() << std::endl;

    for (int b : l)
    {
        std::cout << b << " ";
    }
}
