#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
inline void ShowStr(const string &s) { cout << s << endl; }
static void GetStrs(ifstream &ifs, vector<string> &vistr);

class Store
{
    private:
        ofstream& os;
    
    public:
        explicit Store(ofstream &fout) : os(fout) {}
        ofstream & operator()(const string & s)
        {
            auto len = s.size();
            os.write((char *)&len, sizeof(len));
            os.write(s.data(), (streamsize)len);
            return (os);
        }
};

int main()
{
    vector<string> vostr;
    string temp;

    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    ofstream fout("strings.dat", ios_base::in | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

static void GetStrs(ifstream &ifs, vector<string> &vistr)
{
	while (true) 
    {
		streamsize	len;
		ifs.read((char*)&len, sizeof(len));
		if (!ifs) break;

		char*	p_char = new char [len + 1];
		ifs.read(p_char, len);

		if (!ifs) break;
		p_char[len] = '\0';
		vistr.push_back(p_char);
		delete [] p_char;
	}
}
