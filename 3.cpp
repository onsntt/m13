#include <iostream>
#include <vector>
std::vector<int> roll(int index, std::vector<int> vec)
{
    /* ^^^_  cherz_zhopu_palochkoy_mode activated _^^^*/
    int note = index;
    while (index < vec.size() - 1)
    {
        std::swap(vec[index], vec[index + 1]);
        index++;
    }

    return vec;
}
int main()
{
    std::vector<int> db(20);
    int number;
    int i = 0;
    while (true)
    {
        std::cout << "Input number: ";
        std::cin >> number;
        if (number == -1)
        {
            std::cout << "Output: ";
            for (int j = 0; j < db.size(); j++)
            {
              std::cout << db[j] << " ";
            }
            std::cout << "\n";
        }
        else if (i < 20) 
        {
            db[i] = number;
            i++;
        } else  if (i >= 20)
            {
                db = roll(0, db);
                db.pop_back();
                db.push_back(1);
                db[19] = number;
                i++;
            }
        
    }
}   