#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    std::vector<float> vec(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> vec[i];
    }
    float max = vec[0];
    float max2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (vec[i] > max && vec[i]>max2)
        {
            max2 = max;
            max = vec[i];
            //std::cout << max2 << " " << max << std::endl;
        }
        else if (vec[i]<max && vec[i] > max2 )
        {
            max2= vec[i];
        }
    }
    std::cout << max2;
}