class Solution(object):
    def coinChange(self, coins, amount):

        for i, coin in enumerate(coins):
            if coin > amount:
                coins.pop(i)

        coins = sorted(coins,reverse=True)
        count = rec_sum(coins, amount, 0)
        print(count)


def rec_sum(coins, amount, count):
    if amount == 0:
        return 0
    else:
        for i, coin in enumerate(coins):
            if coin < amount:
                count += 1
                coins.pop(i)
                rec_sum(coins, amount-coin, count)
            else: continue
        return count



coins = input().split(',')
for index, item in enumerate(coins):
    coins[index] = int(item)
amount = int(input())

sol = Solution()
sol.coinChange(coins, amount)
