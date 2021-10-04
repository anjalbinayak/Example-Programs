def getNumberOfWays(N, Coins, k):
    ways = [0] * (N + 1)
    ways[0] = 1
    for i in range(len(Coins)):
        for j in range(len(ways)):
            if (Coins[i] <= j):
                ways[j] += ways[(int)(j - Coins[i])]

    return ways[N]

def printArray(coins):
    for i in coins:
        print(i)

if _name_ == '_main_':
    Coins = [0, 1, 2, 3, 8]

    print("The Coins Array:")
    printArray(Coins)
    total = int(input("pls enter the total value you want :"))
    print("Solution:",end="")
    print(getNumberOfWays(total, Coins))