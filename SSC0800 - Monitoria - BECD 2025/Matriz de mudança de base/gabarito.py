import numpy as np
import sys

def calcular_matrizes_mudanca_de_base():
    try:
        linhas = sys.stdin.readlines()
        if len(linhas) < 3:
            c1_coords = list(map(int, input().split()))
            c2_coords = list(map(int, input().split()))
            c3_coords = list(map(int, input().split()))
        else:
            c1_coords = list(map(int, linhas[0].split()))
            c2_coords = list(map(int, linhas[1].split()))
            c3_coords = list(map(int, linhas[2].split()))

    except (ValueError, IndexError, EOFError):
        return
    
    dados_linhas = [c1_coords, c2_coords, c3_coords]
    
    matriz_C_para_B = np.array(dados_linhas).T

    np.set_printoptions(precision=5, suppress=True)

    try:
        matriz_B_para_C = np.linalg.inv(matriz_C_para_B)
        
        print("--- Matriz de C para B ---")
        print(matriz_C_para_B)
        
        print()
        
        print("--- Matriz de B para C ---")
        print(matriz_B_para_C)

    except np.linalg.LinAlgError:
        print("Erro: A matriz de entrada não é invertível (vetores L.D.).")

if __name__ == "__main__":
    calcular_matrizes_mudanca_de_base()