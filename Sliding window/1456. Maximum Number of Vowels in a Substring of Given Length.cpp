class Solution {
public:
    int maxVowels(string s, int k) {
        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        set<char> vowels ; int maxvowels=0; int currvowels =0;
        vowels.insert('a');vowels.insert('e');vowels.insert('i');
        vowels.insert('o');vowels.insert('u');

        for(int i =0;i<k;i++){
           if(vowels.find(s[i])!=vowels.end()){currvowels++;}
        }

        maxvowels= max(currvowels,maxvowels);

        for(int i =k;i<s.size();i++){
            if(vowels.find(s[i-k])!=vowels.end()){
                currvowels--;
            }
            if(vowels.find(s[i])!=vowels.end()){
                currvowels++;
            }

            maxvowels= max(currvowels, maxvowels);
        }
        
        return maxvowels;
    }
};

// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         ios::sync_with_stdio(false);
//         cin.tie(0);
//         cout.tie(0);

//         int vCount = 0;
//         for(int i=0; i<k; i++){
//             if(isVowel(s[i])) vCount++;
//         }

//         int maxV = vCount;
//         int n = s.size() - k + 1;
//         for(int i=0; i<n; i++){
//             vCount = vCount - isVowel(s[i]) + isVowel(s[i+k]);
//             maxV = max(vCount, maxV);
//         }

//         return maxV;
//     }

    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u';
    }
};
