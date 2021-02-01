#include <bits/stdc++.h>
using namespace std;

void subset(int arr1[], int arr2[])
{
    int i{0},j{0};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    while(true)
    {
        if(j == s2)
        {
            cout << "is a subset\n";
        }

        if(i == s1)
        {
            cout << "not a subset\n";
        }

        
        if(arr1[i] == arr2[j])
        {
            i++;
            j++;
        }
        else if(arr1[i]!=arr2[j])
        {
            i++;
        }
    }

int main()
{
    int arr1[] = {1,3,5,4,2};
    int arr2[] = {1,2,3};
    std::sort(arr1,arr1+(sizeof(arr1)/sizeof(arr1[0])));
    std::sort(arr2,arr2+(sizeof(arr2)/sizeof(arr2[0])));


    return 0;
}
