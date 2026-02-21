class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int>f; //hashmap for calculating frequencies of all characters
        int res=0;
        bool odd=false;//to track if odd frequencies exists
        //inserting into hash_map
        for(int i=0;i<n;i++){
            f[s[i]]++;
        }
        //RULE:A-> if frequency is even add it directly to resultant
        //RULE:B-> if frequency is odd add freq-1(even) to resultant
        for(auto i:f){
            if((i.second)%2==0){
                res+=i.second;
            }
            if((i.second)%2==1){
                res+=i.second-1;
                odd=true;
            }
     

        }
    if(odd)res+=1;
    return res;
    
    }
};
