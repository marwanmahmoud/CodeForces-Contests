    #include <stack>
    #include <iostream>
    #include <string>
    #include <algorithm>
     
    using namespace std;
     
    // Function to check if array has 2 elements 
    // whose sum is equal to the given value 
    bool hasArrayTwoCandidates(long A[], long arr_size,
        long sum)
    {
        int l, r;
     
        /* Sort the elements */
        sort(A, A + arr_size);
     
        /* Now look for the two candidates in
           the sorted array*/
        l = 0;
        r = arr_size - 1;
        while (l < r) {
            if (A[l] + A[r] == sum)
                return 1;
            else if (A[l] + A[r] < sum)
                l++;
            else // A[i] + A[j] > sum 
                r--;
        }
        return 0;
    }
     
    /* Driver program to test above function */
    int main()
    {
        long size, num, x;
        long* p;
        cin >> size >> num;
        p = new long[size];
        for (long i = 0; i < size; i++)
        {
            cin >> x;
            p[i] = x;
     
      }
        if (hasArrayTwoCandidates(p, size, num))
            cout << "YES";
        else
            cout << "NO";
     
        return 0;
    }