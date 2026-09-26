class Solution {
public:
  string evaluate(string s, vector<vector<string>> &knowledge) {

    unordered_map<string, string> mp;

    for (int i = 0; i < knowledge.size(); i++) {
      mp[knowledge[i][0]] = knowledge[i][1];
    }

    for (int i = 0; i < s.length(); i++) {

      if (s[i] == '(') {

        int left = i;

        int right = i;
        while (s[right] != ')') {
          right++;
        }

        string key = s.substr(left + 1, right - left - 1);

        string value;

        if (mp.find(key) != mp.end()) {
          value = mp[key];
        } else {
          value = "?";
        }

        s.replace(left, right - left + 1, value);

        i = left + value.length() - 1;
      }
    }

    return s;
  }
};
