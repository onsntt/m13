#include <iostream>
#include <vector>

std::vector<int> add_to_position(std::vector<int> vec, int val, int position)
{
    std::vector<int> newVec(vec.size() + 1);
    for (int i = 0; i < position; ++i)
    {
        newVec[i] = vec[i];
    }
    newVec[position] = val;
    for (int i = position; i < vec.size(); ++i)
    {
        newVec[i + 1] = vec[i];
    }
    return newVec;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int val = 6;
    int position = 2;
    vec = add_to_position(vec, val, position);
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    return 0;
}