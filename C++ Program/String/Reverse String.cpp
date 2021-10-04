// Write a function to reverse the string.
// Input : s = ["h","e","l","l","o"]
// output :  ["o","l","l","e","h"]

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0,end=s.size()-1;  //start and end pointers.
        while(start<end){
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }  
    }
};
