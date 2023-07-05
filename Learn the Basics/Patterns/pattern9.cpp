class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i = 1; i<=n; i++)
        {
            for(int l = n; l>i; l--)
            {
                cout << " ";
            }
            
            for(int j = 1; j<=i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        
        for(int i = n; i>0; i--)
        {
            
            for(int l = n; l>i; l--)
            {
                cout << " ";
            }
            
            for(int j = 1; j<=i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
};