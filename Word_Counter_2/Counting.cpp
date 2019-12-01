#include "Word_Counter_2.h"
using namespace std;

int Word_Counteringer::Counting(std::string arg1) {
  ifstream file_stream;
  file_stream.open(arg1);

  if (!file_stream.is_open()) {
    cout << "Сannot open file. Try another path." << endl;
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
    cout << "word: " << pair.first << " is used " << pair.second << " times"
         << endl;
  }

  return 1;
}
