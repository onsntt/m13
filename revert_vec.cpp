#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<float> vec(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }
for (int i = 0; i < n; i++)
{
 std::cout << vec[i];
}
std::cout << "\n... and revert it!\n";
for (int i = n-1; i >= 0; i--)
{
    std::cout << vec[i];
}
}