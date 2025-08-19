n = int(input())
x = int(input())
y = int(input())

for i in range(1, n+1):
    for j in range(1, n+1):
        if(i == x and j == y):
            print(f"\033[0;30;42m({i}, {j})\033[m", end='')
        else:
            print(f"\033[0;30;41m({i}, {j})\033[m", end='')
    print()
    
def tromino(n, x, y):
    mid = int(n / 2)
    print(f'mid={mid}')
    if(x <= mid and y >= mid):
        print('1Q')
    if(x <= mid and y <= mid):
        print('2Q')
    if(x >= mid and y <= mid):
        print('3Q')
    if(x >= mid and y <= mid):
        print('4Q')

tromino(n, x, y)

