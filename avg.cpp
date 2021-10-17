#include <iostream>

using namespace std;

#define fc(val) cout << val << " : ";
#define f1c(val) cout << val << "\n";
#define ret0 return 0;

int main()
{
	f1c("-1 to exit");
	float n = 0, sum = 0, score, unit;
	float avg;
	while (1)
	{
		fc("Score");
		cin >> score;
		if (score == -1)
		{
			break;
		}
		fc("Unit");
		cin >> unit;
		n += unit;
		sum += score * unit;
	}
	fc("avg");
	f1c(sum / n);
	getchar();
	getchar();
	ret0;
}