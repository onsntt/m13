#include <iostream>
#include <vector>
std::vector<int> roll(int index, std::vector<int> vec)
{
    /* ^^^_  cherz_zhopu_palochkoy_mode activated _^^^*/
int note = index;
while (index < vec.size()-1)
{
    std::swap(vec[index], vec[index + 1]);
    index++;
}

return vec;

} 
int main()
{
    
    int count = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> count;
    std::vector<int> vec(count);
    for (int i = 0; i < count; i++)
    {
        std::cout << "Enter element  ";
        std::cin >> vec[i];
    }
    for (int i = 0; i < count; i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Enter value for pop_back: ";
    int value;
    std::cin >> value;
    int pos=0;
    for (pos; pos < count; pos++)
    {
        if (vec[pos] == value )
        {
            vec = roll(pos, vec);
            vec.pop_back();
            count -=1;
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}
