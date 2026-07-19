class Solution {
public:
    string smallestSubsequence(string s)
    {
        bool visited[26] = {false};
        int freq[26] = {0};
        string ans = "";
        stack<char> st;
        int n = s.length();

        for(int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        for(int i = 0; i < n; i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                visited[s[i] - 'a'] = true;
                freq[s[i] - 'a']--;
            }
            else
            {
                char c = s[i];
                freq[c - 'a']--;

                if(visited[c - 'a'])
                    continue;
                else
                {
                    while(!st.empty() && st.top() > c && freq[st.top() - 'a'] > 0)
                    {
                        visited[st.top() - 'a'] = false;
                        st.pop();
                    }

                    st.push(c);
                    visited[c - 'a'] = true;
                }
            }
        }   

        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};