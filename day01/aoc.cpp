#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

// total fuel divided by 3, rounded down, minus 2
int p1(std::vector<int> v) {
    std::for_each(v.begin(), v.end(), [](int& i) { i = (i / 3) - 2; });
    return std::accumulate(v.begin(), v.end(), 0);
}

int rec_fuel(int mass) {
    int fuel = (mass / 3) - 2;
    if (fuel <= 0) return 0;
    return fuel + rec_fuel(fuel);
}

int p2(std::vector<int> v) {
    std::for_each(v.begin(), v.end(), [](int& i) { i = rec_fuel(i); });
    return std::accumulate(v.begin(), v.end(), 0);
}

int main()
{
    using namespace std;
    // read ints from stdin to vector
    vector<int> input;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(input));
    cout << "Part 1: " << p1(input) << endl;
    cout << "Part 2: " << p2(input) << endl;
}
