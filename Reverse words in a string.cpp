class Solution {
public:
    string reverseWords(string s) {
        vector<string>str;
        string result="";
        int n=s.size();
        string k="";
        for(int i=0;i<n;i++)
        {
            if(s[i] == ' ')
            {
                if(!k.empty())
                {
                   str.push_back(k);
                   k="";
                }

            }
            else
            {
                k+=s[i];
            }
        }
        if(!k.empty())                 //This block of code is important to push last word after coming out of loop
        {
            str.push_back(k);
        }
        reverse(str.begin(),str.end());
        int l=str.size();
        for(int i=0;i<l;i++)
        {
            result+=str[i];
            if(i!=l-1)
            {
               result+=" ";
            }

        }
        return result;
    }
};
