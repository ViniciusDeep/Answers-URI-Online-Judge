# -*- coding: utf-8 -*-

a, b, c, d = map(float, raw_input().split())

media = ((a*2) + (b*3) + (c*4) + (d*1)) / 10

print("Media: %.1f" % media)

if media >= 7:
    print("Aluno aprovado.")

elif media < 5:
    print("Aluno reprovado.")

else:
    print("Aluno em exame.")
    e = float(input())
    print("Nota do exame: %.1f" % e)
    exame = (media + e) / 2

    if exame >= 5:
        print("Aluno aprovado.")
        print("Media final: %.1f" % exame)
    else:
        print("Aluno reprovado.")
        print("Media final: %.1f" % exame)