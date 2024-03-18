#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> vec = {5,6,9,29};
    int k = 0;
    int realSize = vec.size();
    std::cout << "Input count of operations: ";
    std::cin >> k;
    vec.resize(vec.size() + k);
    for (int i = 0; i < vec.size(); i++)
      {
         
      }

for (int i = 0; i < k; i++)
  {
    std::cout << "Enter your first subdirective!\n";
    int sub1 = 0;
    std::cin >>sub1;
    int sub2 = 0;
    //std::cout << "Enter your second subdirective!\n";
    //std::cin >> sub2;
    if (sub1 == 1)
      {
        std::cout <<"Enter second subdirective! \n";
        std::cin >> sub2;
        vec[realSize] = sub2;
        realSize++;
      }
      else if (sub1 == 2)
        {
            std::cout << "Enter second subdirective! \n";
            std::cin >> sub2;
            vec[sub2] = 0;
        }
        for (int i = 0; i < realSize; i++)
        {
            if (vec[i] != 0)
            {
                std::cout << "Robot " << i << " ID: " << vec[i] << " ready for sale!\n";
            }
        }
  }



}   

