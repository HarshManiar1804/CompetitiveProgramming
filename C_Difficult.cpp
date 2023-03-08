#include <iostream>
#include <unordered_map>
#include <unordered_set>

int main()
{
    int n;
    std::cin >> n;

    std::unordered_map<int, int> freq;
    std::unordered_set<int> distinct_values;

    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        freq[a]++;
        distinct_values.insert(a);
    }

    int count = 0;

    for (auto p : freq)
    {
        if (p.second > 1)
        {
            count++;
        }
    }

    int b_size = distinct_values.size() + count;
    std::cout << b_size << std::endl;

    return 0;
}
