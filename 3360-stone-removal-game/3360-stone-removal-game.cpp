
class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        int turn = 0;

        while(n != 0) {
            if(n >= remove) {
                n = n - remove;
                remove--;
                turn++;
            }
            else {
                return turn % 2 == 1;
            }
        }

        return turn % 2 == 1;
    }
};
