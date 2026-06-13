class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> calci;

        for (int i = 0; i < tokens.size(); i++) {

            string token = tokens[i];

            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {

                int a = calci.top();
                calci.pop();

                int b = calci.top();
                calci.pop();

                if (token == "+") {
                    calci.push(b + a);
                }
                else if (token == "-") {
                    calci.push(b - a);
                }
                else if (token == "*") {
                    calci.push(b * a);
                }
                else if (token == "/") {
                    calci.push(b / a);
                }
            }
            else {
                calci.push(stoi(token));
            }
        }

        return calci.top();
    }
};