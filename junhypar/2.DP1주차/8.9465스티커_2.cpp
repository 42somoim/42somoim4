#include <iostream>

using namespace std;

int main()
{
	int cnt;
	cin >> cnt;
	int **data;
	int **out;
	int len;
	for(int cnt_i = 0; cnt_i < cnt; cnt_i++)
	{
		cin >> len;
		data = (int **)malloc(sizeof(int *) * len);
		out = (int **)malloc(sizeof(int *) * len);
		for(int ma = 0; ma < len; ma ++)
		{
			data[ma] = (int *)malloc(sizeof(int) * 2);
			out[ma] = (int *)malloc(sizeof(int) * 2);
			cin>>data[ma][0];
		}
		for(int ma = 0; ma < len; ma ++)
		{
			cin>>data[ma][1];
		}
		out[0][0] = data[0][0];
		out[0][1] = data[0][1];
		out[1][0] = data[0][1] +data[1][0];
		out[1][1] = data[0][0] + data[1][1];
		
		for(int i = 2; i < len; i++)
		{
			out[i][1] = (out[i-1][0] > out[i-2][0] ? data[i][1] + out[i-1][0] : data[i][1] + out[i-2][0]);
			out[i][0] = (out[i-1][1] > out[i-2][1] ? data[i][0] + out[i-1][1] : data[i][0] + out[i-2][1]);
		}
		cout << (out[len - 1][1] > out[len - 1][0] ? out[len-1][1] : out[len-1][0])<<endl;
		for(int ma = 0; ma < len; ma++)
		{
			free(data[ma]);
			free(out[ma]);
		}
		free(data);
		free(out);
	}
}

