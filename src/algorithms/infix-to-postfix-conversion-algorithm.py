def is_operator(ch):
    return ch in ['+', '-', '*', '/']

def precedence(ch):
    if ch in ['+', '-']:
        return 1
    if ch in ['*', '/']:
        return 2
    return 0

def infix_to_postfix(infix):
    postfix = []
    stack = []

    for ch in infix:
        if ch.isalnum():
            postfix.append(ch)
        elif ch == '(':
            stack.append(ch)
        elif ch == ')':
            while stack and stack[-1] != '(':
                postfix.append(stack.pop())
            if stack and stack[-1] == '(':
                stack.pop()
        elif is_operator(ch):
            while stack and precedence(stack[-1]) >= precedence(ch):
                postfix.append(stack.pop())
            stack.append(ch)

    while stack:
        postfix.append(stack.pop())

    return ''.join(postfix)

if __name__ == "__main__":
    infix_expression = "a+b*(c-d)/e"
    postfix_expression = infix_to_postfix(infix_expression)
    print(f"Infix expression: {infix_expression}")
    print(f"Postfix expression: {postfix_expression}")
