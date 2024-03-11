while (inp := int(input())):
    roda = [tuple(input().split(' ')) for _ in range(inp)]

    voltas = int(roda[0][1])
    pos = 0
    while (tam:=len(roda)) > 1:
        sentido = 1 if voltas%2 else -1
        for i in range(voltas):
            pos += sentido
            if pos==tam: pos = 0
            if pos==-1: pos = tam-1
        
        
        print(pos, roda[pos])
        voltas = int(roda[pos][1])
        del roda[pos]

    print(roda[0])
        

