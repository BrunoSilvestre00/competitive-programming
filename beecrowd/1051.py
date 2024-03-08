s = float(input())
if s <= 2000:
    print('Isento')
elif s <= 3000:
    print('R$ {:.2f}'.format((s-2000)*0.08))
elif s <= 4500:
    print('R$ {:.2f}'.format((s-3000)*0.18 + 1000*0.08))
else:
    print('R$ {:.2f}'.format((s-4500)*0.28 + 1500*0.18 + 1000*0.08))