#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    string file1 = "17.2.txt";
    string file2 = "17.3.txt";
    string file3 = "17.4.txt";

    ifstream fin1(file1);
    if (!fin1)
    {
        cerr << "Can't open " << file1 << ". Please try again!\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin2(file2);
    if (!fin1)
    {
        cerr << "Can't open " << file2 << ". Please try again!\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout(file3);
    if (!fin1)
    {
        cerr << "Can't open " << file3 << ". Please try again!\n";
        exit(EXIT_FAILURE);
    }

    string temp1, temp2;
    int count1 = 0;
	int count2 = 0;
	while (getline(fin1, temp1))
		++count1;
	while (getline(fin2, temp2))
		++count2;
	fin1.clear();
	fin2.clear();
	fin1.close();
	fin2.close();
	fin1.open(file1);
	fin2.open(file2);
	if (count1 >= count2)
	{
		for (int i = 0; i < count1; ++i)
		{
			getline(fin1, temp1);
			fout << temp1 << " ";
			if (i < count2)
			{
				getline(fin2, temp2);
				fout << temp2 << endl;
			}
		}
	}
	else
	{
		for (int i = 0; i < count2; ++i)
		{
			getline(fin2, temp2);
			fout << temp2 << " ";
			if (i < count1)
			{
				getline(fin1, temp1);
				fout << temp1 << endl;
			}
		}
	}

	cout << "Copy and paste successfully.\nBye.\n";
	fin1.close();
    fin2.close();
    fout.close();

    return 0;
}