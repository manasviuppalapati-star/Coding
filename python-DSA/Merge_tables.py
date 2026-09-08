class Database:
    def __init__(self, rows):
        self.parent = list(range(len(rows)))
        self.rank = [0] * len(rows)
        self.rows = rows
        self.max_rows = max(rows)

    def find(self, i):
        if i != self.parent[i]:
            self.parent[i] = self.find(self.parent[i])
        return self.parent[i]

    def merge(self, dst, src):
        dst = self.find(dst)
        src = self.find(src)

        if dst == src:
            print(self.max_rows)
            return

        if self.rank[dst] < self.rank[src]:
            dst, src = src, dst

        self.parent[src] = dst
        self.rows[dst] += self.rows[src]
        self.rows[src] = 0

        if self.rank[dst] == self.rank[src]:
            self.rank[dst] += 1

        self.max_rows = max(self.max_rows, self.rows[dst])
        print(self.max_rows)


# Input
n, m = map(int, input().split())
rows = list(map(int, input().split()))

db = Database(rows)


for _ in range(m):
    dst, src = map(int, input().split())
    db.merge(dst - 1, src - 1)
