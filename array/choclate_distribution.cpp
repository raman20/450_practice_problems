#include <bits/stdc++.h>
using namespace std;

int main()
{
    //------------------test-input------------------------
    int choc_pack[] = {3,4,1,9,56,7,9,12};
    int size = sizeof(choc_pack)/sizeof(choc_pack[0]);
    int students = 5;
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
