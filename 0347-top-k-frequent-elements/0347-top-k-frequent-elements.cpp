class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n= nums.size();
      
struct cmp {
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        return a.first > b.first;   // Min heap based on frequency
    }
};


  priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;

        unordered_map<int,int> f;
         for(int i=0;i<n;i++){
            f[nums[i]]++;
         }

         for(auto i : f){
            int element = i.first;
            int frequency = i.second;

             pair<int,int>curr = {frequency,element};
          if(pq.size()<k){
            pq.push(curr);
           
          } else if(curr.first>pq.top().first){
            

            pq.pop();
            pq.push(curr);
          }
         }

        

          vector<int>ans;
          while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
          }
         
         return ans;
    }
};