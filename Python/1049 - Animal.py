l1 = ["vertebrado", "invertebrado"]
l2 = ["ave", "mamifero", "inseto", "anelideo"]
l3 = ["carnivoro", "onivoro", "herbivoro", "hematofago"]
s1,s2,s3 = input(), input(), input()
if s1 == l1[0]:
    if s2 == l2[0]:
        if s3 == l3[0]:
            print("aguia")
        elif s3 == l3[1]:
            print("pomba")
    elif s2 == l2[1]:
        if s3 == l3[1]:
            print("homem")
        elif s3 == l3[2]:
            print("vaca")
elif s1 == l1[1]:
    if s2 == l2[2]:
        if s3 == l3[3]:
            print("pulga")
        elif s3 == l3[2]:
            print("lagarta")
    elif s2 == l2[3]:
        if s3 == l3[3]:
            print("sanguessuga")
        elif s3 == l3[1]:
            print("minhoca")