class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i = 1; i<=n; i++)
        {
            
            for (int m = n; m >= i; m--)
            {
                cout << "*";
            }
            
            for(int j = 1; j<i; j++)
            {
                cout << " ";
            }
            
            for (int l = i; l > 1; l--)
            {
                cout << " ";
            }
            
            for (int k = n; k >= i; k--)
            {
                cout << "*";
            }
            
            cout << endl;
            
        }
        
        
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                cout << "*";
            }
            
            for (int m = n-1; m >= i; m--)
            {
                cout << " ";
            }
            
            for (int k = n-1; k >= i; k--)
            {
                cout << " ";
            }
            
            for (int l = i; l >= 1; l--)
            {
                cout << "*";
            }
            
            cout << endl;
            
        }
    }
};