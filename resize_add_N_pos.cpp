#include <iostream>
#include <vector>

int main()
{

    std::vector<int> vec;

int realSize = 0;

    int val;
    std::cin >> val;

    while (val != -2)
    {
        if (val == -1)
        {
            float sum = 0.f;
            for (int i = 0; i < realSize; i++)
            {
                sum += vec[i];
            }
            float avg = sum / realSize;
            std::cout << "\n AVG = " << avg << "\n";
            for (int i = realSize - 1; i >= 0; i--)
            {
                std::cout << vec[i];
            }
            std::cout << "\n Realsize = " << realSize << ", Fullsize = " << vec.size() << " LastItem = " << vec[vec.size() - 1] << "\n";
        }
        else

        {
            if (realSize == vec.size())
            {
                vec.resize(vec.size() + 10);
            }
            vec[realSize] = val;
            realSize++;
        }
        std::cin >> val;
    }
}