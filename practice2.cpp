// #include <bits/stdc++.h>
// using namespace std;

// void bubblesort(vector<int> &arra);
// void selectionsort(vector<int> &arra);

// int main()
// {
//     vector<int> arra = {3, 65, 7, 8, 7, 4, 78, 856, 8654, 7, 86, 536, 88, 5, 5, 35, 374};

//     // sorting

//     // bubblesort(arra);

//     selectionsort(arra);

//     // printing

//     for (int i = 0; i < arra.size(); i++)
//     {
//         cout << " " << arra[i];
//     }

//     return 0;
// }

// void bubblesort(vector<int> &arra)
// {
//     for (int i = 0; i < arra.size() - 1; i++)
//     {
//         for (int j = 0; j < arra.size() - i - 1; j++)
//         {
//             if (arra[j] > arra[j + 1])
//             {
//                 swap(arra[j], arra[j + 1]);
//             }
//         }
//     }
// }

// void selectionsort(vector<int> &arra)
// {
//     for (int i = 0; i < arra.size() - 1; i++)
//     {
//         int minimum = i;

//         for (int j = i + 1; j < arra.size(); j++)
//         {
//             if (arra[minimum] > arra[j])
//             {
//                 minimum = j;
//             }
//         }
//         swap(arra[i], arra[minimum]);
//     }
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

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> array = {45, 65, 345, 87, 3, 45, 357, 5, 7654, 4354, 6755, 6};
    int mini = array[1];

    for (int i = 0; i < array.size()-1; i++)
    {
        for (int j = i + 1; i < array.size(); j++)
        {
            if (array[mini] > array[j])
            {
                mini = j;
            }

            swap(array[mini], array[i]);
        }
    }
    for (int i = 0; i < array.size(); i++)
    {
        cout << "element = " << array[i] << endl;
    }
    return 0;
}