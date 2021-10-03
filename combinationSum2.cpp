class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> sol;
        vector<int> cur;
        set<int> s;
        sort(candidates.begin(), candidates.end());
        map<int, int> m;
        for (auto x : candidates) {
            m[x]++;
            s.insert(x);
        }
        vector<int> pass(s.begin(), s.end());
        int pos = 0;
        solve(sol, cur, m, target, pos, pass);
        vector<vector<int>> res;
        for (auto it = sol.begin(); it != sol.end(); it++) {
            res.push_back(*it);
        }
        return res;
    }
    
    void solve(vector<vector<int>> &v, vector<int> &cur, map<int, int> &m, int target, int pos, vector<int>& candidates) {
        
        if (target == 0) {
            vector<int> curr = cur;
            sort(curr.begin(), curr.end());
            v.push_back(curr);
            return;
        }
    
        
        for (int i = pos; i < candidates.size(); i++) {
            if (target - candidates[i] < 0 || m[candidates[i]] == 0) {
                continue;
            }
            else {
                target -= candidates[i];
                m[candidates[i]]--;
                cur.push_back(candidates[i]);
                solve(v, cur, m, target, i, candidates);
                target += candidates[i];
                m[candidates[i]]++;
                cur.pop_back();
            }
        }
    }
};
