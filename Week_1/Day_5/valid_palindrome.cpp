class Solution {
public:
string cleanString(string s)
{
    string ans = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(isalnum(s[i]))  
        {
            ans += tolower(s[i]);
        }
    }

    return ans;
}
bool check(string &neww,int left,int right)
{
    if(left>=right)
    {
        return true;
    }
    if(neww[left]!=neww[right]){
        return false;
    }
   return  check(neww,left+1,right-1);
}

    bool isPalindrome(string s) {
        string neww = cleanString(s);
        return check(neww, 0, neww.length() - 1);
    

    }
};
