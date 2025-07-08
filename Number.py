n=15


if n%2==1:
    pos=(n+1)//2
    term=(pos-1)*7
else:
    pos = n//2
    term=(pos-1)*6
    
print(f"The {n}th term is:{term}")
