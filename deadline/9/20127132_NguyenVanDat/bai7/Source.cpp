#include "Header.h"
void _word(int &q, map<string, char[255]>& list, int line_count_number, string word1)
{
	if (line_count_number == 0)
		list[word1][q++] = '0';
	else if (line_count_number == 1)
		list[word1][q++] = '1';
	else if (line_count_number == 2)
		list[word1][q++] = '2';
	else if (line_count_number == 3)
		list[word1][q++] = '3';
	else if (line_count_number == 4)
		list[word1][q++] = '4';
	else if (line_count_number == 5)
		list[word1][q++] = '5';
	else if (line_count_number == 6)
		list[word1][q++] = '6';
	else if (line_count_number == 7)
		list[word1][q++] = '7';
	else if (line_count_number == 8)
		list[word1][q++] = '8';
	else if (line_count_number == 9)
		list[word1][q++] = '9';
}
void find_line_word(map<string, char[255]> &list)
{
	ifstream fi;
	int line_count_number = 1;
	fi.open("Kennedy.txt");
	while (!fi.eof())
	{
		char line_count;

		char tmp[1000];
		fi.getline(tmp, 1000);
		//string line = tmp;

		int i = 0;
		while (i < strlen(tmp))
		{
			int j = 0;
			char word[1000];
			while (tmp[i] != ' ' && i < strlen(tmp))
				word[j++] = tmp[i++];
			word[j++] = '\0';
			i++;
			string word1 = word;
			int q = 0;
			while (list[word1][q] != NULL)
				q++;
			_word(q, list, line_count_number, word1);
			list[word1][q++] = ' ';
			list[word1][q] = '\0';

		}
		line_count_number++;
	}
	fi.close();
}
void output(map<string, char[255]> list)
{
	ofstream fa;
	fa.open("index.txt");
	for (auto e : list)
	{
		fa << e.first << " : " << e.second << endl;
		cout << e.first << " : " << e.second << endl;
	}
}