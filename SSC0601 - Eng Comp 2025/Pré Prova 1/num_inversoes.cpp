/*Em ciência da computação, uma inversão em um vetor é um par de índices (i, j) tal que i < j e v[i] > v[j]. Isso representa uma situação em que dois elementos estão "fora de ordem" com relação à ordenação crescente. Essa idéia é utilizada em algoritmos de ordenação, como o merge sort.

Sua tarefa é calcular o número total de inversões em um vetor de n inteiros distintos.

Esse problema é útil, por exemplo, para medir o quão desordenado um vetor está em relação à sua versão ordenada.

Entrada:

    A primeira linha contém um número inteiro n (1 ≤ n ≤ 10⁵), indicando o número de elementos do vetor.
    A segunda linha contém n inteiros distintos v[0], v[1], ..., v[n−1] (−10⁹ ≤ v[i] ≤ 10⁹), representando os elementos do vetor.

Saída:

    Um único número inteiro representando o total de inversões no vetor.
*/
#include <iostream>
#include <vector>
using namespace std;

long int merges(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    long int invCount = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid - i + 1);
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return invCount;
}
long int mergeAndCount(vector<int>& arr, vector<int>& temp, int left, int right) {
    if (left == right) return 0;

    int mid = (left + right) / 2;
    long int invCount = 0;

    invCount += mergeAndCount(arr, temp, left, mid);
    invCount += mergeAndCount(arr, temp, mid + 1, right);

    invCount += merges(arr, temp, left, mid, right);

    return invCount;
}


int main() {
    int tamanho;
    cin >> tamanho;
    vector<int> numeros(tamanho);
    vector<int> temp(tamanho);

    for (int i = 0; i < tamanho; i++) {
        cin >> numeros[i];
    }

    long int cont = mergeAndCount(numeros, temp, 0, tamanho - 1);
    cout << cont << endl;

    return 0;
}
