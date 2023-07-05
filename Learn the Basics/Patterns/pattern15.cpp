class Solution {
  public:
    void printTriangle(int n) {
        // code here
        char k = 'A';
        for(int i = n; i>0; i--)
        {
            for(int j = i; j>0; j--)
            {
                cout << k;
                k++;
            }
            cout << endl;
            k = 'A';
        }
    }
};