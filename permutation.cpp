#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void permutation(const string& n, int len, ofstream& file, int max_len)
{
    file << n << "\n";
    if (len >= max_len) return;
    for (int i = 32; i <= 126; i++) // Printable ASCII characters
    {
        permutation(n + (char)i, len + 1, file, max_len);
    }
}

int main()
{
    int max_len = 20;
    ofstream fout("pass.txt");
    if (!fout) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    permutation("", 0, fout, max_len);
    fout.close();
    return 0;
}

