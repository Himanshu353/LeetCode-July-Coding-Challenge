class Solution {
public:
    int nthUglyNumber(int n)
    {
        if(n<=0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        vector<int>arr(n,1);
        int c2=0,c3=0,c5=0;
        for(int i=1;i<n;i++)
        {
            int un = min({arr[c2]*2,arr[c3]*3,arr[c5]*5});
            if(un == arr[c2]*2)
            {
                c2++;
            }
            if(un == arr[c3]*3)
            {
                c3++;
            }
            if(un == arr[c5]*5)
            {
                c5++;
            }
            arr[i] = un;
        }
        return arr[n-1];
    }
};
