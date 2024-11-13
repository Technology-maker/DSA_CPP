// largest element in array

// #include <bits/stdc++.h>
// using namespace std;

// void greatestelement(int array[], int size);

// int main()
// {
//     int array[20] = {345, 65, 345, 7, 643, 59, 854, 35, 98};
//     int size = sizeof(array) / sizeof(array[0]);

//     greatestelement(array, size);

//     return 0;
// }

// void greatestelement(int array[], int size)
// {
//     int max = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (array[max] < array[i])
//         {
//             max = i;
//         }
//     }
//     cout << array[max];
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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int array[18] = {654, 235, 876, 234, 765, 237, 65, 2376, 236, 3456, 5, 445, 65};

//     int maximum = 0;
//     int size = sizeof(array) / sizeof(array[0]);
//     for (int i = 0; i < size; i++)
//     {
//         if (array[maximum] < array[i])
//         {
//             maximum = i;
//         }
//     }
//     cout << "maximum of array " << array[maximum];
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
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> array = {2, 4, 2, 67, 98, 3, 5, 87, 3, 2};

//     int temperary = array[0];
//     for (int i = 1; i < array.size(); i++)
//     {
//         array[i - 1] = array[i];
//     }

//     array[array.size() - 1] = temperary;

//     for (int i = 0; i < array.size(); i++)
//     {
//         cout << "element = " << array[i] << endl;
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
// reverse of a string
//
//
//
//
// #include <bits/stdc++.h>
// using namespace std;
// void strsrverse(char name[], int length);
// int main()
// {
//     char name[20];
//     cout << "enter your name = ";
//     cin.getline(name, 20);
//     int length = strlen(name);

//     strsrverse(name, length);

//     cout << "Reversed name: " << name << endl;

//     return 0;
// }

// void strsrverse(char name[], int length)
// {
//     int i = 0;
//     int j = length - 1;
//     while (i < j)
//     {
//         swap(name[i], name[j]);
//         i++;
//         j--;
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
// string palendrome code
//

//
//

// #include <bits/stdc++.h>
// using namespace std;

// bool palendrome(string str, int i, int j);
// int main()
// {
//     string str;
//     cout << "enter your string = ";
//     cin >> str;

//     // to cheak its pLENDROME OR not

//     int i = 0;
//     int j = str.size() - 1;

//     int vlue = palendrome(str, i, j);

//     if (vlue == 0)
//     {
//         cout << "not palendrome !";
//     }
//     else if (vlue == 1)
//     {
//         cout << "this is palendrome !";
//     }
//     else
//     {
//         cout << "invalid operation ! ";
//     }

//     return 0;
// }

// bool palendrome(string str, int i, int j)
// {
//     while (i < j)
//     {
//         if (str[i] != str[j])
//         {
//             return 0;
//         }
//         else
//         {
//             i++;
//             j--;
//         }
//     }
//     return 1;
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

// sorting of 0s,1s,2s

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     array<int, 20> arr = {1, 2, 0, 0, 1, 0, 2, 0, 1, 1, 1, 2, 0, 1, 2, 1, 1, 2, 0, 0};

//     int count1 = 0;
//     int count2 = 0;
//     int count3 = 0;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == 0)
//         {
//             count1++;
//         }
//         else if (arr[i] == 1)
//         {
//             count2++;
//         }
//         else
//         {
//             count3++;
//         }
//     }

//     for (int i = 0; i < count1; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = count1; i < count1 + count2; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = count1 + count2; i < count1 + count2 + count3; i++)
//     {
//         arr[i] = 2;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout <<"element = "<<arr[i]<<endl;
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
// rearange array element
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr1 = {-1, -3, 6, 7, 8, -2};
//     int n = arr1.size();
//     vector<int> ans(n);
//     int pos = 0;
//     int neg = 1;

//     for (int i = 0; i < arr1.size(); i++)
//     {
//         if (arr1[i] < 0 && neg <= arr1.size())
//         {
//             ans[neg] = arr1[i];
//             neg += 2;
//         }
//         else if (arr1[i] > 0 && pos <= arr1.size())
//         {
//             ans[pos] = arr1[i];
//             pos += 2;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << " " << ans[i] << endl;
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

