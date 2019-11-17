#include<iostream>
#include<stdio.h>
 using namespace std;
 int how_much = 0;
int main ()
{
	int n;
	cout<<("Enter the number of straight lines\n");
	cin >> n;
	printf("This is the number of straight: %i \n", n);
	cout << "Enter the amount of A and B after the enter: ";
	//y=ax+b
	float a, b;
	scanf_s("%f", &a);
	printf("This is A:%f \n ", a);
	scanf_s("%f", &b);
	printf("This is B:%f \n", b);
	float y;
	printf("Yout main straight lines look like: y=%fx+%f\n", a, b);
	for (int i = 0; i < n; i++)
	{
		float x1, x2, y1, y2;
		// A(x1,y1);B(x2,y2)
		cout << "Set point A[x1,y1] after the enter\n";
		scanf_s("%f  %f", &x1, &y1);
		printf("This is x1:%f and y1:%f",x1,y1);
		cout << "Set point B[x2,y2] after the enter\n";
		scanf_s("%f %f", &x2, &y2);
		printf("This is x2:%f and y2:%f\n", x2, y2);
		float y1t, y2t,x1t,x2t;
		y1t = a * x1 + b;
		y2t = a * x2 + b;
		

		if (y1t<y1 && y2t>y2 || y1t > y1&& y2t < y2)
		{
			how_much++;

		}
		


		cout << how_much;

		
	}



		
}