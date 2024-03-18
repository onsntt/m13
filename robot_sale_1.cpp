#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    int n = 0;
    int realSize = 0;
    std::cout << "Input count of robots: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Input robot " << i << " ID: ";
        if (realSize == vec.size())
        {
            vec.resize(vec.size() + n);
        }
        std::cin >> vec[i];
        realSize++;
    }

    std::cout << "How many robots you want to sell?  ";
    int m = 0;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        std::cout << "Input robot position for sell: ";
        int pos = 0;
        std::cin >> pos;
        if (pos < 0 || pos >= realSize)
        {
            std::cout << "Wrong position \n";
        }
        else
        {
            vec[pos] = 0;
            std::cout << "Robot " << pos << " sold\n";
            for (int i = 0; i < realSize; i++)
            {
                if (vec[i] != 0)
                {
                    std::cout << "Robot " << i << " ID: " << vec[i] << " ready for sale!\n";
                }
            }
        }
    }
}