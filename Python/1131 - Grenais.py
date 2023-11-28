def exit_prompt():
    ans = input("Novo grenal (1-sim 2-nao)\n")
    if (ans.strip() == "1"):
        return False
    elif (ans.strip() == "2"):
        return True
    
if __name__ == "__main__":
    done = False
    res = [0,0,0]
    count = 0
    while done != True:
        count += 1
        l1 = input().split(" ")
        if (l1[0] > l1[1]):
            res[0] += 1
        elif (l1[1] > l1[0]):
            res[1] += 1
        else:
            res[2] += 1
        done = exit_prompt()
    print("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d" %(count,res[0],res[1],res[2]))
    if res[0] > res[1]:
        print("Inter venceu mais")
    elif res[0] < res[1]:
        print("Gremio venceu mais")
    else:
        print("Não houve vencedor")