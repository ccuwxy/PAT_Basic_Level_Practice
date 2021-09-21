//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//struct Node
//{
//	int addr;
//	int data;
//	int next;
//	int grade1;
//	int grade2;
//};
//int max1 = 0;
//bool full = false;
//bool cmp(Node a, Node b)
//{
//	if (a.grade1 != b.grade1)
//		return a.grade1 < b.grade1;
//	else if (a.grade1 != max1)
//		return a.grade2 < b.grade2;
//	else if(full)
//		return a.grade2 < b.grade2;
//	else
//		return a.grade2 > b.grade2;
//}
//int main()
//{
//	int N, K, first;
//	cin >> first >> N >> K;
//	Node* addrs = new Node[N];
//	Node* a = new Node[1000000];
//	int addr;
//	int num = 0;
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &addr);
//		scanf("%d %d", &a[addr].data, &a[addr].next);
//		a[addr].addr = addr;
//	}
//	addrs[num] = a[first];
//	addrs[num].grade1 = 0;
//	addrs[num].grade2 = 0;
//	int max1=0, max2=0;
//	while (addrs[num].next != -1)
//	{
//		addr = addrs[num].next;
//		addrs[++num] = a[addr];
//		
//		addrs[num].grade1 = num / K;
//		addrs[num].grade2 = num % K;
//	}
//	max1 = num / K;
//	full = !(num % K);
//	sort(addrs, addrs + num, cmp);
//
//	for (int i = 0; i < num; i++)
//		addrs[i].next = addrs[i + 1].addr;
//
//	addrs[num].next = -1;
//
//	for (int i = 0; i < num; i++)
//		printf("%05d %d %05d\n", addrs[i].addr, addrs[i].data, addrs[i].next);
//
//	printf("%05d %d -1", addrs[num].addr, addrs[num].data);
//	return 0;
//}