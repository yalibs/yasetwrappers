/* MIT License

Copyright (c) 2022 Asger Gitz-Johansen

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <iostream>
#include <setwrappers>

int main(int argc, char** argv) {
    std::set<int> my_set = {1,2,3};
    std::set<int> my_other_set = {3,4,5};

    // old way - a lot of freedom, but very verbose
    std::set<int> result{};
    std::set_union(my_set.begin(), my_set.end(), my_other_set.begin(), my_other_set.end(), std::inserter(result, result.begin()));
    for(auto& item : result)
        std::cout << item << " ";
    std::cout << "\n";

    // new way - super simple base case wrapper
    auto ya_result = ya::set_union(my_set, my_other_set);
    for(auto& item : ya_result)
        std::cout << item << " ";
    return 0;
}
