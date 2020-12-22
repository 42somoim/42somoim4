#include <iostream>
using namespace std;

typedef struct	qst
{
	int x;
	int y;
}				t_qst;

void swap(t_qst *data, int i, int j)
{
	t_qst a;

	a = data[i];
	data[i] = data[j];
	data[j] = a;
}

int	sorting(t_qst *data, int left, int right)
{
	int i, j;
	t_qst point;
	point = data[left];
	i = left+1;
	j = right;
	while(i < j)
	{
		while ((point.x < data[j].x) || ((point.x == data[j].x) && (point.y < data[j].y)))
			j--;
		while (i < j && ((point.x > data[i].x) || ((point.x == data[i].x) && (point.y > data[i].y))))
			i++;
		swap(data, i, j);
	}
	data[left] = data[i];
	data[i] = point;
	return i;
}

void quick_sort(t_qst *data, int left, int right)
{
	if (left >= right)
		return ;
	int temp;
	temp = sorting(data,left,right);

	quick_sort(data, left, temp-1);
	quick_sort(data, temp+1, right);
}

int main()
{
	int cnt;
	cin >> cnt;
	t_qst *data;
	data = (t_qst *)malloc(sizeof(t_qst) * (cnt));
	for(int i = 0; i < cnt; i++)
	{
		cin >> data[i].x >> data[i].y;
	}
	quick_sort(data, 0, cnt - 1);
	for(int i = 0; i < cnt; i++)
	{
		cout << data[i].x << " "<<data[i].y<<endl;
	}
	free(data);
}
