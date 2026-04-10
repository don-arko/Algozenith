#include <iostream>
#include <map>

using namespace std;

struct bag {
    int cur_sum = 0;
    map<int, int> mp;

    void insert(int x)    // 0(logn)
    {
        cur_sum += x;
        mp[x]++;
    }

    void remove(int x)     // 0(logn)
    {
        cur_sum -= x;
        mp[x]--;
        if (mp[x] == 0) {
            mp.erase(x);
        }
    }

    int sum()    // 0(1)
    {
        return cur_sum;
    }

    int getmax()   // 0(1)
    {
        auto it = mp.end();
        it--;
        return it->first;
    }

    int getdistinct()   // 0(1)
    {
        return mp.size();
    }
};

int main() {
    bag b;
    b.insert(5);
    b.insert(7);
    b.insert(5);
    cout << "Sum: " << b.sum() << endl; // Output: Sum: 17
    cout << "Max: " << b.getmax() << endl; // Output: Max: 7
    cout << "Distinct: " << b.getdistinct() << endl; // Output: Distinct: 2
    b.remove(5);
    cout << "Sum after removing 5: " << b.sum() << endl; // Output: Sum after removing 5: 7
    return 0;
}
