/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "yacc.y"

#include <stdio.h>
#include <string.h>

#include "tree.c"

extern int hasError;

int yylex(void);

void yyerror(const char *str) {
    hasError = 1;
    fprintf(stderr, "Error type B at Line %d: %s\n", yylineno, str);
}

TreeNode* root;


#line 90 "yacc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    CONST = 260,                   /* CONST  */
    VOID = 261,                    /* VOID  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    WHILE = 264,                   /* WHILE  */
    BREAK = 265,                   /* BREAK  */
    CONTINUE = 266,                /* CONTINUE  */
    RETURN = 267,                  /* RETURN  */
    ASSIGN = 268,                  /* ASSIGN  */
    EQUAL = 269,                   /* EQUAL  */
    UNEQUAL = 270,                 /* UNEQUAL  */
    LESS = 271,                    /* LESS  */
    GREATER = 272,                 /* GREATER  */
    LESSEQUAL = 273,               /* LESSEQUAL  */
    GREATEREQUAL = 274,            /* GREATEREQUAL  */
    LBRACE = 275,                  /* LBRACE  */
    RBRACE = 276,                  /* RBRACE  */
    LBRACKET = 277,                /* LBRACKET  */
    RBRACKET = 278,                /* RBRACKET  */
    LPAREN = 279,                  /* LPAREN  */
    RPAREN = 280,                  /* RPAREN  */
    COMMA = 281,                   /* COMMA  */
    SEMICOLON = 282,               /* SEMICOLON  */
    ADD = 283,                     /* ADD  */
    SUB = 284,                     /* SUB  */
    MUL = 285,                     /* MUL  */
    DIV = 286,                     /* DIV  */
    INTEGER_LITERAL = 287,         /* INTEGER_LITERAL  */
    ID = 288                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "yacc.y"

  int intValue;
  double floats;
  char* string;

  int lineno;
  TreeNode* tree_node;

#line 179 "yacc.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_CONST = 5,                      /* CONST  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_BREAK = 10,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 11,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 12,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_EQUAL = 14,                     /* EQUAL  */
  YYSYMBOL_UNEQUAL = 15,                   /* UNEQUAL  */
  YYSYMBOL_LESS = 16,                      /* LESS  */
  YYSYMBOL_GREATER = 17,                   /* GREATER  */
  YYSYMBOL_LESSEQUAL = 18,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 19,              /* GREATEREQUAL  */
  YYSYMBOL_LBRACE = 20,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 21,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 22,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 23,                  /* RBRACKET  */
  YYSYMBOL_LPAREN = 24,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 25,                    /* RPAREN  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 27,                 /* SEMICOLON  */
  YYSYMBOL_ADD = 28,                       /* ADD  */
  YYSYMBOL_SUB = 29,                       /* SUB  */
  YYSYMBOL_MUL = 30,                       /* MUL  */
  YYSYMBOL_DIV = 31,                       /* DIV  */
  YYSYMBOL_INTEGER_LITERAL = 32,           /* INTEGER_LITERAL  */
  YYSYMBOL_ID = 33,                        /* ID  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_CompUnit = 35,                  /* CompUnit  */
  YYSYMBOL_Decl = 36,                      /* Decl  */
  YYSYMBOL_ConstDecl = 37,                 /* ConstDecl  */
  YYSYMBOL_BType = 38,                     /* BType  */
  YYSYMBOL_ConstDef = 39,                  /* ConstDef  */
  YYSYMBOL_MoreConstDefs = 40,             /* MoreConstDefs  */
  YYSYMBOL_ConstInitVal = 41,              /* ConstInitVal  */
  YYSYMBOL_ConstInitValList = 42,          /* ConstInitValList  */
  YYSYMBOL_MoreConstInitVals = 43,         /* MoreConstInitVals  */
  YYSYMBOL_VarDecl = 44,                   /* VarDecl  */
  YYSYMBOL_VarDef = 45,                    /* VarDef  */
  YYSYMBOL_MoreVarDefs = 46,               /* MoreVarDefs  */
  YYSYMBOL_InitVal = 47,                   /* InitVal  */
  YYSYMBOL_InitValList = 48,               /* InitValList  */
  YYSYMBOL_MoreInitVals = 49,              /* MoreInitVals  */
  YYSYMBOL_FuncDef = 50,                   /* FuncDef  */
  YYSYMBOL_FuncType = 51,                  /* FuncType  */
  YYSYMBOL_FuncFParams = 52,               /* FuncFParams  */
  YYSYMBOL_MoreFuncFParams = 53,           /* MoreFuncFParams  */
  YYSYMBOL_FuncFParam = 54,                /* FuncFParam  */
  YYSYMBOL_ArraySpecifierForParam = 55,    /* ArraySpecifierForParam  */
  YYSYMBOL_ArraySpecifier = 56,            /* ArraySpecifier  */
  YYSYMBOL_Block = 57,                     /* Block  */
  YYSYMBOL_BlockItems = 58,                /* BlockItems  */
  YYSYMBOL_BlockItem = 59,                 /* BlockItem  */
  YYSYMBOL_Stmt = 60,                      /* Stmt  */
  YYSYMBOL_ElseClause = 61,                /* ElseClause  */
  YYSYMBOL_ExpOpt = 62,                    /* ExpOpt  */
  YYSYMBOL_Cond = 63,                      /* Cond  */
  YYSYMBOL_LVal = 64,                      /* LVal  */
  YYSYMBOL_Exp = 65,                       /* Exp  */
  YYSYMBOL_PrimaryExp = 66,                /* PrimaryExp  */
  YYSYMBOL_Number = 67,                    /* Number  */
  YYSYMBOL_UnaryExp = 68,                  /* UnaryExp  */
  YYSYMBOL_UnaryOp = 69,                   /* UnaryOp  */
  YYSYMBOL_FuncRParams = 70,               /* FuncRParams  */
  YYSYMBOL_MoreFuncRParams = 71,           /* MoreFuncRParams  */
  YYSYMBOL_MulExp = 72,                    /* MulExp  */
  YYSYMBOL_AddExp = 73,                    /* AddExp  */
  YYSYMBOL_RelExp = 74,                    /* RelExp  */
  YYSYMBOL_EqExp = 75,                     /* EqExp  */
  YYSYMBOL_LAndExp = 76,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 77,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 78                   /* ConstExp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    47,    47,    51,    57,    61,    67,    72,    75,    79,
      85,    93,    97,   102,   106,   112,   115,   119,   124,   128,
     133,   140,   143,   148,   155,   158,   162,   167,   171,   179,
     183,   188,   192,   197,   206,   209,   213,   217,   223,   228,
     233,   238,   243,   251,   254,   257,   260,   267,   270,   273,
     281,   288,   293,   297,   303,   310,   311,   316,   320,   329,
     337,   342,   343,   348,   349,   355,   358,   365,   368,   373,
     379,   386,   392,   398,   402,   408,   414,   418,   425,   432,
     435,   440,   444,   449,   453,   458,   462,   468,   476,   480,
     486,   494,   498,   504,   510,   516,   524,   528,   534,   542,
     548,   554
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT",
  "CONST", "VOID", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RETURN",
  "ASSIGN", "EQUAL", "UNEQUAL", "LESS", "GREATER", "LESSEQUAL",
  "GREATEREQUAL", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "LPAREN",
  "RPAREN", "COMMA", "SEMICOLON", "ADD", "SUB", "MUL", "DIV",
  "INTEGER_LITERAL", "ID", "$accept", "CompUnit", "Decl", "ConstDecl",
  "BType", "ConstDef", "MoreConstDefs", "ConstInitVal", "ConstInitValList",
  "MoreConstInitVals", "VarDecl", "VarDef", "MoreVarDefs", "InitVal",
  "InitValList", "MoreInitVals", "FuncDef", "FuncType", "FuncFParams",
  "MoreFuncFParams", "FuncFParam", "ArraySpecifierForParam",
  "ArraySpecifier", "Block", "BlockItems", "BlockItem", "Stmt",
  "ElseClause", "ExpOpt", "Cond", "LVal", "Exp", "PrimaryExp", "Number",
  "UnaryExp", "UnaryOp", "FuncRParams", "MoreFuncRParams", "MulExp",
  "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -144,   135,  -144,  -144,  -144,  -144,  -144,    21,    39,    64,
    -144,  -144,    38,    32,    53,    70,    55,    55,    53,  -144,
      60,  -144,  -144,  -144,  -144,    64,    75,    75,    19,  -144,
     104,  -144,  -144,    64,    58,    78,    10,    11,   104,  -144,
     104,  -144,  -144,  -144,    42,  -144,  -144,    66,  -144,  -144,
    -144,  -144,   100,    81,  -144,  -144,  -144,   104,    50,    67,
    -144,    67,    71,    88,   104,   104,  -144,  -144,  -144,  -144,
      18,  -144,   106,   104,  -144,    75,   114,   104,  -144,  -144,
     104,   104,   104,   104,    75,    75,    75,   116,   122,    67,
      -2,    95,  -144,  -144,   123,  -144,  -144,  -144,   124,   126,
     136,    66,    26,    35,  -144,  -144,    50,    50,  -144,  -144,
     139,    88,    43,    94,   104,   104,   104,   104,   104,   104,
      94,   104,  -144,  -144,    45,   114,  -144,  -144,  -144,  -144,
      87,   116,  -144,  -144,   145,    67,    67,    67,    67,    -2,
      -2,  -144,   124,    45,    49,  -144,  -144,    87,  -144,  -144,
    -144,    94,  -144,  -144,   128,   134,  -144,  -144,   130,     4,
    -144,    45,  -144,  -144,    87,  -144,  -144,  -144,   128,   130,
    -144,  -144
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    36,    37,    35,     2,     0,     0,    39,
       8,     9,     0,     0,    41,    44,     0,     0,    41,    38,
       0,    42,    51,    34,    33,     0,    47,    47,     0,    40,
       0,    45,    43,     0,     0,     0,     0,     0,    68,    49,
       0,    79,    80,    75,    47,    52,     4,     0,     5,    57,
      50,    53,    73,     0,    76,    74,    85,     0,    88,    71,
      73,   101,     0,     0,     0,     0,    61,    60,    63,    62,
       0,    67,     0,    82,    70,    47,    26,     0,    56,    78,
       0,     0,     0,     0,    47,    47,    47,    12,     0,    91,
      96,    99,   100,    69,     0,    65,    64,    72,    84,     0,
      22,     0,     0,     0,    86,    87,    89,    90,    48,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    77,     0,    26,    21,    20,    55,    54,
       0,    12,     7,     6,     0,    92,    93,    94,    95,    97,
      98,    59,    84,    30,     0,    27,    25,    17,    10,    13,
      11,     0,    58,    83,    32,     0,    24,    23,    19,     0,
      66,     0,    29,    28,     0,    16,    15,    14,    32,    19,
      31,    18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,   -20,    46,    28,  -143,  -144,   -11,
    -144,    59,    36,  -141,  -144,    -6,  -144,  -144,  -144,   146,
     138,  -144,   -26,   108,  -144,  -144,  -110,  -144,  -144,   101,
     -22,   -31,  -144,  -144,   -25,  -144,  -144,    23,    61,   -30,
      27,  -144,  -144,  -144,   137
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    45,    46,    12,    87,   112,   148,   159,   165,
      48,    76,   102,   144,   155,   162,     6,     7,    13,    19,
      14,    21,    31,    49,    28,    50,    51,   152,    70,    88,
      60,    53,    54,    55,    56,    57,    99,   122,    58,    59,
      90,    91,    92,    93,   149
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    32,   154,   134,   158,   166,    52,    71,    47,    72,
     141,    66,    68,    63,   114,   115,   116,   117,    74,    95,
     168,   169,    10,    11,    33,   167,    34,   126,    35,    36,
      37,    38,    79,    16,    89,    89,   128,    67,    69,    22,
      39,   160,    98,    40,   132,    96,   103,    41,    42,   100,
     156,    43,    44,   127,     8,   104,   105,    17,   108,   109,
     110,    26,   129,     9,    30,   143,    73,    10,    11,    40,
     133,    15,    84,    41,    42,    22,   157,    43,    44,    18,
      80,    81,    64,    27,   135,   136,   137,   138,    89,    89,
     142,    52,    20,   145,    85,    82,    83,    30,    52,    75,
      61,    34,    65,    35,    36,    37,    38,   147,    78,   118,
     119,    40,   145,    77,    22,    41,    42,    61,    40,    43,
      44,    86,    41,    42,    23,    24,    43,    44,    40,    52,
     145,    97,    41,    42,    61,     2,    43,    44,     3,     4,
     101,     5,   111,   106,   107,   139,   140,   113,   120,   124,
     121,   123,   130,   151,   161,   163,   164,   131,   171,   150,
     125,   146,   170,    29,    25,   153,    94,    62
};

static const yytype_uint8 yycheck[] =
{
      30,    27,   143,   113,   147,     1,    28,    38,    28,    40,
     120,     1,     1,    33,    16,    17,    18,    19,    44,     1,
     161,   164,     3,     4,     5,    21,     7,     1,     9,    10,
      11,    12,    57,     1,    64,    65,     1,    27,    27,    20,
      21,   151,    73,    24,     1,    27,    77,    28,    29,    75,
       1,    32,    33,    27,    33,    80,    81,    25,    84,    85,
      86,     1,    27,    24,    22,    20,    24,     3,     4,    24,
      27,    33,     1,    28,    29,    20,    27,    32,    33,    26,
      30,    31,    24,    23,   114,   115,   116,   117,   118,   119,
     121,   113,    22,   124,    23,    28,    29,    22,   120,    33,
     130,     7,    24,     9,    10,    11,    12,    20,    27,    14,
      15,    24,   143,    13,    20,    28,    29,   147,    24,    32,
      33,    33,    28,    29,    16,    17,    32,    33,    24,   151,
     161,    25,    28,    29,   164,     0,    32,    33,     3,     4,
      26,     6,    26,    82,    83,   118,   119,    25,    25,    13,
      26,    25,    13,     8,    26,    21,    26,   111,   169,   131,
     101,   125,   168,    25,    18,   142,    65,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,     0,     3,     4,     6,    50,    51,    33,    24,
       3,     4,    38,    52,    54,    33,     1,    25,    26,    53,
      22,    55,    20,    57,    57,    53,     1,    23,    58,    54,
      22,    56,    56,     5,     7,     9,    10,    11,    12,    21,
      24,    28,    29,    32,    33,    36,    37,    38,    44,    57,
      59,    60,    64,    65,    66,    67,    68,    69,    72,    73,
      64,    73,    78,    38,    24,    24,     1,    27,     1,    27,
      62,    65,    65,    24,    56,    33,    45,    13,    27,    68,
      30,    31,    28,    29,     1,    23,    33,    39,    63,    73,
      74,    75,    76,    77,    63,     1,    27,    25,    65,    70,
      56,    26,    46,    65,    68,    68,    72,    72,    56,    56,
      56,    26,    40,    25,    16,    17,    18,    19,    14,    15,
      25,    26,    71,    25,    13,    45,     1,    27,     1,    27,
      13,    39,     1,    27,    60,    73,    73,    73,    73,    74,
      74,    60,    65,    20,    47,    65,    46,    20,    41,    78,
      40,     8,    61,    71,    47,    48,     1,    27,    41,    42,
      60,    26,    49,    21,    26,    43,     1,    21,    47,    41,
      49,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    35,    36,    36,    37,    37,    38,    38,
      39,    40,    40,    41,    41,    41,    42,    42,    43,    43,
      44,    44,    45,    45,    45,    46,    46,    47,    47,    48,
      48,    49,    49,    50,    50,    51,    51,    51,    52,    52,
      53,    53,    54,    55,    55,    55,    56,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    62,    62,    63,
      64,    65,    66,    66,    66,    67,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    73,    73,
      73,    74,    74,    74,    74,    74,    75,    75,    75,    76,
      77,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     5,     5,     1,     1,
       4,     3,     0,     1,     3,     3,     2,     0,     3,     0,
       4,     4,     2,     5,     5,     3,     0,     1,     3,     2,
       0,     3,     0,     6,     6,     1,     1,     1,     2,     0,
       3,     0,     3,     3,     0,     3,     4,     0,     4,     3,
       2,     0,     1,     1,     4,     4,     2,     1,     6,     5,
       2,     2,     2,     2,     3,     3,     2,     1,     0,     1,
       2,     1,     3,     1,     1,     1,     1,     4,     2,     1,
       1,     2,     0,     3,     0,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* CompUnit: CompUnit FuncDef  */
#line 47 "yacc.y"
                                     {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1491 "yacc.tab.c"
    break;

  case 3: /* CompUnit: %empty  */
#line 51 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("CompUnit", yylineno);
                    root = (yyval.tree_node);
                  }
#line 1500 "yacc.tab.c"
    break;

  case 4: /* Decl: ConstDecl  */
#line 57 "yacc.y"
                              {
                    (yyval.tree_node) = createTreeNodeLine("Decl", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1509 "yacc.tab.c"
    break;

  case 5: /* Decl: VarDecl  */
#line 61 "yacc.y"
                            {
                    (yyval.tree_node) = createTreeNodeLine("Decl", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1518 "yacc.tab.c"
    break;

  case 6: /* ConstDecl: CONST BType ConstDef MoreConstDefs SEMICOLON  */
#line 67 "yacc.y"
                                                                 {
                    (yyval.tree_node) = createTreeNodeLine("VarDecl", (yyvsp[-4].lineno));
                    addChild((yyval.tree_node), (yyvsp[-4].lineno));
                    addChild((yyval.tree_node), createTreeNode("SEMICOLON"));
                  }
#line 1528 "yacc.tab.c"
    break;

  case 7: /* ConstDecl: CONST BType ConstDef MoreConstDefs error  */
#line 72 "yacc.y"
                                                             { yyerror("Missing ';'"); }
#line 1534 "yacc.tab.c"
    break;

  case 8: /* BType: INT  */
#line 75 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeLine("BType", (yyvsp[0].lineno));
                    addChild((yyval.tree_node), createTreeNodeString("Type", yylineno, "int"));
                  }
#line 1543 "yacc.tab.c"
    break;

  case 9: /* BType: FLOAT  */
#line 79 "yacc.y"
                          {
                    (yyval.tree_node) = createTreeNodeLine("BType", (yyvsp[0].lineno));
                    addChild((yyval.tree_node), createTreeNodeString("Type", yylineno, "float"));
                  }
#line 1552 "yacc.tab.c"
    break;

  case 10: /* ConstDef: ID ArraySpecifier ASSIGN ConstInitVal  */
#line 85 "yacc.y"
                                                          {
                    (yyval.tree_node) = createTreeNodeLine("ConstDef", (yyvsp[-3].string)); 
                    addChild((yyval.tree_node), createTreeNodeString("ID", yylineno, (yyvsp[-3].string)));
                    addChild((yyval.tree_node), createTreeNode("ASSIGN"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1563 "yacc.tab.c"
    break;

  case 11: /* MoreConstDefs: COMMA ConstDef MoreConstDefs  */
#line 93 "yacc.y"
                                                 {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1572 "yacc.tab.c"
    break;

  case 12: /* MoreConstDefs: %empty  */
#line 97 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreConstDefs", yylineno);
                  }
#line 1580 "yacc.tab.c"
    break;

  case 13: /* ConstInitVal: ConstExp  */
#line 102 "yacc.y"
                             {
                    (yyval.tree_node) = createTreeNodeLine("ConstInitVal", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1589 "yacc.tab.c"
    break;

  case 14: /* ConstInitVal: LBRACE ConstInitValList RBRACE  */
#line 106 "yacc.y"
                                                   {
                    (yyval.tree_node) = createTreeNodeLine("ConstInitVal", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("LBRACE"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RBRACE"));
                  }
#line 1600 "yacc.tab.c"
    break;

  case 15: /* ConstInitVal: LBRACE ConstInitValList error  */
#line 112 "yacc.y"
                                                  { yyerror("Missing '}'"); }
#line 1606 "yacc.tab.c"
    break;

  case 16: /* ConstInitValList: ConstInitVal MoreConstInitVals  */
#line 115 "yacc.y"
                                                   {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1615 "yacc.tab.c"
    break;

  case 17: /* ConstInitValList: %empty  */
#line 119 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("ConstInitValList", yylineno);
                  }
#line 1623 "yacc.tab.c"
    break;

  case 18: /* MoreConstInitVals: COMMA ConstInitVal MoreConstInitVals  */
#line 124 "yacc.y"
                                                         {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1632 "yacc.tab.c"
    break;

  case 19: /* MoreConstInitVals: %empty  */
#line 128 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreConstInitVals", yylineno);
                  }
#line 1640 "yacc.tab.c"
    break;

  case 20: /* VarDecl: BType VarDef MoreVarDefs SEMICOLON  */
#line 133 "yacc.y"
                                                       {
                    (yyval.tree_node) = createTreeNodeLine("VarDecl", (yyvsp[-3].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-3].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("SEMICOLON"));
                  }
#line 1652 "yacc.tab.c"
    break;

  case 21: /* VarDecl: BType VarDef MoreVarDefs error  */
#line 140 "yacc.y"
                                                   { yyerror("Missing ';'"); }
#line 1658 "yacc.tab.c"
    break;

  case 22: /* VarDef: ID ArraySpecifier  */
#line 143 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("VarDef", yylineno);
                    addChild((yyval.tree_node), createTreeNodeString("ID", yylineno, (yyvsp[-1].string)));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1668 "yacc.tab.c"
    break;

  case 23: /* VarDef: ID ArraySpecifier ASSIGN InitVal SEMICOLON  */
#line 148 "yacc.y"
                                                               {
                    (yyval.tree_node) = createTreeNodeLine("VarDef", yylineno); 
                    addChild((yyval.tree_node), createTreeNodeString("ID", yylineno, (yyvsp[-4].string)));
                    addChild((yyval.tree_node), (yyvsp[-3].tree_node));
                    addChild((yyval.tree_node), createTreeNode("ASSIGN"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                  }
#line 1680 "yacc.tab.c"
    break;

  case 24: /* VarDef: ID ArraySpecifier ASSIGN InitVal error  */
#line 155 "yacc.y"
                                                           { yyerror("Missing ';'"); }
#line 1686 "yacc.tab.c"
    break;

  case 25: /* MoreVarDefs: COMMA VarDef MoreVarDefs  */
#line 158 "yacc.y"
                                             {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1695 "yacc.tab.c"
    break;

  case 26: /* MoreVarDefs: %empty  */
#line 162 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreVarDefs", yylineno);
                  }
#line 1703 "yacc.tab.c"
    break;

  case 27: /* InitVal: Exp  */
#line 167 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeLine("InitVal", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1712 "yacc.tab.c"
    break;

  case 28: /* InitVal: LBRACE InitValList RBRACE  */
#line 171 "yacc.y"
                                              {
                    (yyval.tree_node) = createTreeNodeLine("InitVal", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("LBRACE"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RBRACE"));
                  }
#line 1723 "yacc.tab.c"
    break;

  case 29: /* InitValList: InitVal MoreInitVals  */
#line 179 "yacc.y"
                                         {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1732 "yacc.tab.c"
    break;

  case 30: /* InitValList: %empty  */
#line 183 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("InitValList", yylineno);
                  }
#line 1740 "yacc.tab.c"
    break;

  case 31: /* MoreInitVals: COMMA InitVal MoreInitVals  */
#line 188 "yacc.y"
                                               {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1749 "yacc.tab.c"
    break;

  case 32: /* MoreInitVals: %empty  */
#line 192 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreInitVals", yylineno);
                  }
#line 1757 "yacc.tab.c"
    break;

  case 33: /* FuncDef: FuncType ID LPAREN FuncFParams RPAREN Block  */
#line 197 "yacc.y"
                                                                {
                    (yyval.tree_node) = createTreeNodeLine("FuncDef", (yyvsp[-5].tree_node)->lineno); 
                    addChild((yyval.tree_node), (yyvsp[-5].tree_node));
                    addChild((yyval.tree_node), createTreeNodeString("ID", (yyvsp[-4].string), (yyvsp[-4].string)));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1771 "yacc.tab.c"
    break;

  case 34: /* FuncDef: FuncType ID LPAREN FuncFParams error Block  */
#line 206 "yacc.y"
                                                               { yyerror("Missing ')'"); }
#line 1777 "yacc.tab.c"
    break;

  case 35: /* FuncType: VOID  */
#line 209 "yacc.y"
                         {
                    (yyval.tree_node) = createTreeNodeLine("FuncDef", (yyvsp[0].lineno));
                    addChild((yyval.tree_node), createTreeNodeString("Type", (yyvsp[0].lineno), "void"));
                  }
#line 1786 "yacc.tab.c"
    break;

  case 36: /* FuncType: INT  */
#line 213 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeLine("FuncDef", (yyvsp[0].lineno));
                    addChild((yyval.tree_node), createTreeNodeString("Type", (yyvsp[0].lineno), "int"));
                  }
#line 1795 "yacc.tab.c"
    break;

  case 37: /* FuncType: FLOAT  */
#line 217 "yacc.y"
                          {
                    (yyval.tree_node) = createTreeNodeLine("FuncDef", (yyvsp[0].lineno));
                    addChild((yyval.tree_node), createTreeNodeString("Type", (yyvsp[0].lineno), "float"));
                  }
#line 1804 "yacc.tab.c"
    break;

  case 38: /* FuncFParams: FuncFParam MoreFuncFParams  */
#line 223 "yacc.y"
                                               {
                    (yyval.tree_node) = createTreeNodeLine("FuncFParams", yylineno);
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1814 "yacc.tab.c"
    break;

  case 39: /* FuncFParams: %empty  */
#line 228 "yacc.y"
                                {
                    (yyval.tree_node) = NULL;
                  }
#line 1822 "yacc.tab.c"
    break;

  case 40: /* MoreFuncFParams: COMMA MoreFuncFParams FuncFParam  */
#line 233 "yacc.y"
                                                      {
                    if ((yyvsp[-1].tree_node) == NULL) (yyvsp[-1].tree_node) = createTreeNodeLine("MoreFuncFParams", yylineno);
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1832 "yacc.tab.c"
    break;

  case 41: /* MoreFuncFParams: %empty  */
#line 238 "yacc.y"
                                {
                    (yyval.tree_node) = NULL;
                  }
#line 1840 "yacc.tab.c"
    break;

  case 42: /* FuncFParam: BType ID ArraySpecifierForParam  */
#line 243 "yacc.y"
                                                    {
                    (yyval.tree_node) = createTreeNodeLine("FuncFParam", (yyvsp[-2].tree_node)); 
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNodeString("ID", (yyvsp[-1].string), (yyvsp[-1].string)));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1851 "yacc.tab.c"
    break;

  case 43: /* ArraySpecifierForParam: LBRACKET RBRACKET ArraySpecifier  */
#line 251 "yacc.y"
                                                          {
                          (yyval.tree_node) = (yyvsp[0].tree_node);
                        }
#line 1859 "yacc.tab.c"
    break;

  case 44: /* ArraySpecifierForParam: %empty  */
#line 254 "yacc.y"
                                      {
                          (yyval.tree_node) = createTreeNodeLine("ArraySpecifier", yylineno);
                        }
#line 1867 "yacc.tab.c"
    break;

  case 45: /* ArraySpecifierForParam: LBRACKET error ArraySpecifier  */
#line 257 "yacc.y"
                                                        { yyerror("Missing ']'"); }
#line 1873 "yacc.tab.c"
    break;

  case 46: /* ArraySpecifier: LBRACKET ConstExp RBRACKET ArraySpecifier  */
#line 260 "yacc.y"
                                                              {
                    (yyval.tree_node) = createTreeNodeLine("ArraySpecifier", (yyvsp[-3].lineno));
                    addChild((yyval.tree_node), createTreeNode("LBRACKET"));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RBRACKET"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1885 "yacc.tab.c"
    break;

  case 47: /* ArraySpecifier: %empty  */
#line 267 "yacc.y"
                                {
                    (yyval.tree_node) = NULL;
                  }
#line 1893 "yacc.tab.c"
    break;

  case 48: /* ArraySpecifier: LBRACKET ConstExp error ArraySpecifier  */
#line 270 "yacc.y"
                                                           { yyerror("Missing ']'"); }
#line 1899 "yacc.tab.c"
    break;

  case 49: /* Block: LBRACE BlockItems RBRACE  */
#line 273 "yacc.y"
                                             {
                    (yyval.tree_node) = createTreeNodeLine("Block", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("LBRACE"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RBRACE"));
                  }
#line 1910 "yacc.tab.c"
    break;

  case 50: /* BlockItems: BlockItems BlockItem  */
#line 281 "yacc.y"
                                         {
                    if ((yyvsp[-1].tree_node) == NULL) (yyval.tree_node) = createTreeNodeLine("BlockItems", yylineno);
                    else {
                      addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                      (yyval.tree_node) = (yyvsp[-1].tree_node);
                    }
                  }
#line 1922 "yacc.tab.c"
    break;

  case 51: /* BlockItems: %empty  */
#line 288 "yacc.y"
                                {
                    (yyval.tree_node) = NULL;
                  }
#line 1930 "yacc.tab.c"
    break;

  case 52: /* BlockItem: Decl  */
#line 293 "yacc.y"
                         {
                    (yyval.tree_node) = createTreeNodeLine("BlockItem", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1939 "yacc.tab.c"
    break;

  case 53: /* BlockItem: Stmt  */
#line 297 "yacc.y"
                         {
                    (yyval.tree_node) = createTreeNodeLine("BlockItem", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1948 "yacc.tab.c"
    break;

  case 54: /* Stmt: LVal ASSIGN Exp SEMICOLON  */
#line 303 "yacc.y"
                                              {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-3].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-3].tree_node));
                    addChild((yyval.tree_node), createTreeNode("ASSIGN"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("SEMICOLON"));
                  }
#line 1960 "yacc.tab.c"
    break;

  case 55: /* Stmt: LVal ASSIGN Exp error  */
#line 310 "yacc.y"
                                          { yyerror("Missing ';'"); }
#line 1966 "yacc.tab.c"
    break;

  case 56: /* Stmt: Exp SEMICOLON  */
#line 311 "yacc.y"
                                  {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-1].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("SEMICOLON"));
                  }
#line 1976 "yacc.tab.c"
    break;

  case 57: /* Stmt: Block  */
#line 316 "yacc.y"
                          {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1985 "yacc.tab.c"
    break;

  case 58: /* Stmt: IF LPAREN Cond RPAREN Stmt ElseClause  */
#line 320 "yacc.y"
                                                          {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-5].lineno));
                    addChild((yyval.tree_node), createTreeNode("IF"));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-3].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1999 "yacc.tab.c"
    break;

  case 59: /* Stmt: WHILE LPAREN Cond RPAREN Stmt  */
#line 329 "yacc.y"
                                                  {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-4].lineno));
                    addChild((yyval.tree_node), createTreeNode("WHILE"));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2012 "yacc.tab.c"
    break;

  case 60: /* Stmt: BREAK SEMICOLON  */
#line 337 "yacc.y"
                                    {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-1].lineno));
                    addChild((yyval.tree_node), createTreeNode("BREAK"));
                    addChild((yyval.tree_node), createTreeNode("SEMICOLON"));
                  }
#line 2022 "yacc.tab.c"
    break;

  case 61: /* Stmt: BREAK error  */
#line 342 "yacc.y"
                                { yyerror("Missing ';'"); }
#line 2028 "yacc.tab.c"
    break;

  case 62: /* Stmt: CONTINUE SEMICOLON  */
#line 343 "yacc.y"
                                       {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-1].lineno));
                    addChild((yyval.tree_node), createTreeNode("CONTINUE"));
                    addChild((yyval.tree_node), createTreeNode("SEMICOLON"));
                  }
#line 2038 "yacc.tab.c"
    break;

  case 63: /* Stmt: CONTINUE error  */
#line 348 "yacc.y"
                                   { yyerror("Missing ';'"); }
#line 2044 "yacc.tab.c"
    break;

  case 64: /* Stmt: RETURN ExpOpt SEMICOLON  */
#line 349 "yacc.y"
                                            {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("RETURN"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("SEMICOLON"));
                  }
#line 2055 "yacc.tab.c"
    break;

  case 65: /* Stmt: RETURN ExpOpt error  */
#line 355 "yacc.y"
                                        { yyerror("Missing ';'"); }
#line 2061 "yacc.tab.c"
    break;

  case 66: /* ElseClause: ELSE Stmt  */
#line 358 "yacc.y"
                              {
                    (yyval.tree_node) = createTreeNodeLine("ElseClause", (yyvsp[-1].lineno));
                    addChild((yyval.tree_node), createTreeNode("ELSE"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2071 "yacc.tab.c"
    break;

  case 67: /* ExpOpt: Exp  */
#line 365 "yacc.y"
                        {
                    (yyval.tree_node) = (yyvsp[0].tree_node);
                  }
#line 2079 "yacc.tab.c"
    break;

  case 68: /* ExpOpt: %empty  */
#line 368 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("ExpOpt", yylineno);
                  }
#line 2087 "yacc.tab.c"
    break;

  case 69: /* Cond: LOrExp  */
#line 373 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("Cond", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2096 "yacc.tab.c"
    break;

  case 70: /* LVal: ID ArraySpecifier  */
#line 379 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("LVal", yylineno);
                    addChild((yyval.tree_node), createTreeNodeString("ID", yylineno, (yyvsp[-1].string)));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2106 "yacc.tab.c"
    break;

  case 71: /* Exp: AddExp  */
#line 386 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("Exp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2115 "yacc.tab.c"
    break;

  case 72: /* PrimaryExp: LPAREN Exp RPAREN  */
#line 392 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("PrimaryExp", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                  }
#line 2126 "yacc.tab.c"
    break;

  case 73: /* PrimaryExp: LVal  */
#line 398 "yacc.y"
                         {
                    (yyval.tree_node) = createTreeNodeLine("PrimaryExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2135 "yacc.tab.c"
    break;

  case 74: /* PrimaryExp: Number  */
#line 402 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("PrimaryExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2144 "yacc.tab.c"
    break;

  case 75: /* Number: INTEGER_LITERAL  */
#line 408 "yacc.y"
                                    {
                    (yyval.tree_node) = createTreeNodeString("Number", yylineno, "int");
                    addChild((yyval.tree_node), createTreeNodeInt("INT", yylineno, (yyvsp[0].intValue)));
                  }
#line 2153 "yacc.tab.c"
    break;

  case 76: /* UnaryExp: PrimaryExp  */
#line 414 "yacc.y"
                               {
                    (yyval.tree_node) = createTreeNodeLine("UnaryExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2162 "yacc.tab.c"
    break;

  case 77: /* UnaryExp: ID LPAREN FuncRParams RPAREN  */
#line 418 "yacc.y"
                                                 {
                    (yyval.tree_node) = createTreeNodeLine("UnaryExp", (yyvsp[-3].string));
                    addChild((yyval.tree_node), createTreeNodeString("ID", yylineno, (yyvsp[-3].string)));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                  }
#line 2174 "yacc.tab.c"
    break;

  case 78: /* UnaryExp: UnaryOp UnaryExp  */
#line 425 "yacc.y"
                                     {
                    (yyval.tree_node) = createTreeNodeLine("UnaryExp", (yyvsp[-1].tree_node)->lineno);
                    addChild((yyval.tree_node), createTreeNode((yyvsp[-1].tree_node)));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2184 "yacc.tab.c"
    break;

  case 79: /* UnaryOp: ADD  */
#line 432 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeString("UnaryOp", yylineno, "+");
                  }
#line 2192 "yacc.tab.c"
    break;

  case 80: /* UnaryOp: SUB  */
#line 435 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeString("UnaryOp", yylineno, "-");
                  }
#line 2200 "yacc.tab.c"
    break;

  case 81: /* FuncRParams: Exp MoreFuncRParams  */
#line 440 "yacc.y"
                                        {
                    (yyval.tree_node) = createTreeNodeLine("FuncRParams", (yyvsp[-1].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                  }
#line 2209 "yacc.tab.c"
    break;

  case 82: /* FuncRParams: %empty  */
#line 444 "yacc.y"
                                {
                    (yyval.tree_node) = NULL;
                  }
#line 2217 "yacc.tab.c"
    break;

  case 83: /* MoreFuncRParams: COMMA Exp MoreFuncRParams  */
#line 449 "yacc.y"
                                              {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 2226 "yacc.tab.c"
    break;

  case 84: /* MoreFuncRParams: %empty  */
#line 453 "yacc.y"
                                {
                    (yyval.tree_node) = NULL;
                  }
#line 2234 "yacc.tab.c"
    break;

  case 85: /* MulExp: UnaryExp  */
#line 458 "yacc.y"
                             {
                    (yyval.tree_node) = createTreeNodeLine("MulExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2243 "yacc.tab.c"
    break;

  case 86: /* MulExp: MulExp MUL UnaryExp  */
#line 462 "yacc.y"
                                        {
                    (yyval.tree_node) = createTreeNodeLine("MulExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("MUL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2254 "yacc.tab.c"
    break;

  case 87: /* MulExp: MulExp DIV UnaryExp  */
#line 468 "yacc.y"
                                        {
                    (yyval.tree_node) = createTreeNodeLine("MulExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("DIV"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2265 "yacc.tab.c"
    break;

  case 88: /* AddExp: MulExp  */
#line 476 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("AddExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2274 "yacc.tab.c"
    break;

  case 89: /* AddExp: AddExp ADD MulExp  */
#line 480 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("AddExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("ADD"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2285 "yacc.tab.c"
    break;

  case 90: /* AddExp: AddExp SUB MulExp  */
#line 486 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("AddExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("SUB"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2296 "yacc.tab.c"
    break;

  case 91: /* RelExp: AddExp  */
#line 494 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2305 "yacc.tab.c"
    break;

  case 92: /* RelExp: RelExp LESS AddExp  */
#line 498 "yacc.y"
                                       {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("LESS"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2316 "yacc.tab.c"
    break;

  case 93: /* RelExp: RelExp GREATER AddExp  */
#line 504 "yacc.y"
                                          {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("GREATER"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2327 "yacc.tab.c"
    break;

  case 94: /* RelExp: RelExp LESSEQUAL AddExp  */
#line 510 "yacc.y"
                                            {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("LESSEQUAL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2338 "yacc.tab.c"
    break;

  case 95: /* RelExp: RelExp GREATEREQUAL AddExp  */
#line 516 "yacc.y"
                                               {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("GREATEREQUAL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2349 "yacc.tab.c"
    break;

  case 96: /* EqExp: RelExp  */
#line 524 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("EqExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2358 "yacc.tab.c"
    break;

  case 97: /* EqExp: EqExp EQUAL RelExp  */
#line 528 "yacc.y"
                                       {
                    (yyval.tree_node) = createTreeNodeLine("EqExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("EQUAL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2369 "yacc.tab.c"
    break;

  case 98: /* EqExp: EqExp UNEQUAL RelExp  */
#line 534 "yacc.y"
                                         {
                    (yyval.tree_node) = createTreeNodeLine("EqExp", (yyvsp[-2].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("UNEQUAL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2380 "yacc.tab.c"
    break;

  case 99: /* LAndExp: EqExp  */
#line 542 "yacc.y"
                          {
                    (yyval.tree_node) = createTreeNodeLine("LAndExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2389 "yacc.tab.c"
    break;

  case 100: /* LOrExp: LAndExp  */
#line 548 "yacc.y"
                            {
                    (yyval.tree_node) = createTreeNodeLine("LOrExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2398 "yacc.tab.c"
    break;

  case 101: /* ConstExp: AddExp  */
#line 554 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("ConstExp", (yyvsp[0].tree_node)->lineno);
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2407 "yacc.tab.c"
    break;


#line 2411 "yacc.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 561 "yacc.y"
