class Solution {
  public:
    bool isPalinSent(string &s) {
        int n=s.length();
        int low=0,high=n-1;
        while(low<high)
        {
            while(low<high&&!isalnum(s[low]))
            {
                
                low++;
                
                
            }
            
            
              while(low<high&&!isalnum(s[high]))
            {
                
                high--;
                
                
            }
            if(tolower(s[low])!=tolower(s[high]))
            return false;
            low++;
            high--;
        }
        return true;
        
    }
};