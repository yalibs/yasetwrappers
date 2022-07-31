# YA-SETWRAPPERS
Yet another C/C++ std::set wrapper library. Header only wrappers for `std::set` functions

## Example Usage
```c++
std::set<int> my_set = {1,2,3};
std::set<int> my_other_set = {3,4,5};

// old way - a lot of freedom, but very verbose
std::set<int> result{};
std::set_union(my_set.begin(), my_set.end(), 
               my_other_set.begin(), my_other_set.end(), 
               std::inserter(result, result.begin()));
for(auto& item : result)
    std::cout << item << " ";
std::cout << "\n";

// new way - less verbose base case wrapper, but if you need more freedom, just use the old way
auto result = ya::set_union(my_set, my_other_set);
for(auto& item : result)
    std::cout << item << " ";
```
