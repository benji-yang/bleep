#include <iostream>
#include <string>
void asterisk(std::string word, std::string &text, int i) {
  for (int j = 0; j < word.size(); ++j) {
    text[i+j] = '*';
  }
}

 void bleep(std::string word, std::string &text) {
    for (int i = 0; i < text.size(); ++i) {
      int match = 0;
      for (int k = 0; k < word.size(); ++k) {
      if (text[i+k] == word[k]) {
          ++match;
        }
      }
      
      if (match == word.size()) {
        asterisk(word, text, i);
      }
    }
    
 }