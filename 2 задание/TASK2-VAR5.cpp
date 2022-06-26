#include <iostream>
#include <fstream>
using namespace std;

class String
{
public:
	String() {
		s = nullptr;
	}
	~String() {
		delete[] s;
	}

	void set();
	void print();
	void save_file(string filename);
	String& operator=(const String& p);

private:
	char* s;
};

int main()
{
	String str;
	str.set();
	str.print();
	str.save_file("out.txt");

	/*String p;
	p = str;
	p.print();
	p.save_file("res.txt");*/

	String* str2 = new String();
	*str2 = str;
	str2->print();
	str2->save_file("res.txt");

	delete str2;
}

void String::set()
{
	int len = 1;
	s = new char[1];

	while (true)
	{
		char c = cin.get();
		if (c == '\n')
			break;

		char* temp = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			temp[i] = s[i];
		}


		delete[] s;
		s = temp;
		s[len - 1] = c;
		len++;
	}

	s[len - 1] = '\0';
}

void String::print()
{
	cout << s << endl;
}

void String::save_file(string filename)
{
	ofstream file(filename);
	file << s;
	file.close();
}

String& String::operator=(const String& p)
{
	if (s) {
		delete[] s;
	}

	s = new char[strlen(p.s)];
	if (strlen(p.s) > 10) {
		int k = 0;
		for (int i = 0; i <= strlen(p.s); i++)
		{
			if (!isdigit(p.s[i])) {
				s[k] = p.s[i];
				k++;
			}
		}
		char* temp = new char[k + 1];
		for (int i = 0; i <= strlen(s); i++)
		{
			temp[i] = s[i];
		}
		delete[] s;
		s = temp;
	}
	else {
		for (int i = 0; i <= strlen(p.s); i++)
		{
			s[i] = p.s[i];
		}
	}
	return *this;
}
