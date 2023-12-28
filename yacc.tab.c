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

int yylex(void);

void yyerror(const char *str){
    fprintf(stderr, "error:%s\n",str);
}

TreeNode* root;


#line 87 "yacc.tab.c"

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
    INTEGER_LITERAL = 275,         /* INTEGER_LITERAL  */
    ID = 276,                      /* ID  */
    LBRACE = 277,                  /* LBRACE  */
    RBRACE = 278,                  /* RBRACE  */
    LBRACKET = 279,                /* LBRACKET  */
    RBRACKET = 280,                /* RBRACKET  */
    LPAREN = 281,                  /* LPAREN  */
    RPAREN = 282,                  /* RPAREN  */
    COMMA = 283,                   /* COMMA  */
    SEMICOLON = 284,               /* SEMICOLON  */
    ADD = 285,                     /* ADD  */
    SUB = 286,                     /* SUB  */
    MUL = 287,                     /* MUL  */
    DIV = 288                      /* DIV  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "yacc.y"

  int intValue;
  double floats;
  char* string;

  TreeNode* tree_node;
  int lineno;

#line 176 "yacc.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


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
  YYSYMBOL_INTEGER_LITERAL = 20,           /* INTEGER_LITERAL  */
  YYSYMBOL_ID = 21,                        /* ID  */
  YYSYMBOL_LBRACE = 22,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 23,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 24,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 25,                  /* RBRACKET  */
  YYSYMBOL_LPAREN = 26,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 27,                    /* RPAREN  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 29,                 /* SEMICOLON  */
  YYSYMBOL_ADD = 30,                       /* ADD  */
  YYSYMBOL_SUB = 31,                       /* SUB  */
  YYSYMBOL_MUL = 32,                       /* MUL  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

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
       0,    42,    42,    46,    52,    55,    60,    65,    69,    75,
      83,    87,    92,    96,   104,   108,   113,   117,   122,   127,
     132,   141,   145,   150,   154,   162,   166,   171,   175,   180,
     191,   195,   199,   205,   209,   214,   218,   223,   231,   234,
     239,   246,   251,   259,   263,   268,   271,   276,   282,   286,
     289,   298,   306,   310,   314,   321,   328,   331,   336,   342,
     349,   355,   361,   365,   371,   377,   381,   388,   395,   398,
     403,   407,   412,   416,   421,   425,   431,   439,   443,   449,
     457,   461,   467,   473,   479,   487,   491,   497,   505,   511,
     517
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
  "GREATEREQUAL", "INTEGER_LITERAL", "ID", "LBRACE", "RBRACE", "LBRACKET",
  "RBRACKET", "LPAREN", "RPAREN", "COMMA", "SEMICOLON", "ADD", "SUB",
  "MUL", "DIV", "$accept", "CompUnit", "Decl", "ConstDecl", "BType",
  "ConstDef", "MoreConstDefs", "ConstInitVal", "ConstInitValList",
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

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -124,    74,  -124,  -124,  -124,  -124,  -124,   -17,   -16,    20,
    -124,  -124,    15,    17,    -1,    26,    47,    20,  -124,    54,
    -124,     8,  -124,    -1,    57,    20,    59,    65,    68,    88,
      79,  -124,    21,    79,  -124,  -124,  -124,  -124,    87,  -124,
    -124,    98,     8,  -124,   105,    93,  -124,  -124,  -124,    79,
       0,    58,  -124,    79,  -124,   102,    79,    79,  -124,  -124,
      96,  -124,  -124,    79,  -124,    97,    57,    99,  -124,  -124,
      79,  -124,  -124,    79,    79,    79,    79,    58,   101,    57,
     100,   103,    58,    95,    81,  -124,  -124,   104,  -124,   106,
     108,  -124,   116,    87,   107,   109,  -124,  -124,     0,     0,
      57,   119,   102,   110,    42,    79,    79,    79,    79,    79,
      79,    42,    79,  -124,  -124,    45,    99,  -124,  -124,  -124,
      72,   100,  -124,   125,    58,    58,    58,    58,    95,    95,
    -124,   106,    45,  -124,  -124,  -124,    72,  -124,  -124,  -124,
      42,  -124,  -124,   112,   114,   113,   120,  -124,    45,  -124,
    -124,    72,  -124,  -124,   112,   113,  -124,  -124
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    31,    32,    30,     2,     0,     0,    34,
       7,     8,     0,     0,    36,    39,     0,     0,    33,     0,
      37,    44,    29,    36,    41,     0,     0,     0,     0,     0,
      57,    64,    41,     0,    68,    69,    45,     4,     0,     5,
      49,     0,    44,    46,    62,     0,    65,    63,    74,     0,
      77,    60,    35,     0,    38,     0,     0,     0,    52,    53,
       0,    62,    56,    71,    59,     0,    41,    22,    42,    43,
       0,    48,    67,     0,     0,     0,     0,    90,     0,    41,
      11,     0,    80,    85,    88,    89,    58,     0,    54,    73,
       0,    61,    19,     0,     0,     0,    75,    76,    78,    79,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    66,     0,    22,    18,    47,    40,
       0,    11,     6,     0,    81,    82,    83,    84,    86,    87,
      51,    73,    26,    20,    23,    21,    15,     9,    12,    10,
       0,    50,    72,    28,     0,    17,     0,    55,     0,    25,
      24,     0,    14,    13,    28,    17,    27,    16
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,  -124,     1,    40,    23,  -105,  -124,   -10,
    -124,    53,    32,  -123,  -124,    -7,  -124,  -124,  -124,   126,
     133,  -124,   -18,   135,   111,  -124,  -103,  -124,  -124,   115,
     -21,   -28,  -124,  -124,   -33,  -124,  -124,    24,    31,   -50,
       6,  -124,  -124,  -124,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    36,    37,    12,    80,   103,   137,   146,   152,
      39,    67,    94,   133,   144,   149,     6,     7,    13,    18,
      14,    20,    54,    40,    41,    42,    43,   141,    60,    81,
      61,    45,    46,    47,    48,    49,    90,   113,    50,    51,
      83,    84,    85,    86,   138
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,   123,    62,    77,     8,    65,    82,    82,   130,   143,
       9,    10,    11,    25,    64,    26,    72,    27,    28,    29,
      30,    44,    38,    10,    11,   154,    55,    17,    31,    32,
      21,   145,    73,    74,    33,    89,    15,   147,    34,    35,
      96,    97,    95,    38,    16,    53,   155,    63,    92,    26,
      19,    27,    28,    29,    30,   124,   125,   126,   127,    82,
      82,   101,    31,    32,    21,    31,    32,   132,    33,    21,
      77,    33,    34,    35,     2,    34,    35,     3,     4,    24,
       5,    53,   119,    44,   131,    56,    77,   134,    75,    76,
      44,    57,    31,    32,   136,   109,   110,    58,    33,    31,
      32,    77,    34,    35,   134,    33,    98,    99,    66,    34,
      35,   105,   106,   107,   108,   128,   129,    59,    70,    44,
     134,    68,    71,    79,    91,    88,   100,    93,   102,   115,
     104,   111,   120,   140,   112,   114,   117,   150,   118,   122,
     148,   151,   121,   153,   139,   157,   116,   156,   135,    52,
      23,    22,     0,    69,     0,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,    87
};

static const yytype_int16 yycheck[] =
{
      21,   104,    30,    53,    21,    33,    56,    57,   111,   132,
      26,     3,     4,     5,    32,     7,    49,     9,    10,    11,
      12,    42,    21,     3,     4,   148,    25,    28,    20,    21,
      22,   136,    32,    33,    26,    63,    21,   140,    30,    31,
      73,    74,    70,    42,    27,    24,   151,    26,    66,     7,
      24,     9,    10,    11,    12,   105,   106,   107,   108,   109,
     110,    79,    20,    21,    22,    20,    21,    22,    26,    22,
     120,    26,    30,    31,     0,    30,    31,     3,     4,    25,
       6,    24,   100,   104,   112,    26,   136,   115,    30,    31,
     111,    26,    20,    21,    22,    14,    15,    29,    26,    20,
      21,   151,    30,    31,   132,    26,    75,    76,    21,    30,
      31,    16,    17,    18,    19,   109,   110,    29,    13,   140,
     148,    23,    29,    21,    27,    29,    25,    28,    28,    13,
      27,    27,    13,     8,    28,    27,    29,    23,    29,    29,
      28,    28,   102,    23,   121,   155,    93,   154,   116,    23,
      17,    16,    -1,    42,    -1,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,     0,     3,     4,     6,    50,    51,    21,    26,
       3,     4,    38,    52,    54,    21,    27,    28,    53,    24,
      55,    22,    57,    54,    25,     5,     7,     9,    10,    11,
      12,    20,    21,    26,    30,    31,    36,    37,    38,    44,
      57,    58,    59,    60,    64,    65,    66,    67,    68,    69,
      72,    73,    53,    24,    56,    38,    26,    26,    29,    29,
      62,    64,    65,    26,    56,    65,    21,    45,    23,    58,
      13,    29,    68,    32,    33,    30,    31,    73,    78,    21,
      39,    63,    73,    74,    75,    76,    77,    63,    29,    65,
      70,    27,    56,    28,    46,    65,    68,    68,    72,    72,
      25,    56,    28,    40,    27,    16,    17,    18,    19,    14,
      15,    27,    28,    71,    27,    13,    45,    29,    29,    56,
      13,    39,    29,    60,    73,    73,    73,    73,    74,    74,
      60,    65,    22,    47,    65,    46,    22,    41,    78,    40,
       8,    61,    71,    47,    48,    41,    42,    60,    28,    49,
      23,    28,    43,    23,    47,    41,    49,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    35,    36,    36,    37,    38,    38,    39,
      40,    40,    41,    41,    42,    42,    43,    43,    44,    45,
      45,    46,    46,    47,    47,    48,    48,    49,    49,    50,
      51,    51,    51,    52,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    58,    58,    59,    59,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    62,    62,    63,    64,
      65,    66,    66,    66,    67,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    73,
      74,    74,    74,    74,    74,    75,    75,    75,    76,    77,
      78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     5,     1,     1,     4,
       3,     0,     1,     3,     2,     0,     3,     0,     4,     2,
       4,     3,     0,     1,     3,     2,     0,     3,     0,     6,
       1,     1,     1,     2,     0,     3,     0,     3,     3,     0,
       4,     0,     3,     2,     0,     1,     1,     4,     2,     1,
       6,     5,     2,     2,     3,     2,     1,     0,     1,     2,
       1,     3,     1,     1,     1,     1,     4,     2,     1,     1,
       2,     0,     3,     0,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     1,
       1
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* CompUnit: CompUnit FuncDef  */
#line 42 "yacc.y"
                                     {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1351 "yacc.tab.c"
    break;

  case 3: /* CompUnit: %empty  */
#line 46 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("CompUnit", yylineno);
                    root = (yyval.tree_node);
                  }
#line 1360 "yacc.tab.c"
    break;

  case 4: /* Decl: ConstDecl  */
#line 52 "yacc.y"
                              {
                    (yyval.tree_node) = createTreeNodeLine("Decl", yylineno);
                  }
#line 1368 "yacc.tab.c"
    break;

  case 5: /* Decl: VarDecl  */
#line 55 "yacc.y"
                            {
                    (yyval.tree_node) = createTreeNodeLine("Decl", yylineno);
                  }
#line 1376 "yacc.tab.c"
    break;

  case 6: /* ConstDecl: CONST BType ConstDef MoreConstDefs SEMICOLON  */
#line 60 "yacc.y"
                                                                 {
                    (yyval.tree_node) = createTreeNodeLine("VarDecl", (yyvsp[-4].lineno));
                  }
#line 1384 "yacc.tab.c"
    break;

  case 7: /* BType: INT  */
#line 65 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeLine("BType", yylineno);
                    addChild((yyval.tree_node), createTreeNodeString("Type", yylineno, "int"));
                  }
#line 1393 "yacc.tab.c"
    break;

  case 8: /* BType: FLOAT  */
#line 69 "yacc.y"
                          {
                    (yyval.tree_node) = createTreeNodeLine("BType", yylineno);
                    addChild((yyval.tree_node), createTreeNodeString("Type", yylineno, "float"));
                  }
#line 1402 "yacc.tab.c"
    break;

  case 9: /* ConstDef: ID ArraySpecifier ASSIGN ConstInitVal  */
#line 75 "yacc.y"
                                                          {
                    (yyval.tree_node) = createTreeNodeLine("ConstDef", (yyvsp[-3].string)); 
                    addChild((yyval.tree_node), createTreeNodeString("ID1", (yyvsp[-3].string), (yyvsp[-3].string)));
                    addChild((yyval.tree_node), createTreeNode("ASSIGN"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1413 "yacc.tab.c"
    break;

  case 10: /* MoreConstDefs: COMMA ConstDef MoreConstDefs  */
#line 83 "yacc.y"
                                                 {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1422 "yacc.tab.c"
    break;

  case 11: /* MoreConstDefs: %empty  */
#line 87 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreConstDefs", yylineno);
                  }
#line 1430 "yacc.tab.c"
    break;

  case 12: /* ConstInitVal: ConstExp  */
#line 92 "yacc.y"
                             {
                    (yyval.tree_node) = createTreeNodeLine("ConstInitVal", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1439 "yacc.tab.c"
    break;

  case 13: /* ConstInitVal: LBRACE ConstInitValList RBRACE  */
#line 96 "yacc.y"
                                                   {
                    (yyval.tree_node) = createTreeNodeLine("ConstInitVal", yylineno);
                    addChild((yyval.tree_node), createTreeNode("LBRACE"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RBRACE"));
                  }
#line 1450 "yacc.tab.c"
    break;

  case 14: /* ConstInitValList: ConstInitVal MoreConstInitVals  */
#line 104 "yacc.y"
                                                   {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1459 "yacc.tab.c"
    break;

  case 15: /* ConstInitValList: %empty  */
#line 108 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("ConstInitValList", yylineno);
                  }
#line 1467 "yacc.tab.c"
    break;

  case 16: /* MoreConstInitVals: COMMA ConstInitVal MoreConstInitVals  */
#line 113 "yacc.y"
                                                         {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1476 "yacc.tab.c"
    break;

  case 17: /* MoreConstInitVals: %empty  */
#line 117 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreConstInitVals", yylineno);
                  }
#line 1484 "yacc.tab.c"
    break;

  case 18: /* VarDecl: BType VarDef MoreVarDefs SEMICOLON  */
#line 122 "yacc.y"
                                                       {
                    (yyval.tree_node) = createTreeNodeLine("VarDecl", (yyvsp[-3].tree_node));
                  }
#line 1492 "yacc.tab.c"
    break;

  case 19: /* VarDef: ID ArraySpecifier  */
#line 127 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("VarDef", (yyvsp[-1].string));
                    addChild((yyval.tree_node), createTreeNodeString("ID2", (yyvsp[-1].string), (yyvsp[-1].string)));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1502 "yacc.tab.c"
    break;

  case 20: /* VarDef: ID ArraySpecifier ASSIGN InitVal  */
#line 132 "yacc.y"
                                                     {
                    (yyval.tree_node) = createTreeNodeLine("VarDef", (yyvsp[-3].string)); 
                    addChild((yyval.tree_node), createTreeNodeString("ID3", (yyvsp[-3].string), (yyvsp[-3].string)));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("ASSIGN"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1514 "yacc.tab.c"
    break;

  case 21: /* MoreVarDefs: COMMA VarDef MoreVarDefs  */
#line 141 "yacc.y"
                                             {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1523 "yacc.tab.c"
    break;

  case 22: /* MoreVarDefs: %empty  */
#line 145 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreVarDefs", yylineno);
                  }
#line 1531 "yacc.tab.c"
    break;

  case 23: /* InitVal: Exp  */
#line 150 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeLine("InitVal", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1540 "yacc.tab.c"
    break;

  case 24: /* InitVal: LBRACE InitValList RBRACE  */
#line 154 "yacc.y"
                                              {
                    (yyval.tree_node) = createTreeNodeLine("InitVal", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("LBRACE"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RBRACE"));
                  }
#line 1551 "yacc.tab.c"
    break;

  case 25: /* InitValList: InitVal MoreInitVals  */
#line 162 "yacc.y"
                                         {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1560 "yacc.tab.c"
    break;

  case 26: /* InitValList: %empty  */
#line 166 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("InitValList", yylineno);
                  }
#line 1568 "yacc.tab.c"
    break;

  case 27: /* MoreInitVals: COMMA InitVal MoreInitVals  */
#line 171 "yacc.y"
                                               {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1577 "yacc.tab.c"
    break;

  case 28: /* MoreInitVals: %empty  */
#line 175 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreInitVals", yylineno);
                  }
#line 1585 "yacc.tab.c"
    break;

  case 29: /* FuncDef: FuncType ID LPAREN FuncFParams RPAREN Block  */
#line 180 "yacc.y"
                                                                {
                    (yyval.tree_node) = createTreeNodeLine("FuncDef", (yyvsp[-5].tree_node)); 
                    addChild((yyval.tree_node), (yyvsp[-5].tree_node));
                    addChild((yyval.tree_node), createTreeNodeString("ID4", (yyvsp[-4].string), (yyvsp[-4].string)));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1599 "yacc.tab.c"
    break;

  case 30: /* FuncType: VOID  */
#line 191 "yacc.y"
                         {
                    (yyval.tree_node) = createTreeNodeLine("FuncDef", yylineno);
                    addChild((yyval.tree_node), createTreeNodeString("Type", yylineno, "void"));
                  }
#line 1608 "yacc.tab.c"
    break;

  case 31: /* FuncType: INT  */
#line 195 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeLine("FuncDef", yylineno);
                    addChild((yyval.tree_node), createTreeNodeString("Type", yylineno, "int"));
                  }
#line 1617 "yacc.tab.c"
    break;

  case 32: /* FuncType: FLOAT  */
#line 199 "yacc.y"
                          {
                    (yyval.tree_node) = createTreeNodeLine("FuncDef", yylineno);
                    addChild((yyval.tree_node), createTreeNodeString("Type", yylineno, "float"));
                  }
#line 1626 "yacc.tab.c"
    break;

  case 33: /* FuncFParams: FuncFParam MoreFuncFParams  */
#line 205 "yacc.y"
                                               {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1635 "yacc.tab.c"
    break;

  case 34: /* FuncFParams: %empty  */
#line 209 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("FuncFParams", yylineno);
                  }
#line 1643 "yacc.tab.c"
    break;

  case 35: /* MoreFuncFParams: COMMA FuncFParam MoreFuncFParams  */
#line 214 "yacc.y"
                                                     {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1652 "yacc.tab.c"
    break;

  case 36: /* MoreFuncFParams: %empty  */
#line 218 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreFuncFParams", yylineno);
                  }
#line 1660 "yacc.tab.c"
    break;

  case 37: /* FuncFParam: BType ID ArraySpecifierForParam  */
#line 223 "yacc.y"
                                                    {
                    (yyval.tree_node) = createTreeNodeLine("FuncFParam", (yyvsp[-2].tree_node)); 
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNodeString("ID5", (yyvsp[-1].string), (yyvsp[-1].string)));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1671 "yacc.tab.c"
    break;

  case 38: /* ArraySpecifierForParam: LBRACKET RBRACKET ArraySpecifier  */
#line 231 "yacc.y"
                                                          {
                          (yyval.tree_node) = (yyvsp[0].tree_node);
                        }
#line 1679 "yacc.tab.c"
    break;

  case 39: /* ArraySpecifierForParam: %empty  */
#line 234 "yacc.y"
                                     {
                          (yyval.tree_node) = createTreeNodeLine("ArraySpecifier", yylineno);
                        }
#line 1687 "yacc.tab.c"
    break;

  case 40: /* ArraySpecifier: LBRACKET ConstExp RBRACKET ArraySpecifier  */
#line 239 "yacc.y"
                                                              {
                    (yyval.tree_node) = createTreeNodeLine("ArraySpecifier", (yyvsp[-3].lineno));
                    addChild((yyval.tree_node), createTreeNode("LBRACKET"));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RBRACKET"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1699 "yacc.tab.c"
    break;

  case 41: /* ArraySpecifier: %empty  */
#line 246 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("ArraySpecifier", yylineno);
                  }
#line 1707 "yacc.tab.c"
    break;

  case 42: /* Block: LBRACE BlockItems RBRACE  */
#line 251 "yacc.y"
                                             {
                    (yyval.tree_node) = createTreeNodeLine("Block", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("LBRACE"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RBRACE"));
                  }
#line 1718 "yacc.tab.c"
    break;

  case 43: /* BlockItems: BlockItem BlockItems  */
#line 259 "yacc.y"
                                         {
                    addChild((yyvsp[-1].tree_node), (yyvsp[0].tree_node));
                    (yyval.tree_node) = (yyvsp[-1].tree_node);
                  }
#line 1727 "yacc.tab.c"
    break;

  case 44: /* BlockItems: %empty  */
#line 263 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("BlockItems", yylineno);
                  }
#line 1735 "yacc.tab.c"
    break;

  case 45: /* BlockItem: Decl  */
#line 268 "yacc.y"
                         {
                    (yyval.tree_node) = createTreeNodeLine("BlockItem", (yyvsp[0].tree_node));
                  }
#line 1743 "yacc.tab.c"
    break;

  case 46: /* BlockItem: Stmt  */
#line 271 "yacc.y"
                         {
                    (yyval.tree_node) = createTreeNodeLine("BlockItem", (yyvsp[0].tree_node));
                  }
#line 1751 "yacc.tab.c"
    break;

  case 47: /* Stmt: LVal ASSIGN Exp SEMICOLON  */
#line 276 "yacc.y"
                                              {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-3].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-3].tree_node));
                    addChild((yyval.tree_node), createTreeNode("ASSIGN"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                  }
#line 1762 "yacc.tab.c"
    break;

  case 48: /* Stmt: Exp SEMICOLON  */
#line 282 "yacc.y"
                                  {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                  }
#line 1771 "yacc.tab.c"
    break;

  case 49: /* Stmt: Block  */
#line 286 "yacc.y"
                          {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[0].tree_node));
                  }
#line 1779 "yacc.tab.c"
    break;

  case 50: /* Stmt: IF LPAREN Cond RPAREN Stmt ElseClause  */
#line 289 "yacc.y"
                                                          {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-5].lineno));
                    addChild((yyval.tree_node), createTreeNode("IF"));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-3].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1793 "yacc.tab.c"
    break;

  case 51: /* Stmt: WHILE LPAREN Cond RPAREN Stmt  */
#line 298 "yacc.y"
                                                  {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-4].lineno));
                    addChild((yyval.tree_node), createTreeNode("WHILE"));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1806 "yacc.tab.c"
    break;

  case 52: /* Stmt: BREAK SEMICOLON  */
#line 306 "yacc.y"
                                    {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-1].lineno));
                    addChild((yyval.tree_node), createTreeNode("BREAK"));
                  }
#line 1815 "yacc.tab.c"
    break;

  case 53: /* Stmt: CONTINUE SEMICOLON  */
#line 310 "yacc.y"
                                       {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-1].lineno));
                    addChild((yyval.tree_node), createTreeNode("CONTINUE"));
                  }
#line 1824 "yacc.tab.c"
    break;

  case 54: /* Stmt: RETURN ExpOpt SEMICOLON  */
#line 314 "yacc.y"
                                            {
                    (yyval.tree_node) = createTreeNodeLine("Stmt", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("RETURN"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                  }
#line 1834 "yacc.tab.c"
    break;

  case 55: /* ElseClause: ELSE Stmt  */
#line 321 "yacc.y"
                              {
                    (yyval.tree_node) = createTreeNodeLine("ElseClause", (yyvsp[-1].lineno));
                    addChild((yyval.tree_node), createTreeNode("ELSE"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1844 "yacc.tab.c"
    break;

  case 56: /* ExpOpt: Exp  */
#line 328 "yacc.y"
                        {
                    (yyval.tree_node) = (yyvsp[0].tree_node);
                  }
#line 1852 "yacc.tab.c"
    break;

  case 57: /* ExpOpt: %empty  */
#line 331 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("ExpOpt", yylineno);
                  }
#line 1860 "yacc.tab.c"
    break;

  case 58: /* Cond: LOrExp  */
#line 336 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("Cond", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1869 "yacc.tab.c"
    break;

  case 59: /* LVal: ID ArraySpecifier  */
#line 342 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("LVal", (yyvsp[-1].string));
                    addChild((yyval.tree_node), createTreeNodeString("ID6", (yyvsp[-1].string), (yyvsp[-1].string)));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1879 "yacc.tab.c"
    break;

  case 60: /* Exp: AddExp  */
#line 349 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("Exp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1888 "yacc.tab.c"
    break;

  case 61: /* PrimaryExp: LPAREN Exp RPAREN  */
#line 355 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("PrimaryExp", (yyvsp[-2].lineno));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                  }
#line 1899 "yacc.tab.c"
    break;

  case 62: /* PrimaryExp: LVal  */
#line 361 "yacc.y"
                         {
                    (yyval.tree_node) = createTreeNodeLine("PrimaryExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1908 "yacc.tab.c"
    break;

  case 63: /* PrimaryExp: Number  */
#line 365 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("PrimaryExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1917 "yacc.tab.c"
    break;

  case 64: /* Number: INTEGER_LITERAL  */
#line 371 "yacc.y"
                                    {
                    (yyval.tree_node) = createTreeNodeString("Number", (yyvsp[0].intValue), "int");
                    addChild((yyval.tree_node), createTreeNodeInt("INT", (yyvsp[0].intValue), (yyvsp[0].intValue)));
                  }
#line 1926 "yacc.tab.c"
    break;

  case 65: /* UnaryExp: PrimaryExp  */
#line 377 "yacc.y"
                               {
                    (yyval.tree_node) = createTreeNodeLine("UnaryExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1935 "yacc.tab.c"
    break;

  case 66: /* UnaryExp: ID LPAREN FuncRParams RPAREN  */
#line 381 "yacc.y"
                                                 {
                    (yyval.tree_node) = createTreeNodeLine("UnaryExp", (yyvsp[-3].string));
                    addChild((yyval.tree_node), createTreeNodeString("ID7", (yyvsp[-3].string), (yyvsp[-3].string)));
                    addChild((yyval.tree_node), createTreeNode("LPARENT"));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode("RPARENT"));
                  }
#line 1947 "yacc.tab.c"
    break;

  case 67: /* UnaryExp: UnaryOp UnaryExp  */
#line 388 "yacc.y"
                                     {
                    (yyval.tree_node) = createTreeNodeLine("UnaryExp", (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), createTreeNode((yyvsp[-1].tree_node)));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 1957 "yacc.tab.c"
    break;

  case 68: /* UnaryOp: ADD  */
#line 395 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeString("UnaryOp", yylineno, "+");
                  }
#line 1965 "yacc.tab.c"
    break;

  case 69: /* UnaryOp: SUB  */
#line 398 "yacc.y"
                        {
                    (yyval.tree_node) = createTreeNodeString("UnaryOp", yylineno, "-");
                  }
#line 1973 "yacc.tab.c"
    break;

  case 70: /* FuncRParams: Exp MoreFuncRParams  */
#line 403 "yacc.y"
                                        {
                    (yyval.tree_node) = createTreeNodeLine("FuncRParams", (yyvsp[-1].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-1].tree_node));
                  }
#line 1982 "yacc.tab.c"
    break;

  case 71: /* FuncRParams: %empty  */
#line 407 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("FuncRParams", yylineno);
                  }
#line 1990 "yacc.tab.c"
    break;

  case 72: /* MoreFuncRParams: COMMA Exp MoreFuncRParams  */
#line 412 "yacc.y"
                                              {
                    addChild((yyvsp[-2].lineno), (yyvsp[-1].tree_node));
                    (yyval.tree_node) = (yyvsp[-2].lineno);
                  }
#line 1999 "yacc.tab.c"
    break;

  case 73: /* MoreFuncRParams: %empty  */
#line 416 "yacc.y"
                                {
                    (yyval.tree_node) = createTreeNodeLine("MoreFuncRParams", yylineno);
                  }
#line 2007 "yacc.tab.c"
    break;

  case 74: /* MulExp: UnaryExp  */
#line 421 "yacc.y"
                             {
                    (yyval.tree_node) = createTreeNodeLine("MulExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2016 "yacc.tab.c"
    break;

  case 75: /* MulExp: MulExp MUL UnaryExp  */
#line 425 "yacc.y"
                                        {
                    (yyval.tree_node) = createTreeNodeLine("MulExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("MUL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2027 "yacc.tab.c"
    break;

  case 76: /* MulExp: MulExp DIV UnaryExp  */
#line 431 "yacc.y"
                                        {
                    (yyval.tree_node) = createTreeNodeLine("MulExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("DIV"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2038 "yacc.tab.c"
    break;

  case 77: /* AddExp: MulExp  */
#line 439 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("AddExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2047 "yacc.tab.c"
    break;

  case 78: /* AddExp: AddExp ADD MulExp  */
#line 443 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("AddExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("ADD"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2058 "yacc.tab.c"
    break;

  case 79: /* AddExp: AddExp SUB MulExp  */
#line 449 "yacc.y"
                                      {
                    (yyval.tree_node) = createTreeNodeLine("AddExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("SUB"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2069 "yacc.tab.c"
    break;

  case 80: /* RelExp: AddExp  */
#line 457 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2078 "yacc.tab.c"
    break;

  case 81: /* RelExp: RelExp LESS AddExp  */
#line 461 "yacc.y"
                                       {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("LESS"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2089 "yacc.tab.c"
    break;

  case 82: /* RelExp: RelExp GREATER AddExp  */
#line 467 "yacc.y"
                                          {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("GREATER"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2100 "yacc.tab.c"
    break;

  case 83: /* RelExp: RelExp LESSEQUAL AddExp  */
#line 473 "yacc.y"
                                            {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("LESSEQUAL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2111 "yacc.tab.c"
    break;

  case 84: /* RelExp: RelExp GREATEREQUAL AddExp  */
#line 479 "yacc.y"
                                               {
                    (yyval.tree_node) = createTreeNodeLine("RelExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("GREATEREQUAL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2122 "yacc.tab.c"
    break;

  case 85: /* EqExp: RelExp  */
#line 487 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("EqExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2131 "yacc.tab.c"
    break;

  case 86: /* EqExp: EqExp EQUAL RelExp  */
#line 491 "yacc.y"
                                       {
                    (yyval.tree_node) = createTreeNodeLine("EqExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("EQUAL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2142 "yacc.tab.c"
    break;

  case 87: /* EqExp: EqExp UNEQUAL RelExp  */
#line 497 "yacc.y"
                                         {
                    (yyval.tree_node) = createTreeNodeLine("EqExp", (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), (yyvsp[-2].tree_node));
                    addChild((yyval.tree_node), createTreeNode("UNEQUAL"));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2153 "yacc.tab.c"
    break;

  case 88: /* LAndExp: EqExp  */
#line 505 "yacc.y"
                          {
                    (yyval.tree_node) = createTreeNodeLine("LAndExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2162 "yacc.tab.c"
    break;

  case 89: /* LOrExp: LAndExp  */
#line 511 "yacc.y"
                            {
                    (yyval.tree_node) = createTreeNodeLine("LOrExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2171 "yacc.tab.c"
    break;

  case 90: /* ConstExp: AddExp  */
#line 517 "yacc.y"
                           {
                    (yyval.tree_node) = createTreeNodeLine("ConstExp", (yyvsp[0].tree_node));
                    addChild((yyval.tree_node), (yyvsp[0].tree_node));
                  }
#line 2180 "yacc.tab.c"
    break;


#line 2184 "yacc.tab.c"

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 524 "yacc.y"
