A,B = map(int, input().split())
if (B <= A):
    Bmod = (B+24)
    T = (Bmod - A)
else:
    T = B - A
print("O JOGO DUROU %d HORA(S)" % T)