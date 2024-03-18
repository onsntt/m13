#include <iostream>
#include <vector>



int main() {

std::vector<int> vec = {1,2,3};

vec.push_back(10);

for (int i = 0; i < 1000; i++)
  {
    vec.push_back(i);
    if (i%100 == 0)
      {
        std::cout << "Size = " << vec.size() << ". Capacity = " << vec.capacity() << "\n";
      }
  }


}