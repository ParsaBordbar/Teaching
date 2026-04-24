#include <stdio.h>
#include <stdlib.h>

        void towerOfHanoi(int n, char from_rod, char to_rod, char helper_rod)
    {
        if (n == 1)
        {
            printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
            return;
        }
        towerOfHanoi(n-1, from_rod, helper_rod, to_rod);
        printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
        towerOfHanoi(n-1, helper_rod, to_rod, from_rod);
    }


    int main()
    {
        int n = 4; // Number of disks
        towerOfHanoi(n, \'A\', \'C\', \'B\');  // A, B and C are names of rods
        return 0;
    }
