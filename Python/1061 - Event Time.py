import datetime

l1 = input().split()
StDay = int(l1[1])
l2 = input().split(":")
StH,StMin,StSec = int(l2[0].strip()),int(l2[1].strip()),int(l2[2].strip())
l3 = input().split()
EndDay = int(l3[1])
l4 = input().split(":")
EndH,EndMin,EndSec = int(l4[0].strip()),int(l4[1].strip()),int(l4[2].strip())
Start = datetime.datetime(2023,4,StDay,StH,StMin,StSec)
End = datetime.datetime(2023,4,EndDay,EndH,EndMin,EndSec)
Delta = End-Start
Delta = int(Delta.total_seconds())
Total_T = [0,0,0,0]
Text = ["dia(s)", "hora(s)", "minuto(s)","segundo(s)"]
while Delta >= 86400:
    Total_T[0] += 1
    Delta -= 86400
while Delta >= 3600:
    Total_T[1] += 1
    Delta -= 3600
while Delta >= 60:
    Total_T[2] += 1
    Delta -= 60
while Delta > 0:
    Total_T[3] += 1
    Delta -= 1
for i in range(len(Total_T)):
    print(Total_T[i], Text[i])