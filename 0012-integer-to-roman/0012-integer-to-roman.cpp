
// class Solution {
// public:
//   string intToRoman(int num) {

//     string ans;

//     unordered_map<int, string> mp = {
//         {1, "I"},   {4, "IV"},   {5, "V"},   {9, "IX"},  {10, "X"},
//         {40, "XL"}, {50, "L"},   {90, "XC"}, {100, "C"}, {400, "CD"},
//         {500, "D"}, {900, "CM"}, {1000, "M"}};

//     while (num != 0) {

//       if (num >= 1000) {
//         ans += mp[1000];
//         num -= 1000;
//       } else if (num >= 900) {
//         ans += mp[900];
//         num -= 900;
//       } else if (num >= 500) {
//         ans += mp[500];
//         num -= 500;
//       } else if (num >= 400) {
//         ans += mp[400];
//         num -= 400;
//       } else if (num >= 100) {
//         ans += mp[100];
//         num -= 100;
//       } else if (num >= 90) {
//         ans += mp[90];
//         num -= 90;
//       } else if (num >= 50) {
//         ans += mp[50];
//         num -= 50;
//       } else if (num >= 40) {
//         ans += mp[40];
//         num -= 40;
//       } else if (num >= 10) {
//         ans += mp[10];
//         num -= 10;
//       } else if (num >= 9) {
//         ans += mp[9];
//         num -= 9;
//       } else if (num >= 5) {
//         ans += mp[5];
//         num -= 5;
//       } else if (num >= 4) {
//         ans += mp[4];
//         num -= 4;
//       } else {
//         ans += mp[1];
//         num -= 1;
//       }
//     }

//     return ans;
//   }
// };

// mehtod 02 

class Solution {
public:
  string intToRoman (int num) {
    string ans = "";
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    vector<string> symbols = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                              "XL", "X",  "IX", "V",  "IV", "I"};

    for (int i = 0; i < values.size(); i++) {
      while (num >= values[i]) {
        ans += symbols[i];
        num -= values[i];
      }
    }
    return ans;
  }
};
