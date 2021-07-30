#include<bits/stdc++.h>

using namespace std;

int main()
{
	int H[] = {20, 15, 10, 5, 25};
	int h_size = sizeof(H)/sizeof(H[0]);
	int B[] = {5, 10, 15, 20, 25, 30, 4, 9, 14, 19};
	int b_size = sizeof(B)/sizeof(B[0]);
	int ans[b_size] = {-1};
	// cout<<h_size<<" "<<b_size<<endl;
	for (int i = 0; i <b_size; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	for (int i = 0; i < b_size; i++)
	{
		for (int j = 0; j < h_size; j++)
		{
			if(ans[b_size-i-1] == -1)
			{
				ans[b_size-i-1] = b_size-i-1;
				cout<<b_size-i-1<<" : "<<ans[b_size-i-1]<<endl;
			}
			if(ans[b_size-i-1]>0 && H[j] >= B[i])
			{
				ans[b_size-i-1] -= 1;
			}
		}
	}
	for (int i = 0; i < h_size; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	

	return 0;
}