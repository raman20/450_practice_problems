//merging two sorted arrays without using extra space

#include <bits/stdc++.h>
using namespace std;

void merge(int ar1[], int size1, int ar2[], int size2)
{
    int j = 0;
    for (int i = size1 - 1; i >= 0 && j < size2; --i)
    {
        if (ar2[j] < ar1[i])
        {
            std::swap(ar2[j], ar1[i]);
            j++;
        }
    }
    std::sort(ar1, ar1 + size1);
    std::sort(ar2, ar2 + size2);
}

int main()
{
    int ar1[] = {4, 5, 6, 7, 8};
    int ar2[] = {3, 4, 5, 8, 10, 20};

    //output -> 3 4 4 5 5 6 7 8 8 10 20;

    merge(ar1, sizeof(ar1) / sizeof(int), ar2, sizeof(ar2) / sizeof(int));

    for (int i = 0; i < sizeof(ar1) / sizeof(int); i++)
    {
        cout << ar1[i] << " ";
    }
    for (int i = 0; i < sizeof(ar2) / sizeof(int); i++)
    {
        cout << ar2[i] << " ";
    }
    return 0;
}
