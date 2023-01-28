#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isReflected(vector<vector<int>>& points)
    {
        set<vector<int> > ok;
        int n = points.size();
        int minVal = INT_MAX;
        int maxVal = INT_MIN;
        for (int i = 0; i < n; i++) {
            minVal = min(minVal, points[i][0]);
            maxVal = max(maxVal, points[i][0]);
            ok.insert(points[i]);
        }
        int mid = maxVal + minVal;
        for (int i = 0; i < n; i++) {
            int x = points[i][0];
            int y = points[i][1];
            x = mid - x;
            if (!ok.count({ x, y }))
                return false;
        }
        return true;
    }
};
main()
{
    Solution ob;
    vector<vector<int>> v = {{1,1},{-1,1}};
    cout << (ob.isReflected(v));
}