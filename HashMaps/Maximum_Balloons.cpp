class Solution {
    int ans(unordered_map<char,int>&hash_text,unordered_map<char,int>&hash_balloon){
        int min_res=INT_MAX;
        for(auto i:hash_balloon){
            char ch=i.first;
            int freq_balloon=i.second;
            int freq_text=hash_text[ch];
            int res=freq_text/freq_balloon;
            min_res=min(min_res,res);
        }
        return min_res;
    }
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> hash_text;
        unordered_map<char,int> hash_balloon;
        int n1=text.size();
        string balloon="balloon";
        int n2=balloon.size();
        for(int i=0;i<n1;i++){
            hash_text[text[i]]++;
        }
        for(int i=0;i<n2;i++){
            hash_balloon[balloon[i]]++;
        }
        return ans(hash_text,hash_balloon);
        
    }
};
