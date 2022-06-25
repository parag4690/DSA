#include <iostream>
#include <set>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t,n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    set<int> gr;
	    for(int i = 0 ; i < n ; i++)
	    {
	        int numb;
	        cin >> numb;
	        if(numb!=0)
	           gr.insert(numb);
	    }
	    
	    cout << gr.size() << endl;
	}
	return 0;
}
