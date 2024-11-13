// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     pair<int, int> p1 = {2, 4};

//     cout << "first = " << p1.first << endl;
//     cout << "second = " << p1.second << endl;
//     cout << endl;

//     //
//     //
//     //

//     pair<int, pair<int, int>> p2 = {1, {2, 3}};

//     cout << "first = " << p2.first << endl;
//     cout << "second first  = " << p2.second.first << endl;
//     cout << "second second = " << p2.second.second << endl;
//     cout << endl;

//     //
//     //
//     //

//     pair<pair<int, int>, pair<float, float>> p3 = {{12, 54}, {24.42, 54.25}};

//     cout << "first.first = " << p3.first.first << endl;
//     cout << "firs.second = " << p3.first.second << endl;
//     cout << "second.first = " << p3.second.first << endl;
//     cout << "second.first = " << p3.second.second << endl;
//     cout << endl;

//     //
//     //
//     //

//     pair<int, string> p4[] = {{239173, "satender yadav"}, {239290, "sahil"}, {239147, "manish"}, {239195, "himesh"}};
//     int name;

//     cout << "name = " << p4[1].second << endl;
//     cout << "roll number  = " << p4[1].first << endl;
//     cout << endl;

//     return 0;
// }
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

// vector in c++ (STD);

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;            // normal deceleration
//     vector<float> V2(20, 20); // 20 blocks of array and 20 elements in all blocks
//     vector<char> v3(24, 'a'); // 24 blocks and 'a' assign in all v3 boxes
//     vector<int> vec(5);       // size of vector is 5

//
//
//
//

//     vector<int> v4;

//     v4.emplace_back(20);
//     v4.emplace_back(23);
//     v4.push_back(54);

//     for (int i = 0; i < v4.size(); i++)
//     {
//         cout << "elements  = " << v4[i] << endl
//              << endl;
//     }

//     //
//     //
//     //
//     //

//     vector<pair<int, string>> v5;

//     v5.emplace_back(4, "satender");
//     v5.push_back({35, "yadav"});
//     v5.emplace_back(5, "sahil");
//     v5.emplace_back(92, "manish yadav");
//     v5.emplace_back(57, "kulvir yadav ");

//     for (const auto &p : v5)
//     {
//         cout << p.first << " : " << p.second << endl;
//     }

//     // copy of vector

//     vector<int> vec1 = {2, 5, 76, 2, 5, 8743, 56};

//     vector<int> vec2(vec1);

//     for (int i = 0; i < vec2.size(); i++)
//     {
//         cout << "elements of vec2  = " << vec2[i] << endl;
//     }
//     cout << endl;

//     // second way to print all elements of a vector

//     for (auto it = vec2.begin(); it != vec2.end(); it++)
//     {
//         cout << "elements of vector is.  " << *it << endl;
//     }
//     cout << endl;

//     // //function of vector

//     vec2.erase(vec2.begin(), vec2.begin() + 2);

//     for (auto it : vec2)
//     {
//         cout << "  " << it;
//     }
//     cout << endl;

//     vector<int> vect = {25, 6, 3, 57, 5, 4323, 4, 76543, 2345, 54, 356, 543, 5, 654, 3, 6, 543, 5, 654, 35};

//     vect.erase(vect.begin() + 2, vect.begin() + 5);

//     for (auto it : vect)
//     {
//         cout << "  " << it;
//     }

//     return 0;
// }

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
// list in c++ (STL)

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> li;
//     li.emplace_back(456);
//     li.emplace_back(18);
//     li.push_front(29);
//     li.emplace_back(84);
//     li.emplace_front(37);

//     list<int>::iterator it;
//     for (it = li.begin(); it != li.end(); it++)
//     {
//         cout << " " << *it;
//     }

//     // all function same as vector
//     // being ,end ,clear,insert,swap
//     return 0;
// }

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

// stack  in (STL)(LIFO)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(23);
    st.push(65);
    st.push(2);
    st.push(38);
    st.push(24);
    st.push(23);
    st.emplace(36);

    cout << "first element = " << st.top() << endl;

    st.pop();
    cout << "second top element = " << st.top() << endl;

    st.pop();
    cout << "third top element = " << st.top() << endl;

    st.pop();
    cout << "forth top element = " << st.top() << endl;

    st.pop();
    cout << "fifth  top element = " << st.top() << endl;

    //
    //
    //
    //
    //
    //
    //
    //

    queue<int> qu;
    qu.emplace(48);
    qu.push(35);
    qu.emplace(35);
    qu.push(77);
    qu.push(79);

    cout << "queue 1 = " << qu.front()<<endl;
    qu.pop();

    cout << "queue 1 = " << qu.front()<<endl;
    qu.pop();

    cout << "queue 1 = " << qu.front()<<endl;
    qu.pop();

    cout << "queue 1 = " << qu.front()<<endl;
    qu.pop();

    cout << "queue 1 = " << qu.front()<<endl;

    return 0;
}