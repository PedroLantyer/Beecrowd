salary = float(input())
adj = [15,12,10,7,4]
if salary <= 400:
    final_salary = salary * (1+(adj[0]/100))
    inc = final_salary - salary
    print("Novo salario: %.2f" % final_salary)
    print("Reajuste ganho: %.2f" % inc)
    print("Em percentual: %d %%" % adj[0])
elif salary > 400 and salary <= 800:
    final_salary = salary * (1+(adj[1]/100))
    inc = final_salary - salary
    print("Novo salario: %.2f" % final_salary)
    print("Reajuste ganho: %.2f" % inc)
    print("Em percentual: %d %%" % adj[1])
elif salary > 800 and salary <= 1200:
    final_salary = salary * (1+(adj[2]/100))
    inc = final_salary - salary
    print("Novo salario: %.2f" % final_salary)
    print("Reajuste ganho: %.2f" % inc)
    print("Em percentual: %d %%" % adj[2])
elif salary > 1200 and salary <= 2000:
    final_salary = salary * (1+(adj[3]/100))
    inc = final_salary - salary
    print("Novo salario: %.2f" % final_salary)
    print("Reajuste ganho: %.2f" % inc)
    print("Em percentual: %d %%" % adj[3])
else:
    final_salary = salary * (1+(adj[4]/100))
    inc = final_salary - salary
    print("Novo salario: %.2f" % final_salary)
    print("Reajuste ganho: %.2f" % inc)
    print("Em percentual: %d %%" % adj[4])