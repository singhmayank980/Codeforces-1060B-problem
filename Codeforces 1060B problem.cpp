def countdig( n ) :
        ans = 0
        while n != 0 :
                ans += 1
                n //= 10
        return ans
def summ( n ) :
        ans = 0
        while n > 0 :
                # print( n )
                ans += n%10
                n //= 10
        return ans

n = int(input())
d = countdig( n )
num1 = 10**(d-1) - 1
num2 = n - num1
print( summ( num1 ) + summ( num2 ) )
