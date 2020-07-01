/*n = 5

The coins can form the following rows:
¤
¤ ¤
¤ ¤

Because the 3rd row is incomplete, we return 2.*/

class Solution {
public:
    int arrangeCoins(int n)
    {
        int x = 1;
        while(n>0)
        {
            if(n >= x)
            {
                n -= x;
                x++;
            }
            else
            {
                break;
            }
        }
        return x-1;
    }
};
