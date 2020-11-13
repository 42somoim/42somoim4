#include <iostream>

using namespace std;

int main()
{
	int cnt;
	cin >> cnt;
	int **data;
	int len;
	int x;
	int d_x, d_y;
	int all;
	for(int cnt_i = 0; cnt_i < cnt; cnt_i++)
	{
		cin >> len;
		x = 0;
		d_x = 0;
		d_y = 0;
		all = 0;
		data = (int **)malloc(sizeof(int *) * len);
		for(int ma = 0; ma < len; ma ++)
		{
			data[ma] = (int *)malloc(sizeof(int) * 2);
			cin>>data[ma][0];
		}
		for(int ma = 0; ma < len; ma ++)
		{
			cin>>data[ma][1];
		}
		while(x!=len)
		{
			if(data[x][0] == -1 && data[x][1] == -1)
			{
				x++;
				d_x = x;
				d_y = 0;
			}
			else if (d_y == 0 && data[d_x][d_y] < data[d_x][1])
				d_y = 1;
			else if (d_y == 1 && data[d_x][d_y] < data[d_x][0])
				d_y = 0;
			else if (d_x != len - 1 && data[d_x][d_y] < data[d_x + 1][d_y])
				d_x++;
			else
			{
				all += data[d_x][d_y];
				data[d_x][0] = -1;
				data[d_x][1] = -1;
				if(d_x != 0)
					data[d_x - 1][d_y] = -1;
				if(d_x != len - 1)
					data[d_x + 1][d_y] = -1;
				d_x = x;
				d_y = 0;
			}
		}
		cout << all << endl;
		for(int ma = 0; ma < len; ma++)
			free(data[ma]);
		free(data);
	}
}

