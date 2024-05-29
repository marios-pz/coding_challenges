def main():
    arr = list(map(int, input().split()))
    h1, h2 = arr[-2], arr[-1]
    arr = arr[:-2]
    arr.sort(reverse=True)
    res = []
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                a, b, c = arr[i], arr[j], arr[k]
                if (a + b + c) == h1:
                    arr.remove(a)
                    arr.remove(b)
                    arr.remove(c)
                    res.extend([a, b, c])
                    break
            if len(res) > 0:
                break
        if len(res) > 0:
            break
    res.extend(arr)
    print(" ".join(map(str, res)))


if __name__ == "__main__":
    main()
