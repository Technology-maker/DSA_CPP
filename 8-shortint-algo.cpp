//   //           bubble short algorithm

// #include <bits/stdc++.h>
// using namespace std;

// int shorting(vector<int> &arr);

// int main()
// {
//     vector<int> arr = {5, 3, 4, 6, 8, 10, 35, 2, 34, 100, 290};

//     // passing vector in function.

//     shorting(arr);

//     // printing the array vector element in shortin order

//     cout << "size = " << arr.size() << endl;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << "element = " << arr[i] << endl;
//     }
// }

// int shorting(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         for (int j = 0; j < arr.size() - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
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

// insertion short algorithm.

// #include <bits/stdc++.h>
// using namespace std;

// void insertion_short(vector<int> &arr);
// int main()
// {
//     vector<int> arr = {83, 5, 3, 355, 7, 8, 55, 43, 56, 78, 6, 444, 34, 76};

//     insertion_short(arr);

//     return 0;
// }

// void insertion_short(vector<int> &arr)
// {

//     int length = arr.size();
//     for (int i = 1; i < length; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (arr[j] > arr[temp])
//             {
//                 arr[j+1] = arr[j];
//             }
//             else break;
//         }
//         arr[j+1] = temp;
//     }

//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         cout << "element is = " << arr[i] << endl;
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
//
//
//
//
//

// selection sort

// #include <bits/stdc++.h>
// using namespace std;

// int bubblesort(vector<int> &arrs);

// int main()
// {
//     vector<int> arrs = {23, 46, 56, 75, 35, 789, 76, 433, 23, 67, 325, 776, 45};

//     bubblesort(arrs);

//     for (int i = 0; i < arrs.size(); i++)
//     {
//         cout << " " << arrs[i];
//     }

//     return 0;
// }

// int bubblesort(vector<int> &arrs)
// {
//     for (int i = 0; i < arrs.size() - 1; i++)
//     {
//         int minimum = i;

//         for (int j = i + 1; j < arrs.size(); j++)
//         {
//             if (arrs[j] < arrs[minimum])
//             {
//                 minimum = j;
//             }
//         }

//         swap(arrs[minimum], arrs[i]);
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

#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arra);
void bubbleshort(vector<int> &arra);
void insertionshort(vector<int> &arra);

int main()
{
    vector<int> arra = {42, 4, 54, 3, 56, 8, 6, 4, 34, 7, 98, 54, 34, 5, 8743, 543, 676, 5245, 76, 6346};

    selectionsort(arra);

    bubbleshort(arra);

    insertionshort(arra);

    for (int i = 0; i < arra.size(); i++)
    {
        cout << " " << arra[i];
    }
}

void selectionsort(vector<int> &arra)
{
    for (int i = 0; i < arra.size() - 1; i++)
    {
        int minimum = i;

        for (int j = i + 1; j < arra.size(); j++)
        {
            if (arra[minimum] > arra[j])
            {
                minimum = j;
            }
        }
        swap(arra[i], arra[minimum]);
    }
}

void bubbleshort(vector<int> &arra)
{
    for (int i = 0; i < arra.size() - 1; i++)
    {
        for (int j = 0; j < arra.size() - i - 1; j++)
        {
            if (arra[j] > arra[j + 1])
            {
                swap(arra[j], arra[j + 1]);
            }
        }
    }
}

void insertionshort(vector<int> &arra)
{
    // for (int i = 1; i < arra.size() - 1; i++)
    // {
    //     for (int j = i-1; j >= 0; j--)
    //     {
    //         if (arra[i] >  arra[j]){
    //             arra
    //         }
    //     }
    // }
}
