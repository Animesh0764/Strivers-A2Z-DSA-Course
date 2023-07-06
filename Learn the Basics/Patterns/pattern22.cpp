class Solution {
  public:
    void printSquare(int n) {
        // code here
        int len = (2*n)-1;
        int matrix[len][len];
        
        for(int i = 0; i<len; i++)
        {
            for(int j = i; j<len-i; j++)
            {
                for(int k = i; k<len-i; k++)
                {
                    matrix[j][k] = n-i;
                }
            }
        }
        
        for(int i = 0; i<len; i++)
        {
            for(int j = 0; j<len; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};