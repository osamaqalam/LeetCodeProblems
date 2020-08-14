class Solution {
public:
    int subtractProductAndSum(int n) {
        int i = 10;
        int digit = (n % i) / (i/10);
        int sum = digit;
        int product = digit;
        

        while (i > n)
        {
            i *= 10;
            digit = (n % i) / (i/10);

            sum += digit;
            product *= digit;          
        }
        
        return product - sum;
    }
};