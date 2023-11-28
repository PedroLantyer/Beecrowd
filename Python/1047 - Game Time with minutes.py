StH,StMin,EndH,EndMin = map(int, input().split())
Total_T = [0,0]
if (StH == EndH):
    if (StMin == EndMin):
        Total_T[0] = 24
    if (StMin < EndMin):
        Total_T[1] = (EndMin-StMin)
    if (StMin > EndMin):
        Total_T[0] = 23
        Total_T[1] = ((EndMin+60)-StMin)
elif (StH > EndH):
    if (StMin < EndMin):
        Total_T[0] = ((EndH+24)-StH)
        Total_T[1] = (EndMin-StMin)
    elif (StMin > EndMin):
        Total_T[0] = ((EndH+24)-StH-1)
        Total_T[1] = ((EndMin+60)-StMin)
    else:
        Total_T[0] = ((EndH+24)-StH)
        Total_T[1]=0
else:
    if (StMin < EndMin):
        Total_T[0] = (EndH-StH)
        Total_T[1] = (EndMin-StMin)
    elif (StMin > EndMin):
        Total_T[0] = (EndH-StH-1)
        Total_T[1] = ((EndMin+60)-StMin)
    else:
        Total_T[0] = (EndH-StH)
        Total_T[1]=0
print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" % (Total_T[0], Total_T[1]))