from sys import maxsize
n = int(input())
matrix = []

for i in range(n):
    matrix.append([int(i) for i in input().split()])


H = -maxsize

for i in range(0,n-2):
    for j in range(0,n-2):
        H = max(H,matrix[i][j] + matrix[i][j+2] +sum(matrix[i+1][j:j+3]) + matrix[i+2][j] + matrix[i+2][j+2])

print(H)
