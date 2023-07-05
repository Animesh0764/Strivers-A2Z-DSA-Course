class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                cout << j << " ";
            }
            
            for (int m = n-1; m >= i; m--)
            {
                cout << "  ";
            }
            
            for (int k = n-1; k >= i; k--)
            {
                cout << "  ";
            }
            
            for (int l = i; l >= 1; l--)
            {
                cout << l << " ";
            }
            
            cout << endl;
            
        }
        
    }
};