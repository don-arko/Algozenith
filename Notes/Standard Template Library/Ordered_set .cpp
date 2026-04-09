#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Ordered Set
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;

int main() {
    ordered_set s;

    // insert
    s.insert(10);
    s.insert(20);
    s.insert(30);

    // erase
    s.erase(20);

    // find k-th element (0-based)
    cout << *s.find_by_order(0) << endl; // smallest element

    // count elements less than x
    cout << s.order_of_key(25) << endl;

    return 0;
}
