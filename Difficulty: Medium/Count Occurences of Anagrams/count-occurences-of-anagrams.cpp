
class Solution {
public:
    int search(string &pat, string &txt) {
        int i = 0, j = 0;
        int k = pat.size();
        int ans = 0;
        int n = txt.size();

        unordered_map<char, int> umap;

       for(int i=0;i<k;i++){
           umap[pat[i]]++;
       }

        int count = umap.size();

        while (j < n) {

        
            umap[txt[j]]--;
            if (umap[txt[j]] == 0) count--;

            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {
                if (count == 0) ans++;

                
                umap[txt[i]]++;
                if (umap[txt[i]] == 1) count++;

                i++;
                j++;
            }
        }

        return ans;
    }
};