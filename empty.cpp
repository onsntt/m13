#include <iostream>
#include <vector>

int main() {
std::vector<int> vec;
int x;
int count = 0;
std::cout << "Enter your prefix (1,2 or 3)";
std::cin >> x;
while (x != -1)
 {
  if (x == 1)
    {
      std::cout << "Enter yor value ";
      int value;
      std::cin >>value;
      vec.push_back(value);
    } else if (x == 2) 
    {
     if (vec.empty())
        {
          std::cout << "Vector is empty!\n";
        }
        else
        {
          vec.pop_back();

        }

    }
    else if (x == 3)
     {
      if (vec.empty())
        {
          std::cout << "Vectir is empty!\n";
        }
      else
        {
          std::cout << vec.front() << ", " << vec.back() << "\n";
        }

     }
    std::cout << "Enter your prefix (1,2 or 3)";
    std::cin >> x;








 }
for (int i = 0; i < vec.size(); i++)
  {
    if (! vec.empty()) std::cout << vec[i] << " ";
    else std::cout << "There iz nehren tut vyvodit'!\n";
  }


}