bool isValidParenthesis(string expression) {


  stack<char>st;

  int n = expression.size();

  for (int i = 0; i < n; i++) {
    if (expression[i] == '(' or expression[i] == '{' or
        expression[i] == '[') {
      st.push(expression[i]);
    } else if (expression[i] == ']' and !st.empty() and  st.top() == '[') {
      st.pop();
    } else if (expression[i] == '}' and !st.empty() and st.top() == '{') {
      st.pop();
    } else if (expression[i] == ')' and !st.empty() and st.top() == '(') {
      st.pop();
    } else {
      return false;
    }
  }

  if (st.empty()) {
    return true;
  }


  return  false;
}