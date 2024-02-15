#include <bits/stdc++.h>
#define int long long int
using namespace std;
void pass_by_ref_test(vector<int> tmp)
{
    tmp.push_back(5);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Vector declaration and initialization
    vector<int> vec = {10, 4, 16, 6, 2};

    // vector<int> vec(5);

    // Pass by reference
    // vector<int> tmp;
    // pass_by_ref_test(tmp);
    // for (int i=0; i<tmp.size(); i++){
    //     cout << tmp[i] << " ";
    // }

    // Push back vs size

    // Pushing elements to the vector
    vec.push_back(14);
    vec.push_back(8);

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << "\n";
    // }

    // Sorting the vector
    sort(vec.begin(), vec.end(), greater<int>());
    // sort(vec.rbegin(), vec.rend());

    sort(vec.begin(), vec.end());

    // Iterating over the vector using iterators

    vector<int>::iterator it = vec.begin();
    // auto it = vec.begin();

    cout << "Vector elements: ";
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Using lower_bound to find the first element greater than or equal to a value // only for sorted array
    int target = 3;
    auto lb = lower_bound(vec.begin(), vec.end(), target);
    cout << "Lower bound index of " << target << ": " << lb - vec.begin() << endl;

    // Using upper_bound to find the first element greater than a value // only for sorted array
    auto ub = upper_bound(vec.begin(), vec.end(), target);
    cout << "Upper bound of " << target << ": " << *ub << endl;

    // // Erasing an element from the vector
    // int index = 2;
    // vec.erase(vec.begin() + index);

    // // Printing the updated vector
    // cout << "Updated vector: ";
    // for (auto num : vec)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;

    // pair<int, string> p = {1, "one"};
    // cout << p.first << " " << p.second << endl;

    // vector<pair<int, string>> v = {{1, "one"}, {2, "two"}, {3, "three"}};

    // for (auto it = v.begin(); it != v.end(); ++it)
    // {
    //     // *it.first == it->first
    //     cout << it->first << " " << it->second << endl;
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    cout << "\n----------------------------------\n";

    // Set declaration and initialization
    set<int> s = {5, 2, 8, 3, 1};

    // Inserting elements to the set
    s.insert(7);
    s.insert(2);

    // Iterating over the set using iterators
    cout << "Set elements: ";
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    // for(auto x:s){
    //     cout << x << " ";
    // }
    cout << endl;

    // Using lower_bound to find the first element greater than or equal to a value
    int targetSet = 3;
    auto lbSet = s.lower_bound(targetSet);
    cout << "Lower bound of " << targetSet << ": " << *lbSet << endl;

    // Using upper_bound to find the first element greater than a value
    auto ubSet = s.upper_bound(targetSet);
    cout << "Upper bound of " << targetSet << ": " << *ubSet << endl;

    cout << "\n----------------------------------\n";

    // // Map declaration and initialization
    // map<int, string> m;

    // // Inserting elements to the map
    // m.insert({1, "one"});
    // m[1] = "one";
    // m.insert({2, "two"});
    // m.insert({3, "three"});

    // // Accessing elements in the map
    // cout << "Map elements: ";
    // for (auto it = m.begin(); it != m.end(); ++it)
    // {
    //     cout << it->first << ":" << it->second << " ";
    // }
    // cout << endl;

    // // Using lower_bound to find the first key greater than or equal to a value
    // int targetMap = 2;
    // auto lbMap = m.lower_bound(targetMap);
    // cout << "Lower bound of " << targetMap << ": " << lbMap->first << ":" << lbMap->second << endl;

    // // Using upper_bound to find the first key greater than a value
    // auto ubMap = m.upper_bound(targetMap);
    // cout << "Upper bound of " << targetMap << ": " << ubMap->first << ":" << ubMap->second << endl;

    return 0;
}