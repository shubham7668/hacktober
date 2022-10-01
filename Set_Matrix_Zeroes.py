class Solution(object):
    def setZeroes(self, matrix):
 	mask = -1
        high = len(matrix)
        width = len(matrix[0])
        for r in range(high):
            clear = False
            for c in range(width):
                if matrix[r][c] == 0:
                    if mask == -1:                  
                        mask = r                    
                        for i in range(width):      
                            matrix[mask][i] = 1 if matrix[mask][i] != 0 else 0
                        break                        
                    else:                           
                        clear = True                
                    matrix[mask][c] = 0             
            if clear:
                matrix[r] = [0] * width             
        if mask == -1:                              
            return
        for r in range(high):
            for c in range(width):                  
                matrix[r][c] = matrix[mask][c] and matrix[r][c]
        matrix[mask] = [0] * width     