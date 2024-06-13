class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        seats=sorted(seats)
        students=sorted(students)
        k=0
        for i in range(len(seats)):
            k+=abs(students[i]-seats[i])
        return k
        