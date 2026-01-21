class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0,high=letters.size()-1;
        if(letters[high]<=target)return letters[low];
        char ans='z';
        while(low<=high){
            int mid=(low+high)/2;
            if(mid>-1&&letters[mid]>target){
                ans=char(min(ans,letters[mid]));
                high=mid-1;
            }
            else if(mid>-1&&letters[mid]<=target)low=mid+1;
        }
        return ans;
        }
};