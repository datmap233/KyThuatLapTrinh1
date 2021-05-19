#include "Header.h"
void input(map<string, string> &states)
{
	states["Alabama"] = "Montgomery";
	states["Alaska"] = "Juneau";
	states["Arizona"] = "Phoenix";
	states["Arkansas"] = "Little Rock";
	states["California"] = "Sacramento";
	states["Colorado"] = "Denver";
	states["Connecticut"] = "Hartford";
	states["Delaware"] = "Dover";
	states["Florida"] = "Tallahassee";
	states["Georgia"] = "Atlanta";
	states["Hawaii"] = "Honolulu";
	states["Idaho"] = "Boise";
	states["Illinois"] = "Springfield";
	states["Indiana"] = "Indianapolis";
	states["Iowa"] = "Des Moines";
	states["Kansas"] = "Topeka";
	states["Kentucky"] = "Frankfort";
	states["Louisiana"] = "Baton Rouge";
	states["Maine"] = "Augusta";
	states["Maryland"] = "Annapolis";
	states["Massachusetts"] = "Boston";
	states["Michigan"] = "Lansing";
	states["Minnesota"] = "Saint Paul";
	states["Mississippi"] = "Jackson";
	states["Missouri"] = "Jefferson City";
	states["Montana"] = "Helena";
	states["Nebraska"] = "Lincoln";
	states["Nevada"] = "Carson City";
	states["New Hampshire"] = "Concord";
	states["New Jersey"] = "Trenton";
	states["New Mexico"] = "Santa Fe";
	states["New York"] = "Albany";
	states["North Carolina"] = "Raleigh";
	states["North Dakota"] = "Bismarck";
	states["Ohio"] = "Columbus";
	states["Oklahoma"] = "Oklahoma City";
	states["Oregon"] = "Salem";
	states["Pennsylvania"] = "Harrisburg";
	states["Rhode Island"] = "Providence";
	states["South Carolina"] = "Columbia";
	states["South Dakota"] = "Pierre";
	states["Tennessee"] = "Nashville";
	states["Texas"] = "Austin";
	states["Utah"] = "Salt Lake City";
	states["Vermont"] = "Montpelier";
	states["Virginia"] = "Richmond";
	states["Washington"] = "Olympia";
	states["West Virginia"] = "Charleston";
	states["Wisconsin"] = "Madison";
	states["Wyoming"] = "Cheyenne";
}
void answers(map<string, string> states)
{
	int correct = 0;
	int wrong = 0;
	int n;
	int pos;
	int m;
	cout << "Nhap so lan muon choi: ";
	cin >> m;
	string y;
	srand(time(0));
	while (m)
	{
		n = rand() % 50 + 1;
		pos = 0;
		cin.ignore();
		for (auto e : states)
		{
			pos++;
			if (pos == n)
			{
				cout << endl;
				cout << e.first << endl << "Nhap ten thu phu: ";
				
				getline(cin, y);
				if (y == e.second)
					correct++;
				else wrong++;
			}
		}
		if (m == 1)
			break;
		m--;
	}
	cout << "So lan dung: " << correct;
	cout << "\nSo lan sai: " << wrong;
	return;
}