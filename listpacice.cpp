#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.emplace_back(456);
    li.emplace_back(18);
    li.push_front(29);
    li.emplace_back(84);
    li.emplace_front(37);

    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); it++)
    {
        cout << " " << *it;
    }

    // all function same as vector
    // being ,end ,clear,insert,swap
    return 0;
}