def reverse(x):
        s = list(str(abs(x)))
        s.reverse()
        fn = int(''.join(s))
        if abs(fn) > 2 ** 31 - 1:
            return 0
        else:
            if x > 0:
                return fn
            else:
                return -fn
x = int(input())
print(reverse(x))
