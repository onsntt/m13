#include <iostream>
#include <vector>

int main() {

std::vector<int> vec;


int val;
std::cin >> val;

while (val != -2)
{
  if (val == -1)
  {
    float sum = 0.f;
     for(int i = 0; i < vec.size(); i++)
       {
        sum += vec[i];
       }
     float avg = sum/vec.size();
     std::cout << "\n AVG = " << avg << "\n";
     for (int i = vec.size()-1; i>=0; i--)
       {
        std::cout << vec[i];
       }
     std::cout << "\n";  

  } else

    {
        vec.resize(vec.size()+1);
        vec[vec.size() -1] = val;
    }
std::cin >> val;
}


}