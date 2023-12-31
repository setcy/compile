#include <stdio.h>
#include <stdlib.h>

extern int yylineno;

int hasError;

#include "yacc.tab.c"
#include "lex.yy.c"

int main()
{
    yylineno = 1;
    yyin = fopen("test1.txt", "r");
    root = createTreeNode("root");

    if (yyin)
    {
        yyparse();
        fclose(yyin);
    }
    else
    {
        printf("unable to open file:\n");
        return 0;
    }

    if (!hasError) {
        traverseTree(root, 0);
    }

    return 0;
}