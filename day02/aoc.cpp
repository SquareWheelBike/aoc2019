#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

// v[ins] 1: add
// v[ins] 2: multiply
// v[ins] 99: halt

int p1(std::vector<int> v)
{
    unsigned int ins = 0;
    v[1] = 12;
    v[2] = 2;
    for ( ; ; )
    {
        if (ins + 3 >= v.size())
        {
            std::cout << "Error: invalid ins" << ins << ", length of v is " << v.size() << std::endl;
            return -1;
        }
        if (v[ins] == 1)
        {
            v[v[ins + 3]] = v[v[ins + 1]] + v[v[ins + 2]];
        }
        else if (v[ins] == 2)
        {
            v[v[ins + 3]] = v[v[ins + 1]] * v[v[ins + 2]];
        }
        else if (v[ins] == 99)
        {
            return v[0];
        }
        else
        {
            std::cout << "Error: invalid v[ins]" << std::endl;
            return -1;
        }
        ins += 4;
    }
}

// int p2(std::vector<int> v)
// {
//     return 0;
// }

int main()
{
    using namespace std;
    vector<int> input;
    // for (int i; cin >> i; input.push_back(i));
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(input));
    copy(input.begin(), input.end(), ostream_iterator<int>(cout, " "));
    cout << "\nPart 1: " << p1(input) << endl;
    // cout << "Part 2: " << p2(input) << endl;
}
