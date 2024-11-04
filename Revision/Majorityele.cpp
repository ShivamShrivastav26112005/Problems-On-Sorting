// // sorting the array but it is not used.

// #include <iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     // we find the array size
//     // int arr[] = { 20, 23, 23, 45, 78, 88 };
//     // int n = sizeof(arr) / sizeof(arr[0]);
//     int arr[] = {5, 1, 3, 2, 2,5,5,5,5,5, 6, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     // we have to check majority elemenets
//     sort(arr,arr+n);
//       for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }




// #include <iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
// int n=6;
//     int arr[] = {8,1,3,2,4,5 };

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // sort the array using bubble sort
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0; j<n-1; j++){
//             if(arr[j]>arr[j+1]){
            
//             swap(arr[j],arr[j+1]);
            
//         }
//     }
//     }
//     cout<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

 




 // this is the correct majority ele. code.

#include <iostream>
using namespace std;
int main()
{
    // we take an array
    int arr[] = {1, 0,4,5,4,4,4,4,44,4,4,4,444,4,4, 6,6, -30};
    int n = 18; //array size
    // we print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
 
 // sorting -> use - bubble sort
    for (int i = 0; i < n - 1; i++) // n-1 passes
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // after sorting we print sorted array
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout<<endl;

// check -> majority elemenets 
    for (int i = 0; i < n ; i++) 
    {
        int count=1;
        for (int j = i+1; j < n ; j++)
        {
          if(arr[i]==arr[j])
          count++;
        }
        if(count>(n/2)) cout<<arr[i];
    }
    return -1;
}





// again we solve the upper same problem
// find the majority elements 
// majority ele. appears more than n/2 time
// given array and size-n

// how to find the majority ele.
// algorithm
// step:1- sort the array 
// step:2- make a count variable and check if 1st ele == 2nd ele. then count++
// step:3-if(count>(n/2)) cout<<arr[i];



