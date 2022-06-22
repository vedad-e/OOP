#include <list>
#include <vector>
#include <iostream>

// void print(std::ranges::common_range auto &container)
// {
//     for (auto e : container)
//     {
//         std::cout << e << " ";
//     }
// }

template <typename C>
void print(const C &container)
{
    for (auto e : container)
    {
        std::cout << e << " ";
    }
}

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    std::list<std::string> l{"das", "gdf", "gfd", "ere", "owif"};

        print(l);
}
