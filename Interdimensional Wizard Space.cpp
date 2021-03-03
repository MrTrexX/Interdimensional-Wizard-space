#include <iostream>
using namespace std;

void dimension_1() {
	cout << "===================" << endl;
	cout << "||     1      !  ||" << endl;
	cout << "||  1    !   1   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   !  !    !   ||" << endl;
	cout << "|| !         1   ||" << endl;
	cout << "||    1    !     ||" << endl;
	cout << "||    !       1  ||" << endl;
	cout << "===================" << endl;
}

void dimension_2() {
	cout << "===================" << endl;
	cout << "||     2      @  ||" << endl;
	cout << "||  2    @   @   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   @  2    @   ||" << endl;
	cout << "|| @         2   ||" << endl;
	cout << "||    2    @     ||" << endl;
	cout << "||    @       2  ||" << endl;
	cout << "===================" << endl;
}

void dimension_3() {
	cout << "===================" << endl;
	cout << "||     #      #  ||" << endl;
	cout << "||  3    #   1   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   #  3    #   ||" << endl;
	cout << "|| #         3   ||" << endl;
	cout << "||    3    #     ||" << endl;
	cout << "||    #       3  ||" << endl;
	cout << "===================" << endl;
}

void dimension_4() {
	cout << "===================" << endl;
	cout << "||     4      $  ||" << endl;
	cout << "||  4    $   4   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   $  4    $   ||" << endl;
	cout << "|| $         4   ||" << endl;
	cout << "||    4    $     ||" << endl;
	cout << "||    $       4  ||" << endl;
	cout << "===================" << endl;
}

void dimension_5() {
	cout << "===================" << endl;
	cout << "||     5      %  ||" << endl;
	cout << "||  5    %   5   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   %  5    %   ||" << endl;
	cout << "|| %         5   ||" << endl;
	cout << "||    5    %     ||" << endl;
	cout << "||    %       5  ||" << endl;
	cout << "===================" << endl;
}

void dimension_6() {
	cout << "===================" << endl;
	cout << "||     6      ^  ||" << endl;
	cout << "||  6    ^   6   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   ^  6    ^   ||" << endl;
	cout << "|| ^         6   ||" << endl;
	cout << "||    6    ^     ||" << endl;
	cout << "||    ^       6  ||" << endl;
	cout << "===================" << endl;
}

void dimension_7() {
	cout << "===================" << endl;
	cout << "||     7      &  ||" << endl;
	cout << "||  7    &   7   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   &  7    &   ||" << endl;
	cout << "|| &         7   ||" << endl;
	cout << "||    7    &     ||" << endl;
	cout << "||    &       7  ||" << endl;
	cout << "===================" << endl;
}

void dimension_8() {
	cout << "===================" << endl;
	cout << "||     8      *  ||" << endl;
	cout << "||  8    *   8   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   *  8    *   ||" << endl;
	cout << "|| *         8   ||" << endl;
	cout << "||    8    *     ||" << endl;
	cout << "||    *       8  ||" << endl;
	cout << "===================" << endl;
}

void dimension_9() {
	cout << "===================" << endl;
	cout << "||     9      (  ||" << endl;
	cout << "||  9    (   9   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   (  9    (   ||" << endl;
	cout << "|| (         9   ||" << endl;
	cout << "||    9    (     ||" << endl;
	cout << "||    (       9  ||" << endl;
	cout << "===================" << endl;
}

void dimension_10() {
	cout << "===================" << endl;
	cout << "||     10     )  ||" << endl;
	cout << "||  10   )   10  ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   )  10   )   ||" << endl;
	cout << "|| )         10  ||" << endl;
	cout << "||    10   )     ||" << endl;
	cout << "||    )       10 ||" << endl;
	cout << "===================" << endl;
}

void forbidden() {
	cout << "===================" << endl;
	cout << "||     x     X   ||" << endl;
	cout << "||  x    X   x   ||" << endl;
	cout << "||               ||" << endl;
	cout << "||   X  x    X   ||" << endl;
	cout << "|| X          x  ||" << endl;
	cout << "||    x    X     ||" << endl;
	cout << "||    X       x  ||" << endl;
	cout << "===================" << endl;
}

int main() {
	bool summoning = true;
	int dimension;
	string summon;
	string name = "Unknown";
	while(summoning) {
		cout << "main> ";
		cin >> summon;
		system("cls");
		if(summon == "-name") {
			system("cls");
		    cout << "New Username: ";
			cin >> name; 
			system("cls");
		}
		
		if(summon == "-summon") {
			int dimension_type;
			cout << "summon> ";
			cin >> dimension;
			
			switch(dimension) {
				case 1:
					dimension_1();
					cout << name << " has attacked with the 1st dimension\n " << endl;
					break;
				case 2:
					dimension_2();
					cout << name << " has healed with the 2nd dimension\n" << endl;
					break;
				case 3:
					dimension_3();
					cout << name << " has used a power beam with the 3rd dimension\n" << endl;
					break;
				case 4:
					dimension_4();
					cout << name << " has morphed with the 4th dimension\n" << endl;
					break;
				case 5:
					dimension_5();
					cout << name << " has blocked an attack with the 5th dimension\n" << endl;
					break;
				case 6:
					dimension_6();
					cout << name << " has sucked the nearest person into the 6th dimension\n" << endl;
					break;
				case 7:
					dimension_7();
					cout << name << " has cloned theirself with the 7th dimension\n" << endl;
					break;
				case 8:
					dimension_8();
					cout << name << " has teleported with the 8th dimension\n" << endl;
					break;
				case 9:
					dimension_9();
					cout << name << " has opened the 9th dimension and hid in it\n" << endl;
					break;
				case 10:
					dimension_10();
					cout << name << " has summoned a Mutant Dodo\n" << endl;
					break;
				case 61518 :
					forbidden();
					cout << name << " has summoned a Megavore with the forbidden dimension\n" << endl;
					break;
			}
						
		}
	}
	return 0;
}
