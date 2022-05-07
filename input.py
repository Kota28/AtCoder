

i = list(map(int, input().split())) #i_1 i_2を取得し、iに値を入れる
s = [input() for i in range(3)]
print(s) #出力['s_1', 's_2', 's_3']
i = [int(input()) for i in range(3)]
N = int(input()) #1行目のNを取得する
s = [input() for i in range(N)] #複数行の数値の入力を取得
print(s) #出力：['s_1', 's_2', 's_3', 's_N']