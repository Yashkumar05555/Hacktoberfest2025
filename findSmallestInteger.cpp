class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
     unordered_map<int,int> store;
     for(int i=0;i<nums.size();i++){
        int a = (nums[i] % value + value) % value;

        store[a]++;
     }
     for(int i=0;i<nums.size();i++){    //?
           int a=i%value;
          if (store.find(a) != store.end()){
            store[a]--;
            if(store[a]==0){
              store.erase(a);
            }
          }else{
            return i;
          }
     } return nums.size();
    }
};
