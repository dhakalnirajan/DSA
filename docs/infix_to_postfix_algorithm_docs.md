# INFIX TO POSTFIX CONVERSION ALGORITHM

1. Initialize a stack and output list as empty.

2. Read each symbol (operator and operand) from the infix expression.

    a. If the symbol is an operand, then append it into the output list.

    b. If the symbol is an operator and the stack is empty or the operator has highest
    precedence than the top operator of the stack, then PUSH the operator onto the stack.

    c. Whenever an opening parenthesis encounters in the stack, then we cannot POP all the
    operators from the stack until its counterpart (closing parenthesis) is available on the stack.

3. Repeat step 2 for every symbols of infix expression.

4. If all the symbols have been read from infix expression and the stack is not empty, then POP all the symbols from the stack and append them to the output list.

---

                        The Documentation

# Infix to Postfix Conversion Algorithm

## Overview

The Infix to Postfix Conversion algorithm is a process of converting an arithmetic expression in infix notation to its equivalent expression in postfix notation. Infix notation is the standard mathematical notation where operators are written between their operands, whereas postfix notation (also known as Reverse Polish Notation) has the operators written after their operands.

## Algorithm Steps

1. **Initialize:**
   - Create an empty stack and an empty output list for the postfix expression.

2. **Process Each Symbol in the Infix Expression:**
   - Read each symbol (operand or operator) from the infix expression one by one.

3. **Operand Handling:**
   - If the symbol is an operand (numeric value or variable), append it to the output list.

4. **Operator Handling:**
   - If the symbol is an operator:
     - If the stack is empty or the operator has higher precedence than the operator at the top of the stack, push the operator onto the stack.
     - If the operator has lower or equal precedence, pop operators from the stack and append them to the output list until a lower-precedence operator is encountered or the stack is empty. Then, push the current operator onto the stack.

5. **Parenthesis Handling:**
   - When an opening parenthesis '(' is encountered, push it onto the stack.
   - When a closing parenthesis ')' is encountered, pop operators from the stack and append them to the output list until the matching opening parenthesis '(' is encountered. Pop and discard the opening parenthesis.

6. **Repeat for Every Symbol:**
   - Repeat steps 3-5 for every symbol in the infix expression.

7. **Finalize Output:**
   - If there are any remaining operators in the stack after processing all symbols, pop them and append to the output list.

8. **Result:**
   - The output list now contains the equivalent postfix expression.

## Example

Consider the infix expression: `a + b * (c - d) / e`

1. Initialize an empty stack and an empty output list.
2. Process each symbol:
   - Operand 'a' is appended to the output list.
   - Operator '+' is pushed onto the stack.
   - Operand 'b' is appended to the output list.
   - Operator '*' has higher precedence than '+', so it is pushed onto the stack.
   - Opening parenthesis '(' is pushed onto the stack.
   - Operand 'c' is appended to the output list.
   - Operator '-' is pushed onto the stack.
   - Operand 'd' is appended to the output list.
   - Closing parenthesis ')' encountered, so pop operators until '(' is encountered.
   - Pop and discard '('.
   - Operator '/' has higher precedence than '+', so it is pushed onto the stack.
   - Operand 'e' is appended to the output list.
   - End of expression, pop remaining operators ('/') and append to the output list.

The resulting postfix expression is: `a b c d - * e / +`

## Time Complexity

The time complexity of the algorithm is O(n), where n is the length of the infix expression, as each symbol is processed once.

## Space Complexity

The space complexity is O(n) due to the space required for the stack and the output list.

## Applications

- Expression parsing in compilers.
- Evaluation of expressions in computer algebra systems.
- Calculator input processing.

## Conclusion

The Infix to Postfix Conversion algorithm provides an efficient way to transform infix expressions into postfix form, making it easier to evaluate and compute mathematical expressions. The algorithm leverages a stack to manage operators and parentheses efficiently during the conversion process.
