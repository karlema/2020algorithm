#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
using namespace std;

int map[1010];
int none;
int answer[1010];
int correct(int a,int b)
{
	answer[none] = a - b;
	none++;
	return 0;
}
int main()
{
	int a;
	scanf("%d",&a);
	int sum = 0;
	
	for (int i = 1; i <= a; i++)
	{
		if (i == 1000) continue;
		int flag = 0;
		int cnt = 0;
		int b = 0;
		int v = i;
		none = 0;
		while (1)
		{
			if (v == 0) break;
			b = v % 10;
			v = v / 10;
			map[cnt] = b;
			cnt++;
		}
		if (cnt > 2)
		{

			//for (int i = 0; i < cnt - 1; i++)
			//{
			//	correct(map[i], map[i+1]);
			//}

			//for (int i = 0; i < cnt; i++)
			//{
			//	//flag = 0;
			//	if (map[i] != map[i + 1])
			//	{
			//		flag = 0;
			//		break;
			//	}
			//	else flag = 1;
			//}
			for (int i = 0; i < cnt-1; i++)
			{
				answer[i] = map[i] - map[i + 1];
			}
			/*int a = map[0] - map[1];
			int b = map[1] - map[2];*/
			
			for (int i = 0; i < cnt - 2; i++)
			{
				if (answer[i] == answer[i+1])
				{
					flag = 1;
				}
				else
				{
					flag = 0;
				}
			}
			if (flag == 1) sum++;
		}
		else if(cnt<3)
		{
			//printf("%d ", i);
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}