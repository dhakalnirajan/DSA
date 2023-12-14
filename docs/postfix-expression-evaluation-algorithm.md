# Evaluate postfix expression for: 6, 5, 2, 3, +, 8, *, +, 3, +,*

1. Initialize an empty stack.
2. Read 6, which is an operand, so push it onto the stack.
3. Push operand 5,2 , & 3 onto the stack.
4. Read +, which is an operator, so pop two operands from the stack (3 & 2)
    and apply + operator on 3 & 2 i.e. 3 + 2 = 5, push 5 on the top of the stack.
5. Next operand is 8, so push it onto stack.
6. Read *which is an operator, so pop top two elements from the stack (8 & 5)
    and apply* operator on 8 & 5 i.e. 8 * 5 = 40, push 40 on the top of the
    stack.
7. Read +, which is an operator, so pop top two elements from the stack
    (40 & 5) and apply + operator on 40 & 5 i.e. 40 + 5 = 45, push 45 on the
    top of the stack.
8. Next is 3, so push it onto the stack.
9. Read +, which is an operator, so pop top two elements from the stack (3 & 45)
    and apply + operator on 3 & 45 i.e. 3 + 45 = 48, push 48 on the top of the
    stack.
10. Next is *, so pop top two elements from the stack (48 & 6) and apply*
    operator on 48 & 6 i.e. 48 * 6 = 288, push 288 on the top of the stack.
