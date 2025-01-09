/*
    Initial Array: [12, 34, 54, 2, 3]

Pass 1: Gap = 2
Elements Compared: [12, 54], [34, 2], [54, 3]

Reordering:

Compare and swap 12 and 54: [12, 34, 54, 2, 3]

Compare and swap 34 and 2: [12, 2, 54, 34, 3]

Compare and swap 54 and 3: [12, 2, 3, 34, 54]

Array after Pass 1: [12, 2, 3, 34, 54]

Pass 2: Gap = 1
Elements Compared: Regular insertion sort (adjacent elements)

Reordering:

Compare and swap 12 and 2: [2, 12, 3, 34, 54]

Compare and swap 12 and 3: [2, 3, 12, 34, 54]

No further swaps needed as array is already sorted

Array after Pass 2: [2, 3, 12, 34, 54]
*/

// # for loops one for passes, one for traversing one usual one
/*for (int gap = n / 2; gap > 0; gap /= 2)
{
    for (int i = gap; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
        {
            arr[j] = arr[j - gap];
        }
        arr[j] = temp; */