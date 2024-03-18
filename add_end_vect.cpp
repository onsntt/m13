#include <iostream>
#include <vector>
std::vector<int> add(std::vector<int>vec, int val)
{
    std::vector<int> newvec(vec.size() + 1);
    for (int i = 0; i < vec.size(); i++)
    {
        newvec[i] = vec[i];
    }
    newvec[vec.size()] = val;
    return newvec;
}


int main() {
std::vector<int>vec = {0};

int number=0 ;

while (number != -1)
{
    std::cout << "Enter your number: ";
    std::cin >> number;
     
vec = add(vec, number);

}

for (int i = 0; i<vec.size(); i++)
{
    std::cout << vec[i] << " " ;
}
std::cout << "\n";
std::cout << "We have " << vec.size() << " elements\n";
}