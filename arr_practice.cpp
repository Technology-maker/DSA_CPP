// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     array<int, 10> arr = {1, 4, 6, 1, 4, 6, 8, 9, 8};
//     int ans = 0;

//     for (int i = 0; i < 10; i++)
//     {
//         ans = ans^arr[i];
//     }
//     cout << " "<< ans;

//     return 0;
// }
//
//
//
//
//
//

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int search_element;
//     cout << "enter searching element = ";
//     cin >> search_element;
//     int count = 0;
//     array<int, 10> arr = {1, 4, 2, 4, 5, 6, 4, 7, 4, 1};
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (search_element == arr[i])
//         {
//             count = count + 1;
//         }
//     }

//     cout << " " << count;

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

// intersection of two array
//

//

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr1 = {1, 4, 3, 2, 5, 8, 7, 6, 9, 10};
//     vector<int> arr2 = {6, 1, 2, 5, 4, 3, 9, 7, 10, 8, 15, 17, 19, 20};
//     vector<int> store;
//     int i = 0;
//     int j = 0;

//     sort(arr1.begin(), arr1.end());

//     sort(arr2.begin(), arr2.end());

//     while (i < arr1.size() && j < arr2.size())
//     {
//         if (arr1[i] == arr2[j])
//         {
//             store.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j])
//         {
//             i++;
//         }
//         else if (arr1[i] > arr2[j])
//         {
//             j++;
//         }
//     }
//     for (int i = 0; i < arr1.size(); i++)
//     {
//         cout << "element = " << store[i] << endl;
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
//
//
//
//
//
//

// question pair sum

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number to find sum = ";
//     cin >> n;

//     vector<int> vec = {1, 2, 3, 4, 5};

//     for (int i = 0; i < vec.size(); i++)
//     {
//         for (int j = i + 1; vec.size(); j++)
//         {
//             if (n == vec[i] + vec[j])
//             {
//                 cout << vec[i] << " + " << vec[j] << " = " << n << endl;
//             }
//         }
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
// Q ) pair sum ?

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the element = ";
//     cin >> n;
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     for (int i = 0; i < arr.size() / 2; i++)
//     {
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == n)
//             {
//                 cout << "sum of " << arr[i] << " + " << arr[j] << " is = " << n << endl;
//             }
//         }
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

// q) triplet finding

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int n = 12;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             for (int k = j + 1; k < arr.size(); k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == n)
//                 {
//                     cout << "sum of " << arr[i] << " + " << arr[j] << " + " << arr[k] << " is = " << n << endl;
//                 }
//             }
//         }
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
// Q) sort 012
//
//

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     array<int, 10> arr = {1, 0, 1, 0, 1, 1, 1, 0, 1, 1};

//     int i = 0;
//     int j = arr.size()-1;
//     while (i < j)
//     {
//         if (arr[i] == 0)
//         {
//             i++;
//         }
//         else if (arr[j] == 1)
//         {
//             j--;
//         }
//         else if (arr[i] == 1 && arr[j] == 0)
//         {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << " " << arr[i];
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

#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 20> arr1 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};
    set<int> arr2;
    array<int, 20> arr3;
    int index = 0;

    for (int i = 0; i < arr1.size(); i++)
    {
        arr2.insert(arr1[i]);
    }
    
    for (auto it : arr2)
    {
        cout << "element = " << it<< endl;
    }

    return 0;
}