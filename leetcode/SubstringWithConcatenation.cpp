#include "stdafx.h"
#include "SubstringWithConcatenation.h"

vector<int> SubstringWithConcatenation::findSubstring(string s, vector<string>& words)
{
	if (s.empty() || words.empty()) return vector<int>();

	unordered_map<string, int> word_counter;
	for (auto w : words)
		++word_counter[w];
	int word_num = words.size(),
		word_len = words[0].length(),
		max_pos = s.length() - word_num * word_len + 1;
	vector<int> results;

	for (int i = 0; i < word_len; ++i) {
		for (size_t j = i; j < max_pos; j += word_len) {
			if (word_counter.find(s.substr(j, word_len)) != word_counter.end()) {
				int rs = j;
				size_t k = j;
				unordered_map<string, int> wc_copy(word_counter);
				string &&word = s.substr(k, word_len);
				while (k < s.length() && wc_copy.find(word) != wc_copy.end() && wc_copy[word] > 0) {
					--wc_copy[word];
					k += word_len;
					word = s.substr(k, word_len);
				}
				if ((k - rs) / word_len == word_num) {
					results.push_back(rs);
				}
			}
		}
	}
	return results;
}
