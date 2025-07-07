def monkeys_left(n, k, j, m, p):
    total_monkeys = n
    while total_monkeys > 0 and (m >= k or p >= j):
        if m >= k:
            m -= k
        elif p >= j:
            p -= j
        else:
            break
        total_monkeys -= 1 
    return total_monkeys

# Input reading
n = int(input("Enter total monkeys: "))
k = int(input("Enter bananas per monkey: "))
j = int(input("Enter peanuts per monkey: "))
m = int(input("Enter total bananas: "))
p = int(input("Enter total peanuts: "))

# Calculate and print result
result = monkeys_left(n, k, j, m, p)
print(result)
