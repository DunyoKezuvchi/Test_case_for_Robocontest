from random import*
t=int(input('Testlar sonini kiriting: '))
for _ in range(1,t+1):
    n=randrange(1,1000)
    file1=open('0'*(3-len(str(_)))+str(_)+'.in','w')
    file1.write(str(n))
    file1.close()
    file2=open('0'*(3-len(str(_)))+str(_)+'.out','w')
    file2.write(str(n*2))
    file2.close()
    
    print(_,'- Good')

