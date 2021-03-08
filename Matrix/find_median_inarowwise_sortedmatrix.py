#Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.
class Solution:
    def median(self, matrix, r, c):
        lst=[]
        for i in range(0,r):
            for j in range(0,c):
                lst.append(matrix[i][j])
        lst.sort()
        return lst[(len(lst)//2)]