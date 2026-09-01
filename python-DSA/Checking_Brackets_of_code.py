text = input()

stack = []

for i, ch in enumerate(text):
    if ch in "([{":
        stack.append((ch, i + 1))

    elif ch in ")]}":
        if not stack:
            print(i + 1)
            exit()

        top, pos = stack.pop()

        if (top == "(" and ch != ")") or \
           (top == "[" and ch != "]") or \
           (top == "{" and ch != "}"):
            print(i + 1)
            exit()

if stack:
    print(stack[0][1])
else:
    print("Success")
