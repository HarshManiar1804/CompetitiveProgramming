#include <iostream>
#include <unordered_map>
#include <unordered_set>

int main()
{
    int n;
    std::cin >> n;

    std::unordered_map<int, int> freq;
    std::unordered_set<int> distinct_values;
    std::unordered_set<int> matched_values;

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
        int a = p.first;
        int f = p.second;
        if (matched_values.find(a) == matched_values.end())
        {
            matched_values.insert(a);
            count++;
            if (f > 1)
            {
                for (int i = 2 * a; i <= 1e9; i += a)
                {
                    if (distinct_values.find(i) == distinct_values.end())
                    {
                        matched_values.insert(i);
                        count++;
                        break;
                    }
                }
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}
