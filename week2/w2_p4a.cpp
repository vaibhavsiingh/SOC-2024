#include <bits/stdc++.h>
using namespace std;

// struct to hold the range information
struct ranges {
    // The left and right ends of the range and its index in
    // the input order
    int l, r, in;

    // Overloads the < operator for sorting
    bool operator<(const ranges& other) const
    {
        // If left ends are equal, the range with larger
        // right end comes first
        if (l == other.l)
            return r > other.r;
        // Otherwise, the range with smaller left end comes
        // first
        return l < other.l;
    }
};

// Function to determine for each range if it contains some
// other range and if some other range contains it.
vector<vector<int> > checkrange(vector<vector<int> >& r,
                                int n)
{
    vector<ranges> range(n);
    vector<int> contains(n), contained(n);

    for (int i = 0; i < n; i++) {
        range[i].l = r[i][0];
        range[i].r = r[i][1];
        range[i].in = i;
    }

    // Sorts the ranges
    sort(range.begin(), range.end());

    // Checks if a range contains another
    int minEnd = 2e9;
    for (int i = n - 1; i >= 0; i--) {
        // If the right end of the current range is greater
        // than minEnd, it contains another
        if (range[i].r >= minEnd)
            contains[range[i].in] = 1;

        // Update minEnd
        minEnd = min(minEnd, range[i].r);
    }

    // Checks if a range is contained by another
    int maxEnd = 0;
    for (int i = 0; i < n; i++) {
        // If the right end of the current range is less
        // than maxEnd, it is contained by another
        if (range[i].r <= maxEnd)
            contained[range[i].in] = 1;

        // Update maxEnd
        maxEnd = max(maxEnd, range[i].r);
    }

    // Returns the contains and contained vector
    return { contains, contained };
}

// Driver code
int main()
{
    int n = 4;
    // Example 1
    vector<vector<int> > r
        = { { 1, 6 }, { 2, 4 }, { 4, 8 }, { 3, 6 } };
    vector<vector<int> > res = checkrange(r, n);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}