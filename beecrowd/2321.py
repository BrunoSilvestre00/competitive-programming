class Retangulo:
    def __init__(self, cords):
        self.x0 = cords[0]
        self.y0 = cords[1]
        self.x1 = cords[2]
        self.y1 = cords[3]

    def ponto_dentro(self, x, y):
        return (self.x0 <= x <= self.x1) and (self.y0 <= y <= self.y1)

    def intersec_diag(self, ret):
        det = (ret.x1 - ret.x0)*(self.y1 - self.y0) - (ret.y1 - ret.y0)*(self.x1 - self.x0)
        return det != 0

    def colisao(self, ret):
        if self.ponto_dentro(ret.x0, ret.y0):
            return True
        if self.ponto_dentro(ret.x1, ret.y0):
            return True
        if self.ponto_dentro(ret.x0, ret.y1):
            return True
        if self.ponto_dentro(ret.x1, ret.y1):
            return True

        return self.intersec_diag(ret)

ret1 = Retangulo(list(map(int, input().split())))
ret2 = Retangulo(list(map(int, input().split())))

print(1 if ret1.colisao(ret2) or ret2.colisao(ret1) else 0)

