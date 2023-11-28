s = input()
l1 = s.split(" ")
A,B,C,D = float(l1[0]), float(l1[1]), float(l1[2]), float(l1[3])
avg = ((A*2) + (B*3) + (C*4) + (D*1))/10
print("Media: %.1f" % avg)
if avg >= 7.0:
    print("Aluno aprovado.")
elif avg >= 5.0 and avg < 7.0:
    print("Aluno em exame.")
    exame = float(input())
    avg = (avg+exame)/2
    print("Nota do exame: %.1f" % exame)
    if avg >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: %.1f" % avg)
else:
    print("Aluno reprovado.")