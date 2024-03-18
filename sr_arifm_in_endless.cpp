#include <iostream>
#include <vector>
std::vector<int> add(std::vector<int>vec, int val)
{
    std::vector<int>newvec(vec.size() + 1);
    for (int i = 0; i < vec.size(); i++)
    {
        newvec[i] = vec[i];
    }
       newvec[vec.size()] = val;

       return newvec;

}

int main() {
std::vector<int>vec = {0};
int age = 0;
while (age >= 0)
{
    std::cout << "Enter your age ";
    std::cin >> age;
    vec = add(vec, age);
}
int sum = 0;
for (int i = 0; i < vec.size(); i++)
{
  sum +=  vec[i]; 
}
float mediumAge = (sum - vec[0] - vec[vec.size()-1])/(vec.size() -2);

std::cout << "Medium age of " << (vec.size() - 2) << " clients is " << mediumAge << "\n";
}
