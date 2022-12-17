#include <stdio.h>

int main() {

    FILE *fp;
    char filename[] = "my_file2.txt";

    fp = fopen(filename, "w");
    fprintf(fp, "This is a file created by my program! ");
    fprintf(fp, " I am so happy.\n");
    fclose(fp);

    fp = fopen(filename, "a"); // a stand for "Append"
    fprintf(fp, "Second line.\n");
    fclose(fp);

    return 0;
}