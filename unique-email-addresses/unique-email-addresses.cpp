class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set <string> emailSet;
        for (string s: emails) {
            string ans = "";
            for (int i = 0; i < s.size(); i++) {
                if(s[i]=='+') {
                    while(i < s.size() && s[i] != '@') {
                        i++;
                    }
                    ans += s[i];
                }
                else if(s[i]!='.' || ans.find("@") != std::string::npos) {
                    ans += s[i];
                }
            }
            cout<<ans;
            emailSet.insert(ans);
        }
        return emailSet.size();
    }
};