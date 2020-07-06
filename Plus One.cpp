class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int i,c = 1,sum;
        for(i=digits.size()-1;i>=0;i--)
        {
            sum = digits[i] + c;
            digits[i] = sum%10;
            c = sum/10;
        }
        if(c)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
