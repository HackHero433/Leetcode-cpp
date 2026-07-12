class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();

   
        vector<int> temp = arr;

    
        sort(temp.begin(), temp.end());

  
        unordered_map<int, int> rankMap;
        int rank = 1;


        for (int x : temp) {
            if (rankMap.count(x) == 0) {
                rankMap[x] = rank;
                rank++;
            }
        }

        // Replace each element with its rank
        for (int i = 0; i < n; i++) {
            arr[i] = rankMap[arr[i]];
        }

        return arr;
    }
};