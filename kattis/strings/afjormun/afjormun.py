def solve(n, arr):
    for sentence in arr:
        print(sentence.lower().capitalize())


if __name__ == "__main__":
    n = int(input().strip())
    arr = []
    for _ in range(n):
        sentence = input().strip()
        arr.append(sentence)
    solve(n, arr)
