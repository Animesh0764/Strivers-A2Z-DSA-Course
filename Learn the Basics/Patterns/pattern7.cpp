class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 1; i<=n; i++)
        {
            int k = 2*i-1;
            
            for(int l = n; l>i; l--)
            {
                cout << " ";
            }
            
            for(int j = 1; j<=k; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};