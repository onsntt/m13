#include <iostream>
#include <vector>

int main()  {
int n;
std::cin >> n;
std::vector <int>vec(n);

 for (int i = 0; i < n; i++)
 {
    std::cin >> vec[i];
 }
int sum = 0;
for (int i = 0; i < n; i++)
{
    sum += vec[i];
}
float sr = sum/n;
std::cout << sr;


}