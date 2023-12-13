/*
INFIX TO POSTFIX CONVERSION ALGORITHM

1. Initialize a stack and output list as empty.

2. Read each symbol (operator and operand) from the infix expression.

    a. If the symbol is an operand, then append it into the output list.

    b. If the symbol is an operator and the stack is empty or the operator has highest
    precedence than the top operator of the stack, then PUSH the operator onto the stack.

    c. Whenever an opening parenthesis encounters in the stack, then we cannot POP all the
    operators from the stack until its counterpart (closing parenthesis) is available on the stack.

3. Repeat step 2 for every symbols of infix expression.

4. If all the symbols have been read from infix expression and the stack is not empty, then POP
    all the symbols from the stack and append them to the output list.

*/
