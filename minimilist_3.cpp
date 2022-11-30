// Write a program to read the contents of a file which has stored the first name and surname of a student. Modify the content of the file such that it will store surname first followed by first name and verify the change.
// file.txt contains: "Nishant Singh" and Output should be: "Singh Nishant" in same file.txt
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    ifstream fin;
    fin.open("file.txt");
    getline(fin, s);
    fin.close();
    int i = 0;
    while(s[i] != ' ')
    {
        i++;
    }
    string s1 = s.substr(0, i);
    string s2 = s.substr(i + 1, s.length());
    s = s2 + " " + s1;
    ofstream fout;
    fout.open("file.txt");
    fout << s;
    fout.close();
    return 0;
}