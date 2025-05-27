#include <cstdio>  
#include <cstring> 

const size_t SIGNATURE_BUFFER_SIZE = 8;
const int MAX_FILENAME_LEN = 256; 
const int MAX_FILETYPE_LEN = 30;  

int main() {
    char filename[MAX_FILENAME_LEN];
    unsigned char buffer[SIGNATURE_BUFFER_SIZE];
    size_t bytes_read;
    FILE* file_ptr;

    if (scanf("%255s", filename) != 1) {
        fprintf(stderr, "Erro ao ler o nome do arquivo.\n");
        return 1;
    }
    
    file_ptr = fopen(filename, "rb");
    if (file_ptr == NULL) {
        return 1; 
    }

    bytes_read = fread(buffer, 1, SIGNATURE_BUFFER_SIZE, file_ptr);

    fclose(file_ptr);

    // --- Assinaturas conhecidas ---
    const unsigned char bmp_signature[]   = {0x42, 0x4D};
    const size_t bmp_signature_len = sizeof(bmp_signature);

    const unsigned char png_signature[]   = {0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A};
    const size_t png_signature_len = sizeof(png_signature);

    const unsigned char gif_signature[]   = {0x47, 0x49, 0x46, 0x38};
    const size_t gif_signature_len = sizeof(gif_signature);

    const unsigned char jpg_signature[]   = {0xFF, 0xD8, 0xFF};
    const size_t jpg_signature_len = sizeof(jpg_signature);

    const unsigned char pdf_signature[]   = {0x25, 0x50, 0x44, 0x46}; 
    const size_t pdf_signature_len = sizeof(pdf_signature);

    const unsigned char zip_signature[]   = {0x50, 0x4B, 0x03, 0x04};
    const size_t zip_signature_len = sizeof(zip_signature);

    const unsigned char elf_signature[]   = {0x7F, 0x45, 0x4C, 0x46}; 
    const size_t elf_signature_len = sizeof(elf_signature);

    const unsigned char wav_signature[]   = {0x52, 0x49, 0x46, 0x46}; 
    const size_t wav_signature_len = sizeof(wav_signature);

    const unsigned char mp3_sig1[]      = {0xFF, 0xFB};
    const size_t mp3_sig1_len = sizeof(mp3_sig1);

    const unsigned char mp3_sig2[]      = {0x49, 0x44, 0x33}; 
    const size_t mp3_sig2_len = sizeof(mp3_sig2);


    // --- Identificação do tipo de arquivo ---
    char file_type_str[MAX_FILETYPE_LEN] = "Tipo de arquivo desconhecido"; 

    if (bytes_read >= bmp_signature_len && memcmp(buffer, bmp_signature, bmp_signature_len) == 0) {
        strcpy(file_type_str, "Arquivo BMP");
    } else if (bytes_read >= png_signature_len && memcmp(buffer, png_signature, png_signature_len) == 0) {
        strcpy(file_type_str, "Arquivo PNG");
    } else if (bytes_read >= gif_signature_len && memcmp(buffer, gif_signature, gif_signature_len) == 0) {
        strcpy(file_type_str, "Arquivo GIF");
    } else if (bytes_read >= jpg_signature_len && memcmp(buffer, jpg_signature, jpg_signature_len) == 0) {
        strcpy(file_type_str, "Arquivo JPEG");
    } else if (bytes_read >= pdf_signature_len && memcmp(buffer, pdf_signature, pdf_signature_len) == 0) {
        strcpy(file_type_str, "Arquivo PDF");
    } else if (bytes_read >= zip_signature_len && memcmp(buffer, zip_signature, zip_signature_len) == 0) {
        strcpy(file_type_str, "Arquivo ZIP");
    } else if (bytes_read >= elf_signature_len && memcmp(buffer, elf_signature, elf_signature_len) == 0) {
        strcpy(file_type_str, "Arquivo ELF");
    } else if (bytes_read >= wav_signature_len && memcmp(buffer, wav_signature, wav_signature_len) == 0) {
        strcpy(file_type_str, "Arquivo WAV");
    } else if (bytes_read >= mp3_sig1_len && memcmp(buffer, mp3_sig1, mp3_sig1_len) == 0) {
        strcpy(file_type_str, "Arquivo MP3");
    } else if (bytes_read >= mp3_sig2_len && memcmp(buffer, mp3_sig2, mp3_sig2_len) == 0) {
        strcpy(file_type_str, "Arquivo MP3");
    }

    printf("%s\n", file_type_str);

    return 0;
}