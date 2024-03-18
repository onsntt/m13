#include <iostream>
#include <vector>


int main() {

std::vector<int> vec = {1,2,3,4,5,6};
vec.pop_back();

for (int i = 0; i<vec.size(); i++)
  {
    std::cout << vec[i] << " ";

  }


}