#include <fstream>
using namespace std;
int main()
{
	ifstream f("psp.in");
	int n, s;
	f >> n >> s;
	int nr=0;
	while (n > 0)
	{
		int x;
		f >> x;
		if (x <= s)
			nr++, s -= x;
		n--;
	}
	f.close();
	ofstream g("psp.out");
	g << nr << ' ' << s;
	g.close();
	return 0;
}

