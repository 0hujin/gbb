#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���������� ������ �մϴ�. �Է��ϼ���" << endl;

	while (true) {
		string s;
		//char s[10];

		cout << "�ι̿�>>";
		//cin >> s;
		getline(cin, s);

		string t;
		cout << "�ι̿�>>";
		cin >> t;

		// �߸��� �Է� ��������
		if (s != "����" && s != "����" && s != "��") {
			cout << "�ι̿� �߸� �Է� �߾�" << endl;
			continue; // �ٽ� while ������ ���� �̵�
			//return 0;
		}
		if (t != "����" && t != "����" && t != "��") {
			cout << "�ٸ��� �߸� �Է� �߾�" << endl;
			continue; // �ٽ� while ������ ���� �̵� 
			//return 0;
		}
		//���� �Ǻ�
		if (s == "����" && t == "����") cout << "�ٸ��� ��" << endl;
		else if (s == "����" && t == "��")  cout << "�ι̿� ��" << endl;
		else if (s == "����" && t == "����")  cout << "�ι̿� ��" << endl;
		else if (s == "����" && t == "��")  cout << "�ٸ��� ��" << endl;
		else if (s == "��" && t == "����")  cout << "�ٸ��� ��" << endl;
		else if (s == "��" && t == "����")  cout << "�ι̿� ��" << endl;
		else cout << "�����ϴ�." << endl;

		string res;
		cout << "���?";
		cin >> res;
		if (res != "yes")
			break;
	}
}