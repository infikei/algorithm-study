# Solve 2022-06-01
# Update 2024-01-28

import sys

input = lambda : sys.stdin.readline().rstrip()

n = int(input())
li = sorted([int(input()) for _ in range(n)])

print(*li, sep="\n")
