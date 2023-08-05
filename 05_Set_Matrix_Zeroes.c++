class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int n = m.size();
        int m1 = m[0].size();
        unordered_set <int> r;
        unordered_set <int> c;
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < m1; j++)
            {
                if(m[i][j] == 0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < m1; j++)
            {
                if(r.count(i) > 0 | c.count(j) > 0)
                {
                    m[i][j] = 0;
                }
            }
        }
    }
};
