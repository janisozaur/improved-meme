#include <iostream>
#include <vector>

int main()
{
    std::vector<int> foo{2, 3, 4};
    for (auto it = foo.begin(); it != foo.end(); ++it)
    {
        std::cout << foo.size() << std::endl;
        foo.erase(it);
    }
    return 0;
}
