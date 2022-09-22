class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        x = 0
        y = 0
        while x < len(matrix[0]):
            if matrix[y][x] == 0:
                if x == 0 and y == 0:
                    matrix[0][0] = 'b'
                elif x == 0 or y == 0:
                    if x == 0:
                        if matrix[0][0] == 'y':
                            matrix[0][0] = 'b'
                        elif matrix[0][0] != 'b':
                            matrix[0][0] = 'x'
                        matrix[y][0] = 'z'
                    elif y == 0:
                        if matrix[0][0] == 'x':
                            matrix[0][0] = 'b'
                        elif matrix[0][0] != 'b':
                            matrix[0][0] = 'y'
                        matrix[0][x] = 'z'
                else:
                    matrix[y][0] = 'z'
                    matrix[0][x] = 'z'
            x += 1 
            if x == len(matrix[0]) and y != len(matrix) - 1:
                x = 0
                y += 1
        
        for i in range(1, len(matrix)):
            if matrix[i][0] == 'z':
                for j in range(0,len(matrix[0])):
                    matrix[i][j] = 0
        for i in range(1, len(matrix[0])):           
            if matrix[0][i] == 'z':
                for j in range(0,len(matrix)):
                    matrix[j][i] = 0
        if matrix[0][0] == 'y':
            for i in range(0,len(matrix[0])):
                matrix[0][i] = 0
        elif matrix[0][0] == 'x':
            for i in range(0,len(matrix)):
                matrix[i][0] = 0
        elif matrix[0][0] == 'b':
            for i in range(0,len(matrix[0])):
                matrix[0][i] = 0
            for i in range(0,len(matrix)):
                matrix[i][0] = 0
        return matrix
                
        
        