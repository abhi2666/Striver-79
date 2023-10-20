// peak element.. where element to its right and left is smaller than it
/*
There can be multiple peak elements and you have to return any element
you get first..and element at index -1 and index n are -infinity
so if array is asc sorted or desc sorted then the element at the very last
will be the peak element..
*/

class Solution
{
public:
    int findPeakElement(vector<int> &arr)
    {
        // check for first, last elements
        int n = arr.size();
        if (n == 1)
        {
            // only single element
            return 0; // we have to return indexes
        }
        if (arr[0] > arr[1])
        {
            // means this element is peak element
            return 0;
        }
        if (arr[n - 1] > arr[n - 2])
            return n - 1;
        int low = 1, high = n - 2;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            // If arr[mid] is the peak:
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
                return mid;

            // If we are in the left:
            if (arr[mid] > arr[mid - 1])
                low = mid + 1;

            // If we are in the right:
            // Or, arr[mid] is a common point:
            else
                high = mid - 1;
        }
        // Dummy return statement
        return -1;
    }
};