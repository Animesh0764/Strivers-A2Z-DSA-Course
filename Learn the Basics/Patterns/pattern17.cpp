class Solution {
  public:
    void printTriangle(int n) {
        // code here
        char c = 'A';
        for(int i = 1; i<=n; i++)
        {
            for(int k = n; k>i; k--)
            {
                cout << " ";
            }
            
            for(int j = 1; j<=i; j++)
            {
                cout << c++;
            }
            
            c--;
            
            for(int l = 1; l<i; l++)
            {
                cout << --c;
            }
            cout << endl;
            c='A';
        }
    }
};