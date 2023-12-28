%{
#include <stdio.h>
#include <stdlib.h>

extern int hasError;

%}

/* Prevent the need for linking with -lfl */
%option noyywrap
%option nounput
%option noinput

%%

\n                            { ++yylineno;}
[\ \t\b\f]+                    // ignore whitespace

"0"[xX][0-9AaBbCcDdEeFf]+     {char *end; int val = strtol(yytext, &end, 16); yylval.intValue=val; return INTEGER_LITERAL;}
"0"[xX][0-9a-zA-Z]+           {printf("Error type A at Line %d: Invalid hexadecimal number '%s'\n", yylineno, yytext); hasError = 1;}
"0"[0-7]+                     {char *end; int val = strtol(yytext, &end, 8); yylval.intValue=val; return INTEGER_LITERAL;}
"0"[0-9a-zA-Z]+               {printf("Error type A at Line %d: Invalid octal number '%s'\n", yylineno, yytext); hasError = 1;}
[0-9]+                        {char *end; int val = strtol(yytext, &end, 10); yylval.intValue=val; return INTEGER_LITERAL;}

"const"                { yylval.lineno = yylineno; return CONST; }
"int"                  { yylval.lineno = yylineno; return INT; }
"float"                { yylval.lineno = yylineno; return FLOAT; }
"void"                 { yylval.lineno = yylineno; return VOID; }
"if"                   { yylval.lineno = yylineno; return IF; }
"else"                 { yylval.lineno = yylineno; return ELSE; }
"while"                { yylval.lineno = yylineno; return WHILE; }
"break"                { yylval.lineno = yylineno; return BREAK; }
"continue"             { yylval.lineno = yylineno; return CONTINUE; }
"return"               { yylval.lineno = yylineno; return RETURN; }

"{"                    { yylval.lineno = yylineno; return LBRACE; }
"}"                    { yylval.lineno = yylineno; return RBRACE; }
"["                    { yylval.lineno = yylineno; return LBRACKET; }
"]"                    { yylval.lineno = yylineno; return RBRACKET; }
"("                    { yylval.lineno = yylineno; return LPAREN; }
")"                    { yylval.lineno = yylineno; return RPAREN; }
","                    { yylval.lineno = yylineno; return COMMA; }
";"                    { yylval.lineno = yylineno; return SEMICOLON; }
"+"                    { yylval.lineno = yylineno; return ADD; }
"-"                    { yylval.lineno = yylineno; return SUB; }
"*"                    { yylval.lineno = yylineno; return MUL; }
"/"                    { yylval.lineno = yylineno; return DIV; }
"="                    { yylval.lineno = yylineno; return ASSIGN; }
"=="                   { yylval.lineno = yylineno; return EQUAL; }
"!="                   { yylval.lineno = yylineno; return UNEQUAL; }
"<"                    { yylval.lineno = yylineno; return LESS; }
">"                    { yylval.lineno = yylineno; return GREATER; }
"<="                   { yylval.lineno = yylineno; return LESSEQUAL; }
">="                   { yylval.lineno = yylineno; return GREATEREQUAL; }

[A-Za-z_][A-Za-z0-9_]* { yylval.string=malloc(strlen(yytext) + 1); strcpy(yylval.string, yytext); return ID;}

.                             {printf("Error type A at Line %d: Invalid character '%c'\n", yylineno, yytext[0]); hasError = 1;}
%% 

