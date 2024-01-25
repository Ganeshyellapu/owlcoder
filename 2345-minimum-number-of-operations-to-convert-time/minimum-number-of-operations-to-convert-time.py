class Solution:
    def convertTime(self, current: str, correct: str) -> int:
        k=current.split(":")
        l=correct.split(":")
        ans=0
        h1=int(l[0])
        m1=int(l[1])
        h1=h1*60
        t1=h1+m1
        h=int(k[0])
        m=int(k[1])
        h=h*60
        t=h+m
        r=t1-t
        a60=r//60
        a1=r%60
        a15=a1//15
        a2=a1%15
        a5=a2//5
        a3=a2%5
        a11=a3
        ans=a60+a15+a5+a11
        return ans


            


        