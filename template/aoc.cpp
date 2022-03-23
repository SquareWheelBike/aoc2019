#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

int p1(std::vector<int> v) {
    return 0;
}

int p2(std::vector<int> v) {
    return 0;
}

int main()
{
    using namespace std;
    vector<int> input;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(input));
    cout << "Part 1: " << p1(input) << endl;
    cout << "Part 2: " << p2(input) << endl;
}
