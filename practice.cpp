// #include <bits/stdc++.h>
// using namespace std;

// void pattern1(int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }

//         for (int k = 0; k < (n - i); k++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// void pattern2(int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < (n - 1); i++)
//     {
//         for (int j = 0; j < (n - 1) - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// void pattern3(int n)
// {
//     int step = 2 * (n - 1);
//     for (int i = 1; i <= n; i++)
//     {

//         // numbers
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " " << j;
//         }
//         // SPACE

//         for (int l = 0; l < step; l++)
//         {
//         }

//         // number
//         for (int k = i; k >= 1; k--)
//         {
//             cout << " " << k;
//         }

//         cout << endl;
//         step = step - 2;
//     }
// }
// void pattern4(int n)
// {
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j <= i; j++)
//         {

//             cout << " " << ch;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
// }
// void pattern5(int n)
// {
//     for (int i = n; i >= 0; i--)
//     {

//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// void pattern6(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A' + i;

//         for (int j = 0; j <= i; j++)
//         {
//             cout << " " << ch;
//         }
//         cout << endl;
//     }
// }
// void pattern7(int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         // for space
//         for (int j = 0; j <= (n - i); j++)
//         {
//             cout << " ";
//         }

//         // for alphabet
//         for (char ch = 'A'; ch < 'A' + i; ch++)
//         {
//             cout << "  " << ch;
//         }
//         cout << endl;
//     }
// }
// void pattern8(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'A'; ch < 'A' + (n - i); ch++)
//         {
//             cout << " " << ch;
//         }
//         cout << endl;
//     }
// }
// void pattern9(int n)
// {
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j <= i; j++)
//         {
//             cout << " " << ch;
//         }
//         ch = (char)(ch + 1);

//         cout << endl;
//     }
// }
// void pattern10(int n)
// {
//     int increment = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // stars
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "* ";
//         }
//         for (int k = 0; k < increment; k++)
//         {
//             cout << "  ";
//         }
//         increment = increment + 2;
//         for (int l = 0; l < (n - i); l++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// void pattern11(int n)
// {
//     int spac = ((n * 2) - 2);
//     for (int i = 0; i < n; i++)
//     {
//         // number
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         // space
//         for (int k = 0; k < spac; k++)
//         {
//             cout << "  ";
//         }
//         // number
//         for (int l = 0; l <= i; l++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//         spac = spac - 2;
//     }
// }
// void mergepatt(int n)
// {
//     int increment = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // stars
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "* ";
//         }
//         for (int k = 0; k < increment; k++)
//         {
//             cout << "  ";
//         }
//         increment = increment + 2;
//         for (int l = 0; l < (n - i); l++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     int spac = ((n * 2) - 2);
//     for (int i = 0; i < n; i++)
//     {
//         // number
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         // space
//         for (int k = 0; k < spac; k++)
//         {
//             cout << "  ";
//         }
//         // number
//         for (int l = 0; l <= i; l++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//         spac = spac - 2;
//     }
// }
// void pattern12(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == 0 || j == 0 || i == (n - 1) || j == (n - 1))
//             {
//                 cout << "*";
//             }
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int n;
//     cout << "enter therows. ";
//     cin >> n;
//     pattern12(n);
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

//     // bubble sort

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arras = {23, 6, 345, 5, 45, 76, 546, 75, 54, 46};

//     for (int i = 0; i < arras.size() - 1; i++)
//     {
//         for (int j = 0; j < arras.size() - i-1; j++)
//         {
//             if (arras[j] > arras[j + 1])
//             {
//                 swap(arras[j], arras[j + 1]);
//             }
//         }
//     }

//     for (int i = 0; i < arras.size(); i++)
//     {
//         cout << "element = " << arras[i] << endl;
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

// #include <bits/stdc++.h>
// using namespace std;

// int fibo(int n);

// int main()
// {
//     array<string, 80> arr1;
//     arr1.fill("satender");

//     array<string, 80> arrr2;
//     arr1.swap(arrr2);
//     arrr2.fill("yadav ji");

//     cout << arr1[3];

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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size;
//     int array[20] = {24, 6, 7, 3, 34, 7, 65, 2, 6, 765, 2, 23};
//     size = sizeof(array) / sizeof(array[0]);

//     // maximum element of an array

//     int max = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (array[max] < array[i])
//         {
//             max = i;
//         }
//     }

//     cout << "maximum element = " << array[max];

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

// #include <bits/stdc++.h>
// using namespace std;

// int minifun(int arry[], int size);
// int maxfun(int arry[], int size);

// int main()
// {
//     int size;
//     cout << "enter the size of a array. ";
//     cin >> size;
//     int arry[size];
//     cout << "enter the values in array. ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arry[i];
//     }

//     int minstore = minifun(arry, size);
//     int maxstore = maxfun(arry, size);

//     cout << "minimum value is = " << minstore << endl;
//     cout << "maximum value is = " << maxstore << endl;
//     return 0;
// }

// int minifun(int arry[], int size)
// {
//     int mini;
//     mini = min(arry[0], arry[size - 1]);
//     return mini;
// }

// int maxfun(int arry[], int size)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         maxi = max(maxi, arry[i]);
//     }
//     return maxi;
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
// sum of an array elements
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

// reverse an array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr1[10] = {56, 765, 356, 87, 3, 4567, 345, 65432, 34, 6543};
//     int arr2[10];
//     int n = sizeof(arr1) / sizeof(arr1[0]);

//   reverse method one.

// for (int i = 0; i < n / 2; i++)
// {
//     for (int j = n / 2; j < n; j++)
//     {
//         swap(arr1[i], arr1[j]);
//     }
// }

// for (int i = 0; i < n; i++)
// {
//     cout << "element = " << arr1[i] << endl;
// }

// // reverse method two .

//     for (int i = 0; i < n; i++)
//     {
//         arr2[n - 1 - i] = arr1[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << "element = " << arr2[i] << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int array[10] = {3, 76, 345, 87, 27, 652, 7, 34, 87, 3};

//     for (int i = 0; i < 10; i = i + 2)
//     {
//         if (i + 1 < 10)
//         {
//             swap(array[i], array[i + 1]);
//         }
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         cout << "elements = " << array[i] << endl;
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
//  finding missing number of an array

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 0};

//     int count = 0;
//     for (int i = 1; i < array.size(); i++)
//     {
//         for (int j = 0; j < array.size(); j++)
//         {
//             if (array[j] == i)
//             {
//                 count++;
//                 break;
//             }
//         }
//     }

//     if (count == 0)
//     {
//         cout <<
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
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the size of an array. ";
//     cin >> n;
//     int array[n];
//     int array2[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         array2[n - 1 - i] = array[i];
//     }
//     if (array == array2)
//     {
//         cout << "given number is a palendrome !";
//     }
//     else
//     {
//         cout << "given number is not a palendrome !";
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
//
//
//
//
//

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     set <int> sat;
//     sat.insert(35);
//     sat.insert(35);
//     sat.insert(10);

//     set < int > sets{4,6,3,2,6,4,25,7,2,33,2,52,25};

//     for (auto i : sets){
//          cout << i << ' ';
//     };
//     sets.erase(sets.begin(),sets.begin());

//     // for(int i = 0; i < sat.size(); i++){
//     //     cout<<"value of set = " << sat.begin();
//     // }
//         for (auto i : sets){
//          cout << i << ' ';
//     };
//     cout <<endl;

//     for(auto i: sat){
//         cout<< i<<" ";
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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     // unordered_set<int> unset{2, 7, 5, 3, 8, 54, 23, 57, 765, 2, 6, 2, 7, 356, 345, 433, 3, 25, 223, 6, 3, 2, 6, 7};

//     // sort(unset.begin(), unset.end());

//     // unordered_set<int>::iterator it = unset.begin();

//     // for (auto it = unset.begin(); it != unset.end(); it++)
//     // {
//     //     cout <<" "<<*it;
//     // };

//     unordered_map<int,string> unmap;

//     unmap.emplace(239173,"satender");
//     unmap[239190] = "satender";
//     unmap[239156] = "sonu";
//     unmap[239178] = "manish";

//     cout<<"element = "<<

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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr1 = {1, 2, 3, 3, 4};
//     vector<int> arr2 = {3, 4};

//     for (int i = 0; i < arr1.size(); i++)
//     {
//         for (int j = 0; j < arr2.size(); j++)
//         {

//             if (arr1[i] < arr2[j])
//                 break;
//             if (arr1[i] == arr2[j])
//             {
//                 cout << " " << arr1[i];
//                 arr2[j] = 0;
//                 break;
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

#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> arr2 = {6, 7, 8, 9, 10, 11, 18, 20, 30};

    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {

            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
                cout << " " << arr1[i];
                arr2[j] = -1;
            }
        }
    }
    return 0;
}

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






