#include<iostream>

using namespace std;

class codex {
public:
	char key1;
	char key2;
	char key3;
	char key4;
	int hit = 0;
	int blow = 0;
	int red = 0;
	int green = 0;
	int blue = 0;
	int yellow = 0;
	int pink = 0;
	int white = 0;
	codex(char k1, char k2, char k3, char k4) {
		key1 = k1;
		key2 = k2;
		key3 = k3;
		key4 = k4;
		if (k1 == 'r')
			red++;
		if (k1 == 'g')
			green++;
		if (k1 == 'b')
			blue++;
		if (k1 == 'y')
			yellow++;
		if (k1 == 'p')
			pink++;
		if (k1 == 'w')
			white++;


		if (k2 == 'r')
			red++;
		if (k2 == 'g')
			green++;
		if (k2 == 'b')
			blue++;
		if (k2 == 'y')
			yellow++;
		if (k2 == 'p')
			pink++;
		if (k2 == 'w')
			white++;

		if (k3 == 'r')
			red++;
		if (k3 == 'g')
			green++;
		if (k3 == 'b')
			blue++;
		if (k3 == 'y')
			yellow++;
		if (k3 == 'p')
			pink++;
		if (k3 == 'w')
			white++;


		if (k4 == 'r')
			red++;
		if (k4 == 'g')
			green++;
		if (k4 == 'b')
			blue++;
		if (k4 == 'y')
			yellow++;
		if (k4 == 'p')
			pink++;
		if (k4 == 'w')
			white++;




	}
	void check_codex(string guess) {
		hit = 0;
		blow = 0;
		int tempR = red;
		int tempG = green;
		int tempB = blue;
		int tempY = yellow;
		int tempP = pink;
		int tempW = white;
		for (int i = 0; i <= 3; i++) {
			
			if (guess[i] == 'r' && tempR >0) {
				blow++;
				tempR--;
			}
			if (guess[i] == 'g' && tempG > 0) {
				blow++;
				tempG--;
			}
			if (guess[i] == 'b' && tempB > 0) {
				blow++;
				tempB--;
			}
			if (guess[i] == 'y' && tempY > 0) {
				blow++;
				tempY--;
			}
			if (guess[i] == 'p' && tempP > 0) {
				blow++;
				tempP--;
			}
			if (guess[i] == 'w' && tempW > 0) {
				blow++;
				tempW--;
			}




			switch (i) {
			case 0:
				if (guess[i] == key1) {
					//cout << "flag1   " << i;
					hit++;
					blow--;
				}
				break;
			case 1:
				if (guess[i] == key2) {
					//cout << "flag2   " << i;
					hit++;
					blow--;
				}
				break;
			case 2:
				if (guess[i] == key3) {
					//cout << "flag3   " << i;
					hit++;
					blow--;
				}
				break;
			case 3:
				if (guess[i] == key4) {
					//cout << "flag4   " << i;
					hit++;
					blow--;
				}
				break;
			}
		}
		result();
	}

	void result() {
		cout << hit << " hits    " << blow << " blows\n";
	}

	void play() {
		string guess;
		while (hit != 4) {
			cout << "guess\n";
			cin >> guess;
			check_codex(guess);
		}
	}
};

int main(){
	string password;
	cout << "Encrypt the CODEX\n";
	cin >> password;
	codex my_codex(password[0], password[1], password[2], password[3]);
	my_codex.play();
	return 0;
}
