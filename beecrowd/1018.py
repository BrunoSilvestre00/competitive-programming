n = int(input())
dic = {100:0, 50:0, 20:0, 10:0, 5:0, 2:0, 1:0}
print(n)
for k in dic.keys():
    dic[k] = n//k
    n -= dic[k]*k
    print('{} nota (s) de R$ {:.2f}'.format(dic[k], k).replace('.',','))
