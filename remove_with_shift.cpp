#include <iostream>
#include <vector>
std::vector<int> remove_last(std::vector<int> vec)
{
 std::vector<int>newvec(vec.size()-1);    
for (int i = 0; i < newvec.size(); i++ )
{
    newvec[i] = vec[i];
}
return newvec;
}

   std::vector<int> remove2_last(std::vector<int> vec)
    {
       vec.resize(vec.size() - 1);
       return vec;
    }

std::vector<int> resize_plus_1(std::vector<int>vec, int val)
{
  vec.resize(vec.size() + 1);
  vec[vec.size() - 1] = val;
  return vec;
  

}

int main(){
std::vector<int>vec = {1,2,3,4,5,6,7};


 for (int i = 0; i < vec.size(); i++)
 {
    std::cout << vec[i];
 }


vec = remove_last(vec); 


std::cout << " \n";
for (int i = 0; i < vec.size(); i++)
{
    std::cout << vec[i];
}


vec = remove2_last(vec);


std::cout << " \n";
for (int i = 0; i < vec.size(); i++)
{
    std::cout << vec[i];
}

vec.resize(vec.size() - 2);

std::cout << " \n";
for (int i = 0; i < vec.size(); i++)
{
    std::cout << vec[i];
}
int newVal= 0;

std::cout << "\nEnter new value ";
std::cin >> newVal;

vec = resize_plus_1(vec, newVal);
std::cout << " \n";
for (int i = 0; i < vec.size(); i++)
{
    std::cout << vec[i];
}
}