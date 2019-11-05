#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int,int,int,int,int);

int main()
{
	int mark, mark1, mark2, mark3, mark4, mark5;
	getScore(mark);
	mark1 = mark;
	getScore(mark);
	mark2 = mark;
	getScore(mark);
	mark3 = mark;
	getScore(mark);
	mark4 = mark;
	getScore(mark);
	mark5 = mark;
	calcAverage(mark1, mark2, mark3, mark4, mark5);
    return 0;
}

void getScore(int& mark) {
	cout << "Enter test scores: " << endl;
	cin >> mark;
	while (mark<0 || mark>100) {
		cout << "Invalid test score. Re-enter: " << endl;
		cin >> mark;
	}
}

void calcAverage(int a, int b, int c, int d, int e){
	int tot;
	double total,avg;
	tot = a + b + c + d + e - findLowest(a, b, c, d, e);
	total = tot;
	avg = total / 4;
	cout <<fixed<<setprecision(2)<< "The average of four highest score is " << avg;
}

int findLowest(int a, int b, int c, int d, int e) {
	int ar[5] = { a,b,c,d,e };
	int min = ar[0];
	for (int i = 1; i < 5; i++) {
		if (ar[i] < min) {
			min = ar[i];
		}
	}
	return min;

}
