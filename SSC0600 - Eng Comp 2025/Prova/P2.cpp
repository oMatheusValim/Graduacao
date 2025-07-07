// Matheus Valim Nogueira 
// Número USP: 15746323

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>     
#include <cstring>     
#include <iomanip>      
#include <sstream>    
#include <cctype>      

struct LinhaArquivo {
    int numeroLinha;
    char conteudo[151]; 
};

struct Estatisticas {
    int contInt;
    int contChar;
    int contFloat;
    int contDouble;
};

int contarLinhasArquivo();
void lerArquivoParaMemoria(LinhaArquivo*& dados, int numLinhas);
void renumerarLinhas(LinhaArquivo* dados, int numLinhas, int inicio, int incremento);
void criarSalvarExibirArquivo(const LinhaArquivo* dados, int numLinhas);
Estatisticas calcularEstatisticas(const LinhaArquivo* dados, int numLinhas);
bool palavraChaveEncontrada(const char* linha, const char* palavra);

int main() {
    int numLinhas = contarLinhasArquivo();
    if (numLinhas == 0) {
        std::cout << "Arquivo 'texto.txt' esta vazio ou nao foi encontrado." << std::endl;
        return 1;
    }

    LinhaArquivo* dadosDoArquivo = nullptr;
    lerArquivoParaMemoria(dadosDoArquivo, numLinhas);

    int inicio, incremento;
    std::cin >> inicio >> incremento;

    renumerarLinhas(dadosDoArquivo, numLinhas, inicio, incremento);

    criarSalvarExibirArquivo(dadosDoArquivo, numLinhas);

    Estatisticas stats = calcularEstatisticas(dadosDoArquivo, numLinhas);

    std::cout << "NI:" << stats.contInt << std::endl;
    std::cout << "NC:" << stats.contChar << std::endl;
    std::cout << "NF:" << stats.contFloat << std::endl;
    std::cout << "ND:" << stats.contDouble << std::endl;

    free(dadosDoArquivo);

    return 0;
}

int contarLinhasArquivo() {
    std::ifstream arquivo("texto.txt");
    if (!arquivo.is_open()) {
        return 0; 
    }

    std::string linha;
    int contador = 0;
    while (std::getline(arquivo, linha)) {
        if (!linha.empty() && linha[0] == '@') {
            break;
        }
        contador++;
    }

    arquivo.close();
    return contador;
}

void lerArquivoParaMemoria(LinhaArquivo*& dados, int numLinhas) {
    dados = (LinhaArquivo*)calloc(numLinhas, sizeof(LinhaArquivo));
    if (dados == nullptr) {
        std::cerr << "ERRO\n";
        exit(1); 
    }

    std::ifstream arquivo("texto.txt");
    if (!arquivo.is_open()) {
        std::cerr << "ERRO\n";
        free(dados); 
        exit(1);     
    }

    std::string linhaStr;
    for (int i = 0; i < numLinhas; ++i) {
        if (!std::getline(arquivo, linhaStr)) {
            break; 
        }
        if (!linhaStr.empty() && linhaStr[0] == '@') {
            break;
        }
        strncpy(dados[i].conteudo, linhaStr.c_str(), 150);
        dados[i].conteudo[150] = '\0'; 
    }

    arquivo.close();
}

bool palavraChaveEncontrada(const char* linha, const char* palavra) {
    const char* ocorrencia = strstr(linha, palavra);
    
    while (ocorrencia != nullptr) {
        bool inicioCorreto = (ocorrencia == linha) || !isalnum(*(ocorrencia - 1));

        const char* finalDaOcorrencia = ocorrencia + strlen(palavra);
        bool fimCorreto = (*finalDaOcorrencia == '\0') || !isalnum(*finalDaOcorrencia);

        if (inicioCorreto && fimCorreto) {
            return true; 
        }

        ocorrencia = strstr(ocorrencia + 1, palavra);
    }

    return false;
}

Estatisticas calcularEstatisticas(const LinhaArquivo* dados, int numLinhas) {
    Estatisticas stats = {0, 0, 0, 0};

    for (int i = 0; i < numLinhas; ++i) {
        if (palavraChaveEncontrada(dados[i].conteudo, "int")) {
            stats.contInt++;
        }
        if (palavraChaveEncontrada(dados[i].conteudo, "char")) {
            stats.contChar++;
        }
        if (palavraChaveEncontrada(dados[i].conteudo, "float")) {
            stats.contFloat++;
        }
        if (palavraChaveEncontrada(dados[i].conteudo, "double")) {
            stats.contDouble++;
        }
    }
    return stats;
}

void renumerarLinhas(LinhaArquivo* dados, int numLinhas, int inicio, int incremento) {
    for (int i = 0; i < numLinhas; ++i) {
        dados[i].numeroLinha = inicio + (i * incremento);
    }
}

void criarSalvarExibirArquivo(const LinhaArquivo* dados, int numLinhas) {
    std::ofstream arquivoSaida("numerado.txt");
    if (!arquivoSaida.is_open()) {
        std::cerr << "ERRO ao criar 'numerado.txt'\n";
        return;
    }

    for (int i = 0; i < numLinhas; ++i) {
        std::stringstream ss;
        ss << std::setw(6) << std::setfill('0') << dados[i].numeroLinha << " " << dados[i].conteudo;
        std::string linhaFormatada = ss.str();
        
        std::cout << linhaFormatada << std::endl;
        arquivoSaida << linhaFormatada << std::endl;
    }
    arquivoSaida.close();
}