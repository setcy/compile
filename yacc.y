
%{
#include <stdio.h>
#include <string.h>

#include "tree.c"

int yylex(void);

void yyerror(const char *str){
    fprintf(stderr, "error:%s\n",str);
}

TreeNode* root;

%}

%union{
  int intValue;
  double floats;
  char* string;

  TreeNode* tree_node;
  int lineno;
}

%token <lineno> INT FLOAT CONST VOID IF ELSE WHILE BREAK CONTINUE RETURN
%token <lineno> ASSIGN EQUAL UNEQUAL LESS GREATER LESSEQUAL GREATEREQUAL
%token <intValue> INTEGER_LITERAL

%token <string> ID
%token <lineno> LBRACE RBRACE LBRACKET RBRACKET LPAREN RPAREN COMMA SEMICOLON ADD SUB MUL DIV 

%type <tree_node> CompUnit Decl ConstDecl BType ConstDef MoreConstDefs ConstInitVal MoreConstInitVals ConstInitValList
%type <tree_node> VarDecl VarDef MoreVarDefs InitVal InitValList MoreInitVals FuncDef FuncType FuncFParams MoreFuncFParams FuncFParam ArraySpecifierForParam
%type <tree_node> ArraySpecifier Block BlockItems BlockItem Stmt ElseClause ExpOpt Cond LVal Exp PrimaryExp Number UnaryExp UnaryOp FuncRParams MoreFuncRParams
%type <tree_node> MulExp AddExp RelExp EqExp LAndExp LOrExp ConstExp 


%%

CompUnit          : CompUnit FuncDef {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("CompUnit", yylineno);
                    root = $$;
                  }
                  ;

Decl              : ConstDecl {
                    $$ = createTreeNodeLine("Decl", yylineno);
                  }
                  | VarDecl {
                    $$ = createTreeNodeLine("Decl", yylineno);
                  }
                  ;

ConstDecl         : CONST BType ConstDef MoreConstDefs SEMICOLON {
                    $$ = createTreeNodeLine("VarDecl", $1);
                  }
                  ;

BType             : INT {
                    $$ = createTreeNodeLine("BType", yylineno);
                    addChild($$, createTreeNodeString("Type", yylineno, "int"));
                  }
                  | FLOAT {
                    $$ = createTreeNodeLine("BType", yylineno);
                    addChild($$, createTreeNodeString("Type", yylineno, "float"));
                  }
                  ;

ConstDef          : ID ArraySpecifier ASSIGN ConstInitVal {
                    $$ = createTreeNodeLine("ConstDef", $1); 
                    addChild($$, createTreeNodeString("ID1", $1, $1));
                    addChild($$, createTreeNode("ASSIGN"));
                    addChild($$, $4);
                  }
                  ;

MoreConstDefs     : COMMA ConstDef MoreConstDefs {
                    addChild($2, $3);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("MoreConstDefs", yylineno);
                  }
                  ;

ConstInitVal      : ConstExp {
                    $$ = createTreeNodeLine("ConstInitVal", $1);
                    addChild($$, $1);
                  }
                  | LBRACE ConstInitValList RBRACE {
                    $$ = createTreeNodeLine("ConstInitVal", yylineno);
                    addChild($$, createTreeNode("LBRACE"));
                    addChild($$, $2);
                    addChild($$, createTreeNode("RBRACE"));
                  }
                  ;

ConstInitValList  : ConstInitVal MoreConstInitVals {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("ConstInitValList", yylineno);
                  }
                  ;

MoreConstInitVals : COMMA ConstInitVal MoreConstInitVals {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("MoreConstInitVals", yylineno);
                  }
                  ;

VarDecl           : BType VarDef MoreVarDefs SEMICOLON {
                    $$ = createTreeNodeLine("VarDecl", $1);
                  }
                  ;

VarDef            : ID ArraySpecifier {
                    $$ = createTreeNodeLine("VarDef", $1);
                    addChild($$, createTreeNodeString("ID2", $1, $1));
                    addChild($$, $2);
                  }
                  | ID ArraySpecifier ASSIGN InitVal {
                    $$ = createTreeNodeLine("VarDef", $1); 
                    addChild($$, createTreeNodeString("ID3", $1, $1));
                    addChild($$, $2);
                    addChild($$, createTreeNode("ASSIGN"));
                    addChild($$, $4);
                  }
                  ;

MoreVarDefs       : COMMA VarDef MoreVarDefs {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("MoreVarDefs", yylineno);
                  }
                  ;

InitVal           : Exp {
                    $$ = createTreeNodeLine("InitVal", $1);
                    addChild($$, $1);
                  }
                  | LBRACE InitValList RBRACE {
                    $$ = createTreeNodeLine("InitVal", $1);
                    addChild($$, createTreeNode("LBRACE"));
                    addChild($$, $2);
                    addChild($$, createTreeNode("RBRACE"));
                  }
                  ;

InitValList       : InitVal MoreInitVals {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("InitValList", yylineno);
                  }
                  ;

MoreInitVals      : COMMA InitVal MoreInitVals {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("MoreInitVals", yylineno);
                  }
                  ;

FuncDef           : FuncType ID LPAREN FuncFParams RPAREN Block {
                    $$ = createTreeNodeLine("FuncDef", $1); 
                    addChild($$, $1);
                    addChild($$, createTreeNodeString("ID4", $2, $2));
                    addChild($$, createTreeNode("LPARENT"));
                    addChild($$, $4);
                    addChild($$, createTreeNode("RPARENT"));
                    addChild($$, $6);
                  }
                  ;

FuncType          : VOID {
                    $$ = createTreeNodeLine("FuncDef", yylineno);
                    addChild($$, createTreeNodeString("Type", yylineno, "void"));
                  }
                  | INT {
                    $$ = createTreeNodeLine("FuncDef", yylineno);
                    addChild($$, createTreeNodeString("Type", yylineno, "int"));
                  }
                  | FLOAT {
                    $$ = createTreeNodeLine("FuncDef", yylineno);
                    addChild($$, createTreeNodeString("Type", yylineno, "float"));
                  }
                  ;

FuncFParams       : FuncFParam MoreFuncFParams {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("FuncFParams", yylineno);
                  }
                  ;

MoreFuncFParams   : COMMA FuncFParam MoreFuncFParams {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("MoreFuncFParams", yylineno);
                  }
                  ;

FuncFParam        : BType ID ArraySpecifierForParam {
                    $$ = createTreeNodeLine("FuncFParam", $1); 
                    addChild($$, $1);
                    addChild($$, createTreeNodeString("ID5", $2, $2));
                    addChild($$, $3);
                  }
                  ;

ArraySpecifierForParam : LBRACKET RBRACKET ArraySpecifier {
                          $$ = $3;
                        }
                       | /* empty */ {
                          $$ = createTreeNodeLine("ArraySpecifier", yylineno);
                        }
                       ;

ArraySpecifier    : LBRACKET ConstExp RBRACKET ArraySpecifier {
                    $$ = createTreeNodeLine("ArraySpecifier", $1);
                    addChild($$, createTreeNode("LBRACKET"));
                    addChild($$, $2);
                    addChild($$, createTreeNode("RBRACKET"));
                    addChild($$, $4);
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("ArraySpecifier", yylineno);
                  }
                  ;

Block             : LBRACE BlockItems RBRACE {
                    $$ = createTreeNodeLine("Block", $1);
                    addChild($$, createTreeNode("LBRACE"));
                    addChild($$, $2);
                    addChild($$, createTreeNode("RBRACE"));
                  }
                  ;

BlockItems        : BlockItem BlockItems {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("BlockItems", yylineno);
                  }
                  ;

BlockItem         : Decl {
                    $$ = createTreeNodeLine("BlockItem", $1);
                  }
                  | Stmt {
                    $$ = createTreeNodeLine("BlockItem", $1);
                  }
                  ;

Stmt              : LVal ASSIGN Exp SEMICOLON {
                    $$ = createTreeNodeLine("Stmt", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("ASSIGN"));
                    addChild($$, $3);
                  }
                  | Exp SEMICOLON {
                    $$ = createTreeNodeLine("Stmt", $1);
                    addChild($$, $1);
                  }
                  | Block {
                    $$ = createTreeNodeLine("Stmt", $1);
                  }
                  | IF LPAREN Cond RPAREN Stmt ElseClause {
                    $$ = createTreeNodeLine("Stmt", $1);
                    addChild($$, createTreeNode("IF"));
                    addChild($$, createTreeNode("LPARENT"));
                    addChild($$, $3);
                    addChild($$, createTreeNode("RPARENT"));
                    addChild($$, $5);
                    addChild($$, $6);
                  }
                  | WHILE LPAREN Cond RPAREN Stmt {
                    $$ = createTreeNodeLine("Stmt", $1);
                    addChild($$, createTreeNode("WHILE"));
                    addChild($$, createTreeNode("LPARENT"));
                    addChild($$, $3);
                    addChild($$, createTreeNode("RPARENT"));
                    addChild($$, $5);
                  }
                  | BREAK SEMICOLON {
                    $$ = createTreeNodeLine("Stmt", $1);
                    addChild($$, createTreeNode("BREAK"));
                  }
                  | CONTINUE SEMICOLON {
                    $$ = createTreeNodeLine("Stmt", $1);
                    addChild($$, createTreeNode("CONTINUE"));
                  }
                  | RETURN ExpOpt SEMICOLON {
                    $$ = createTreeNodeLine("Stmt", $1);
                    addChild($$, createTreeNode("RETURN"));
                    addChild($$, $2);
                  }
                  ;

ElseClause        : ELSE Stmt {
                    $$ = createTreeNodeLine("ElseClause", $1);
                    addChild($$, createTreeNode("ELSE"));
                    addChild($$, $2);
                  }
                  ;

ExpOpt            : Exp {
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("ExpOpt", yylineno);
                  }
                  ;

Cond              : LOrExp {
                    $$ = createTreeNodeLine("Cond", $1);
                    addChild($$, $1);
                  }
                  ;

LVal              : ID ArraySpecifier {
                    $$ = createTreeNodeLine("LVal", $1);
                    addChild($$, createTreeNodeString("ID6", $1, $1));
                    addChild($$, $2);
                  }
                  ;

Exp               : AddExp {
                    $$ = createTreeNodeLine("Exp", $1);
                    addChild($$, $1);
                  }
                  ;

PrimaryExp        : LPAREN Exp RPAREN {
                    $$ = createTreeNodeLine("PrimaryExp", $1);
                    addChild($$, createTreeNode("LPARENT"));
                    addChild($$, $2);
                    addChild($$, createTreeNode("RPARENT"));
                  }
                  | LVal {
                    $$ = createTreeNodeLine("PrimaryExp", $1);
                    addChild($$, $1);
                  }
                  | Number {
                    $$ = createTreeNodeLine("PrimaryExp", $1);
                    addChild($$, $1);
                  }
                  ;

Number            : INTEGER_LITERAL {
                    $$ = createTreeNodeString("Number", $1, "int");
                    addChild($$, createTreeNodeInt("INT", $1, $1));
                  }
                  ;

UnaryExp          : PrimaryExp {
                    $$ = createTreeNodeLine("UnaryExp", $1);
                    addChild($$, $1);
                  }
                  | ID LPAREN FuncRParams RPAREN {
                    $$ = createTreeNodeLine("UnaryExp", $1);
                    addChild($$, createTreeNodeString("ID7", $1, $1));
                    addChild($$, createTreeNode("LPARENT"));
                    addChild($$, $3);
                    addChild($$, createTreeNode("RPARENT"));
                  }
                  | UnaryOp UnaryExp {
                    $$ = createTreeNodeLine("UnaryExp", $1);
                    addChild($$, createTreeNode($1));
                    addChild($$, $2);
                  }
                  ;

UnaryOp           : ADD {
                    $$ = createTreeNodeString("UnaryOp", yylineno, "+");
                  }
                  | SUB {
                    $$ = createTreeNodeString("UnaryOp", yylineno, "-");
                  }
                  ;

FuncRParams       : Exp MoreFuncRParams {
                    $$ = createTreeNodeLine("FuncRParams", $1);
                    addChild($$, $1);
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("FuncRParams", yylineno);
                  }
                  ;

MoreFuncRParams   : COMMA Exp MoreFuncRParams {
                    addChild($1, $2);
                    $$ = $1;
                  }
                  | /* empty */ {
                    $$ = createTreeNodeLine("MoreFuncRParams", yylineno);
                  }
                  ;

MulExp            : UnaryExp {
                    $$ = createTreeNodeLine("MulExp", $1);
                    addChild($$, $1);
                  }
                  | MulExp MUL UnaryExp {
                    $$ = createTreeNodeLine("MulExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("MUL"));
                    addChild($$, $3);
                  }
                  | MulExp DIV UnaryExp {
                    $$ = createTreeNodeLine("MulExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("DIV"));
                    addChild($$, $3);
                  }
                  ;
 
AddExp            : MulExp {
                    $$ = createTreeNodeLine("AddExp", $1);
                    addChild($$, $1);
                  }
                  | AddExp ADD MulExp {
                    $$ = createTreeNodeLine("AddExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("ADD"));
                    addChild($$, $3);
                  }
                  | AddExp SUB MulExp {
                    $$ = createTreeNodeLine("AddExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("SUB"));
                    addChild($$, $3);
                  }
                  ;

RelExp            : AddExp {
                    $$ = createTreeNodeLine("RelExp", $1);
                    addChild($$, $1);
                  }
                  | RelExp LESS AddExp {
                    $$ = createTreeNodeLine("RelExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("LESS"));
                    addChild($$, $3);
                  }
                  | RelExp GREATER AddExp {
                    $$ = createTreeNodeLine("RelExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("GREATER"));
                    addChild($$, $3);
                  }
                  | RelExp LESSEQUAL AddExp {
                    $$ = createTreeNodeLine("RelExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("LESSEQUAL"));
                    addChild($$, $3);
                  }
                  | RelExp GREATEREQUAL AddExp {
                    $$ = createTreeNodeLine("RelExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("GREATEREQUAL"));
                    addChild($$, $3);
                  }
                  ;

EqExp             : RelExp {
                    $$ = createTreeNodeLine("EqExp", $1);
                    addChild($$, $1);
                  }
                  | EqExp EQUAL RelExp {
                    $$ = createTreeNodeLine("EqExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("EQUAL"));
                    addChild($$, $3);
                  }
                  | EqExp UNEQUAL RelExp {
                    $$ = createTreeNodeLine("EqExp", $1);
                    addChild($$, $1);
                    addChild($$, createTreeNode("UNEQUAL"));
                    addChild($$, $3);
                  }
                  ;

LAndExp           : EqExp {
                    $$ = createTreeNodeLine("LAndExp", $1);
                    addChild($$, $1);
                  }
                  ;

LOrExp            : LAndExp {
                    $$ = createTreeNodeLine("LOrExp", $1);
                    addChild($$, $1);
                  }
                  ;

ConstExp          : AddExp {
                    $$ = createTreeNodeLine("ConstExp", $1);
                    addChild($$, $1);
                  }
                  ;


%%