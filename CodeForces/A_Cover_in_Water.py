def minWater(n, s):
    coun = 0
    for i in range(0,n-2,1):
        st = s[i:i+3]
        coun = st.count('.')
        if  coun == 3:
            return 2
        
    return s.count('.')

if __name__== "__main__":

    t = int(input())
    for _ in range(t):
        n = int(input())
        string = input()
        print(minWater(n, string))

