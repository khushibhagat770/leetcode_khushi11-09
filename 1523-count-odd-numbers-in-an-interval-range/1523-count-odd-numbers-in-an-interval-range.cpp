class Solution {
public:
    int countOdds(int low, int high) {
        int num = low;
        int count =0;
        while(num>=low && num<=high){
            if(num%2 != 0){
                count++;
            }
            num++;
        }
        return count;
    }
};