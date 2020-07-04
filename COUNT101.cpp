#include<iostream>
using std::cout;
using std::cin;
class CountP
{
		char* str;
		int len;
	public:
		CountP()
		{
			str=new char[50];
		}
		void getLength()
		{
			int i=0;
			for(;str[i];i++);
			len=i-1;
		}
		void getData()
		{
			cout<<"\nEnter a String of 0's and 1's --> ";
			cin>>str;
		}
		void solve()
		{
			int count=0;
			int sum=0;
			for(int i=0;i<=len;i++)
			{
				sum+=48-str[i];
				if(sum==-2)
				{
					count++;
					sum=-1;
				}
			}
			cout<<"\nCount of Pattern i.e 1(0+)1 --> "<<count;
		}
};
main()
{
	CountP cp;
	cp.getData();
	cp.getLength();
	cp.solve();
}




