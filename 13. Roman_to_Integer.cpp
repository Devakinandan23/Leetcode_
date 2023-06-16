//solution from discussions
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m={{'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}};
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()||st.top()>=m[s[i]]){
                st.push(m[s[i]]);
            }
            else{
                int val=m[s[i]]-st.top();
                st.pop();
                st.push(val);
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};

// my old code
class Solution {
public:
    int romanToInt(string s) 
    {
        vector<int>v;
        int n = s.size();
        if(s[0] == 'I')
        {
            v.push_back(1);
        }
        else if(s[0] == 'V')
        {
            v.push_back(5);
        }
        else if(s[0] == 'X')
        {
            v.push_back(10); 
        }
        else if(s[0] == 'L')
        {
            v.push_back(50);
        }
        else if(s[0] == 'C')
        {
            v.push_back(100);
        }
        else if(s[0] == 'D')
        {
            v.push_back(500);
        }
        else if(s[0] == 'M')
        {
            v.push_back(1000);
        }
        for(int i = 1;i < n;i++)
        {
        if(s[i] == 'I')
        {
            v.push_back(1);
            continue;
        }
        else if(s[i] == 'V')
        {
            if(s[i-1] == 'I')
            {
                v.push_back(3);
                continue;
            }
            v.push_back(5);
            continue;
        }
        else if(s[i] == 'X')
        {
            if(s[i-1] == 'I')
            {
                v.push_back(8);
                continue;
            }
            v.push_back(10);
            continue;
        }
        else if(s[i] == 'L')
        {
            if(s[i-1] == 'X')
            {
                v.push_back(30);
                continue;
            }
            v.push_back(50);
            continue;
        }
        else if(s[i] == 'C')
        {
            if(s[i-1] == 'X')
            {
                v.push_back(80);
                continue;
            }
            v.push_back(100);
            continue;
        }
        else if(s[i] == 'D')
        {
            if(s[i-1] == 'C')
            {
                v.push_back(300);
                continue;
            }
            v.push_back(500);
            continue;
        }
        else if(s[i] == 'M')
        {
            if(s[i-1] == 'C')
            {
                v.push_back(800);
                continue;
            }
            v.push_back(1000);
            continue;
        }
        }
     
        return accumulate(v.begin(),v.end(),0);
    }
};


