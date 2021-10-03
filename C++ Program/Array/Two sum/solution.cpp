class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int b=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    a.push_back(i);
                    a.push_back(j);
                    b++;
                    break;
                }
            }
            if(b>0){
                break;
            }
        }
        return a;
    }
};

Time Complexity - O(n2)
Space Complexity - O(1)



class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        
        unordered_map<int,int>m;int i=0,x;vector<int>v;
        for(;i<n.size();i++)
        {
            x=target-n[i];
            if(m[x])
                break;
            m[n[i]]=i+1;
        }
        v.push_back(i);
        v.push_back(m[x]-1);
        return v;
    }
};

Time Complexity - O(n)
Space Complexity - O(n)