n = int(input())

stack = []
max_stack = []

for _ in range(n):
    command = input().split()

    if command[0] == "push":
        x = int(command[1])
        stack.append(x)

        if not max_stack or x >= max_stack[-1]:
            max_stack.append(x)

    elif command[0] == "pop":
        if stack[-1] == max_stack[-1]:
            max_stack.pop()
        stack.pop()

    elif command[0] == "max":
        print(max_stack[-1])
        
