
def levenshtein(s, t):

    rows = len(s) + 1
    cols = len(t) + 1
    dist = [[0 for x in range(cols)] for x in range(rows)]

    for i in range(1, rows):
        dist[i][0] = i

    for i in range(1, cols):
        dist[0][i] = i

    for col in range(1, cols):
        for row in range(1, rows):
            if s[row - 1] == t[col - 1]:
                cost = 0
            else:
                cost = 1
            dist[row][col] = min(dist[row - 1][col] + 1,
                                 dist[row][col - 1] + 1,
                                 dist[row - 1][col - 1] + cost)

    return dist[row][col]

main_str = input()
k = int(input())
dists = []
for i in range(5):
    dists.append(levenshtein(main_str, input()))

minimo = dists[0]
index = 0
for i in range(5):
    if dists[i] < minimo:
        minimo = dists[i]
        index = i

print(index+1)
if dists[index] <= k:
    print(dists[index])





