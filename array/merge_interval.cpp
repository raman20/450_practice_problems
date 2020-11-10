#include <bits/stdc++.h>

using namespace std;

struct interval
{
	int start;
	int end;
};

bool compare(interval i1, interval i2)
{
	return (i1.start < i2.start);
}

void mergeInterval(interval arr[], int n)
{
	if(n<=0)
	{
		return;
	}

	stack<interval> s;

	sort(arr,arr+n,compare);
	
	s.push(arr[0]);

	for(int i = 1; i<n; i++)
	{
		interval top = s.top();
		
		if(top.end < arr[i].start)
		{
			s.push(arr[i]);
		}

		else if(top.end < arr[i].end)
		{
			top.end = arr[i].end;
			s.pop();
			s.push(top);
		}
	}

	cout << "\n the merge interval are:->  ";
	while(!s.empty())
	{
		interval t = s.top();
		cout << "[" << t.start << "," << t.end << "]";
		s.pop();
	}
	cout << endl;
	return ;
}

int main()
{
	interval arr[] = {{1,3},{2,6},{8,10},{15,18}};
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeInterval(arr,n);
	return 0;
}
