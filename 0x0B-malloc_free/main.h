int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int find_length(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
char **alloc_arr(int row, int col);