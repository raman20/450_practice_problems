#include <bits/stdc++.h>
using namespace std;

int main()
{
    //------------------test-input------------------------
    int choc_pack[] = {7,3,2,4,9,12,56};
    int size = sizeof(choc_pack)/sizeof(choc_pack[0]);
    int students = 3;
    //----------------------------------------------------

    int min_diff{INT_MAX};
    std::sort(choc_pack,choc_pack+size);

    if(size >= students)
    {
      int diff;
        for(int i{0}; i < (size-students); ++i)
        {
            diff = choc_pack[i] - choc_pack[i+students-1];
            if(min_diff > std::abs(diff))
            {
                min_diff = std::abs(diff);
            }
        }

        cout << min_diff << endl;
    }
    else
    {
        return -1;
    }

    return 0;
}
