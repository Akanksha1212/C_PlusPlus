using namespace std;

#include <iostream>

int height;
char character;

int main()
{
	cout << "Input the height of the pyramid:\n";
	cin >> height;

	if (height <= 0)
	{
		cout << "Height must be larger than 1!";
		return 0;
	}

	cout << "Input the Character to draw the pyramid with:\n";
	cin >> character;
	cout << "Drawing pyramid of height " << height << " with character " << character << ":\n";


	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height - i - 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			cout << character;
		}
		cout << "\n";
	}
}