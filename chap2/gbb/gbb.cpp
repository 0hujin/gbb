#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "가위바위보 게임을 합니다. 입력하세요" << endl;

	while (true) {
		string s;
		//char s[10];

		cout << "로미오>>";
		//cin >> s;
		getline(cin, s);

		string t;
		cout << "로미오>>";
		cin >> t;

		// 잘못된 입력 가려내기
		if (s != "가위" && s != "바위" && s != "보") {
			cout << "로미오 잘못 입력 했어" << endl;
			continue; // 다시 while 문으로 제어 이동
			//return 0;
		}
		if (t != "가위" && t != "바위" && t != "보") {
			cout << "줄리엣 잘못 입력 했어" << endl;
			continue; // 다시 while 문으로 제어 이동 
			//return 0;
		}
		//승자 판별
		if (s == "가위" && t == "바위") cout << "줄리엣 승" << endl;
		else if (s == "가위" && t == "보")  cout << "로미오 승" << endl;
		else if (s == "바위" && t == "가위")  cout << "로미오 승" << endl;
		else if (s == "바위" && t == "보")  cout << "줄리엣 승" << endl;
		else if (s == "보" && t == "가위")  cout << "줄리엣 승" << endl;
		else if (s == "보" && t == "바위")  cout << "로미오 승" << endl;
		else cout << "비겼습니다." << endl;

		string res;
		cout << "계속?";
		cin >> res;
		if (res != "yes")
			break;
	}
}