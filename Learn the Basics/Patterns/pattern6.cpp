class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    int k = 1;
	    for(int i = n; i>0; i--)
        {
            for(int j = 0; j<i; j++)
            {
                cout << k << " ";
                k++;
            }
            k=1;
            cout << endl;
        }
	}
};