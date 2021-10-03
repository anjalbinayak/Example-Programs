Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
The replacement must be in place and use only constant extra memory.
Example 1:
Input: nums = [1,2,3]
Output: [1,3,2]

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        if(n == 1)return ;        
        int ind1 = -1;
        for(int i = n-2;i>=0;i--)
        {
            if(a[i] < a[i+1])
            {
                ind1 = i;
                break;
            }
        }
        // cout<<ind1<<endl;
        if(ind1 == -1)
        {
            reverse(a.begin(),a.end());
            return;
        }
        
        for(int i = n-1;i>ind1;i--)
        {
            if(a[i] > a[ind1])
            {
                // cout<<a[i]<<endl;
                swap(a[i],a[ind1]);
                ind1++;
                reverse(a.begin() + ind1,a.end());
                break;
            }
        }
        
        return;
    }
};
