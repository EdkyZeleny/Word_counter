
#include "Word_Counter_2.h"
using namespace std;

string path;  //"C:\\rutext.txt"

int main() {
  setlocale(LC_CTYPE, "rus");

  cout << "Input the file source like C:\rutext.txt" << endl;
  cin >> path;

  Word_Counteringer::Counting(path);

  system("pause");
  return 0;
}

/*
        ifstream file_stream;
        file_stream.open(path);
        if (!file_stream.is_open()) {
                cout << "Не удалось открыть файл" << endl;
                return 1;
        }
        map<string, size_t> word_to_count;
        string word;
        while (file_stream >> word) {
                ++word_to_count[word];
        }
        vector<pair<string, size_t>> stats(word_to_count.begin(),
                word_to_count.end());
        sort(stats.begin(), stats.end(), [](auto& lhs, auto& rhs) {
                if (lhs.second == rhs.second) {
                        return lhs.first < rhs.first;
                }
                return lhs.second > rhs.second;
        });
        for (auto& pair : stats) {
                cout << "word: " << pair.first << " is used " << pair.second <<
   " times" << endl;
        }
*/
