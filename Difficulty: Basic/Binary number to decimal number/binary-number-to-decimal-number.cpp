class Solution {
  public:
    int binaryToDecimal(string &b) {
        int  dec=0;
        int  bin=1;
        for(int i=b.length()-1;i>=0;i--)
        {
            dec=dec+(int(b[i]-'0')*bin);
            bin=bin*2;
            
        }
        return dec;
    }
};