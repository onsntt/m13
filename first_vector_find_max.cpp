#include <iostream>
#include <vector>

int main() {
std::cout << "Enter number of elements: ";    
int n;
std::cin >> n;
std::vector<int> vec(n);

//vec[0] = 2.0f;
//float f = vec[0];
//std::cout << f;

for (int i=0; i<n; i++)
{
std::cin >> vec[i];

}
int summ=0;
for (int i = 0; i < n; i++)
{
    summ += vec[i];
}
std::cout << "Summ = " << summ << "\n";

int max = vec[0];
for (int i = 1; i < n; i++)
{
    if (max < vec[i])
    {
        max = vec[i];
    }
}
std::cout << "Max = " << max << "\n";
}