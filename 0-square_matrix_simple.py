#!/usr/bin/python3
"""
def my_function(num):
    return num*num

def my_map(function, lista):
    nueva_lista=[]
    for valor in lista:
        nuevo_valor=function(valor)
        nueva_lista.append(nuevo_valor)
    return nueva_lista
        
my_map(my_function, [1,2])
"""

def square_matrix_simple(matrix=[]):
    fun_square=lambda num: num*num #num recive the multiplication of itself
    """
    new_matrix=[]
    for go_to in matrix:
        squares=map(fun_square, go_to) #square function and go_to iterator (list)
        result=list(squares) #cast the map type
        
        new_matrix.append(result)
    return new_matrix
       """
    return [list(map(fun_square, go_to)) for go_to in matrix]
