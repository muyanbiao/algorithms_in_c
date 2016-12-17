// 联通问题的快速查找算法
#include <stdio.h>
#define N 1000

int main()
{
	int i, p, q, t, id[N];

	for (int i = 0; i < N; i++) id[i] = i;

	while(scanf("%d %d\n", &p, &q) == 2){
		if (id[p] == id[q]) continue; // 查找操作，只需要比较数组中对应位置上的元素是否相等
		// 合并操作，每次都要扫描整个数组
		for (t = id[p], i = 0; i < N; i++)
			if(id[i] == t) id[i] = id[q];

		printf("%d %d\n", p, q); // 打印不在集合中的数对
	}
	return 0;
}
