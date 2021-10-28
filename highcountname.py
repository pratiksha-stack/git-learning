class Painting:
    def __init__(self, pid, name, price, ptype):
        self.pid = pid
        self.name = name
        self.price = price
        self.ptype = ptype


class ShowRoom:
    def __init__(self, plist):
        self.plist = plist

    def Total(self, typep):
        pr = 0
        f = 0
        for i in self.plist:
            if i.ptype.lower() == typep.lower():
                f = 1
                pr = pr+i.price
        if f:
            return pr
        else:
            None

    def MaxCount(self):
        dict1 = {}
        lis = []
        for i in self.plist:
            if i.name in dict1:
                dict1[i.name] += 1
            else:
                dict1[i.name] = 1
        sort = sorted(dict1.items(), key=lambda x: x[1])
        val = sort[-1][1]
        for i in sort:
            if val == i[1]:
                lis.append(i[0])
        if len(lis) > 1:
            lis.sort()
            return lis[0]
        else:
            return sort[-1][0]


n = int(input())
listp = []
for i in range(n):
    pid = int(input())
    name = input()
    price = int(input())
    ptype = input()
    listp.append(Painting(pid, name, price, ptype))
obj1 = ShowRoom(listp)
typep = input()
ans1 = obj1.Total(typep)
print(ans1)
ans2 = obj1.MaxCount()
print(ans2)
