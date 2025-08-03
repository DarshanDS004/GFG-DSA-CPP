class Solution {
  public:
    string isPrime(int n) {
        if(n<2)
        return "No";

        

        for (int i = 2; i <= sqrt(n); i++) {
           if(n%i==0)
           return "No";
        }
        return "Yes";
    }
};