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
#line 1 "kim.y"


#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;

#include <stdlib.h>
#include <stdio.h>
#include "type.h"

extern int line_no,syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;

extern char *yytext;
void yyerror(char *s);


extern yylex();


#line 94 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    COMMA = 258,                   /* COMMA  */
    ASSIGN = 259,                  /* ASSIGN  */
    DOTDOTDOT = 260,               /* DOTDOTDOT  */
    BARBAR = 261,                  /* BARBAR  */
    AMPAMP = 262,                  /* AMPAMP  */
    EQL = 263,                     /* EQL  */
    NEQ = 264,                     /* NEQ  */
    LSS = 265,                     /* LSS  */
    GTR = 266,                     /* GTR  */
    LEQ = 267,                     /* LEQ  */
    GEQ = 268,                     /* GEQ  */
    SLASH = 269,                   /* SLASH  */
    PERCENT = 270,                 /* PERCENT  */
    AMP = 271,                     /* AMP  */
    EXCL = 272,                    /* EXCL  */
    MINUS = 273,                   /* MINUS  */
    PLUS = 274,                    /* PLUS  */
    SIZEOF_SYM = 275,              /* SIZEOF_SYM  */
    LP = 276,                      /* LP  */
    LR = 277,                      /* LR  */
    LB = 278,                      /* LB  */
    RP = 279,                      /* RP  */
    RR = 280,                      /* RR  */
    RB = 281,                      /* RB  */
    PERIOD = 282,                  /* PERIOD  */
    ARROW = 283,                   /* ARROW  */
    PLUSPLUS = 284,                /* PLUSPLUS  */
    MINUSMINUS = 285,              /* MINUSMINUS  */
    INTEGER_CONSTANT = 286,        /* INTEGER_CONSTANT  */
    FLOAT_CONSTANT = 287,          /* FLOAT_CONSTANT  */
    CHARACTER_CONSTANT = 288,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 289,          /* STRING_LITERAL  */
    RETURN_SYM = 290,              /* RETURN_SYM  */
    CONTINUE_SYM = 291,            /* CONTINUE_SYM  */
    BREAK_SYM = 292,               /* BREAK_SYM  */
    WHILE_SYM = 293,               /* WHILE_SYM  */
    DO_SYM = 294,                  /* DO_SYM  */
    FOR_SYM = 295,                 /* FOR_SYM  */
    IF_SYM = 296,                  /* IF_SYM  */
    ELSE_SYM = 297,                /* ELSE_SYM  */
    SWITCH_SYM = 298,              /* SWITCH_SYM  */
    DEFAULT_SYM = 299,             /* DEFAULT_SYM  */
    CASE_SYM = 300,                /* CASE_SYM  */
    COLON = 301,                   /* COLON  */
    IDENTIFIER = 302,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 303,         /* TYPE_IDENTIFIER  */
    SEMICOLON = 304,               /* SEMICOLON  */
    AUTO_SYM = 305,                /* AUTO_SYM  */
    STATIC_SYM = 306,              /* STATIC_SYM  */
    TYPEDEF_SYM = 307,             /* TYPEDEF_SYM  */
    STRUCT_SYM = 308,              /* STRUCT_SYM  */
    UNION_SYM = 309,               /* UNION_SYM  */
    ENUM_SYM = 310,                /* ENUM_SYM  */
    STAR = 311                     /* STAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define COMMA 258
#define ASSIGN 259
#define DOTDOTDOT 260
#define BARBAR 261
#define AMPAMP 262
#define EQL 263
#define NEQ 264
#define LSS 265
#define GTR 266
#define LEQ 267
#define GEQ 268
#define SLASH 269
#define PERCENT 270
#define AMP 271
#define EXCL 272
#define MINUS 273
#define PLUS 274
#define SIZEOF_SYM 275
#define LP 276
#define LR 277
#define LB 278
#define RP 279
#define RR 280
#define RB 281
#define PERIOD 282
#define ARROW 283
#define PLUSPLUS 284
#define MINUSMINUS 285
#define INTEGER_CONSTANT 286
#define FLOAT_CONSTANT 287
#define CHARACTER_CONSTANT 288
#define STRING_LITERAL 289
#define RETURN_SYM 290
#define CONTINUE_SYM 291
#define BREAK_SYM 292
#define WHILE_SYM 293
#define DO_SYM 294
#define FOR_SYM 295
#define IF_SYM 296
#define ELSE_SYM 297
#define SWITCH_SYM 298
#define DEFAULT_SYM 299
#define CASE_SYM 300
#define COLON 301
#define IDENTIFIER 302
#define TYPE_IDENTIFIER 303
#define SEMICOLON 304
#define AUTO_SYM 305
#define STATIC_SYM 306
#define TYPEDEF_SYM 307
#define STRUCT_SYM 308
#define UNION_SYM 309
#define ENUM_SYM 310
#define STAR 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COMMA = 3,                      /* COMMA  */
  YYSYMBOL_ASSIGN = 4,                     /* ASSIGN  */
  YYSYMBOL_DOTDOTDOT = 5,                  /* DOTDOTDOT  */
  YYSYMBOL_BARBAR = 6,                     /* BARBAR  */
  YYSYMBOL_AMPAMP = 7,                     /* AMPAMP  */
  YYSYMBOL_EQL = 8,                        /* EQL  */
  YYSYMBOL_NEQ = 9,                        /* NEQ  */
  YYSYMBOL_LSS = 10,                       /* LSS  */
  YYSYMBOL_GTR = 11,                       /* GTR  */
  YYSYMBOL_LEQ = 12,                       /* LEQ  */
  YYSYMBOL_GEQ = 13,                       /* GEQ  */
  YYSYMBOL_SLASH = 14,                     /* SLASH  */
  YYSYMBOL_PERCENT = 15,                   /* PERCENT  */
  YYSYMBOL_AMP = 16,                       /* AMP  */
  YYSYMBOL_EXCL = 17,                      /* EXCL  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_PLUS = 19,                      /* PLUS  */
  YYSYMBOL_SIZEOF_SYM = 20,                /* SIZEOF_SYM  */
  YYSYMBOL_LP = 21,                        /* LP  */
  YYSYMBOL_LR = 22,                        /* LR  */
  YYSYMBOL_LB = 23,                        /* LB  */
  YYSYMBOL_RP = 24,                        /* RP  */
  YYSYMBOL_RR = 25,                        /* RR  */
  YYSYMBOL_RB = 26,                        /* RB  */
  YYSYMBOL_PERIOD = 27,                    /* PERIOD  */
  YYSYMBOL_ARROW = 28,                     /* ARROW  */
  YYSYMBOL_PLUSPLUS = 29,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 30,                /* MINUSMINUS  */
  YYSYMBOL_INTEGER_CONSTANT = 31,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 32,            /* FLOAT_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 33,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 34,            /* STRING_LITERAL  */
  YYSYMBOL_RETURN_SYM = 35,                /* RETURN_SYM  */
  YYSYMBOL_CONTINUE_SYM = 36,              /* CONTINUE_SYM  */
  YYSYMBOL_BREAK_SYM = 37,                 /* BREAK_SYM  */
  YYSYMBOL_WHILE_SYM = 38,                 /* WHILE_SYM  */
  YYSYMBOL_DO_SYM = 39,                    /* DO_SYM  */
  YYSYMBOL_FOR_SYM = 40,                   /* FOR_SYM  */
  YYSYMBOL_IF_SYM = 41,                    /* IF_SYM  */
  YYSYMBOL_ELSE_SYM = 42,                  /* ELSE_SYM  */
  YYSYMBOL_SWITCH_SYM = 43,                /* SWITCH_SYM  */
  YYSYMBOL_DEFAULT_SYM = 44,               /* DEFAULT_SYM  */
  YYSYMBOL_CASE_SYM = 45,                  /* CASE_SYM  */
  YYSYMBOL_COLON = 46,                     /* COLON  */
  YYSYMBOL_IDENTIFIER = 47,                /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 48,           /* TYPE_IDENTIFIER  */
  YYSYMBOL_SEMICOLON = 49,                 /* SEMICOLON  */
  YYSYMBOL_AUTO_SYM = 50,                  /* AUTO_SYM  */
  YYSYMBOL_STATIC_SYM = 51,                /* STATIC_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 52,               /* TYPEDEF_SYM  */
  YYSYMBOL_STRUCT_SYM = 53,                /* STRUCT_SYM  */
  YYSYMBOL_UNION_SYM = 54,                 /* UNION_SYM  */
  YYSYMBOL_ENUM_SYM = 55,                  /* ENUM_SYM  */
  YYSYMBOL_STAR = 56,                      /* STAR  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_translation_unit = 59,          /* translation_unit  */
  YYSYMBOL_external_declaration = 60,      /* external_declaration  */
  YYSYMBOL_function_definition = 61,       /* function_definition  */
  YYSYMBOL_62_1 = 62,                      /* @1  */
  YYSYMBOL_63_2 = 63,                      /* @2  */
  YYSYMBOL_declaration_list_opt = 64,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 65,          /* declaration_list  */
  YYSYMBOL_declaration = 66,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 67,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 68,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 69,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 70,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 71,           /* init_declarator  */
  YYSYMBOL_initializer = 72,               /* initializer  */
  YYSYMBOL_initializer_list = 73,          /* initializer_list  */
  YYSYMBOL_type_specifier = 74,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 75,     /* struct_type_specifier  */
  YYSYMBOL_76_3 = 76,                      /* @3  */
  YYSYMBOL_77_4 = 77,                      /* @4  */
  YYSYMBOL_78_5 = 78,                      /* @5  */
  YYSYMBOL_79_6 = 79,                      /* @6  */
  YYSYMBOL_struct_or_union = 80,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 81,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 82,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 83,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 84,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 85,       /* enum_type_specifier  */
  YYSYMBOL_86_7 = 86,                      /* @7  */
  YYSYMBOL_87_8 = 87,                      /* @8  */
  YYSYMBOL_enumerator_list = 88,           /* enumerator_list  */
  YYSYMBOL_enumerator = 89,                /* enumerator  */
  YYSYMBOL_90_9 = 90,                      /* @9  */
  YYSYMBOL_declarator = 91,                /* declarator  */
  YYSYMBOL_pointer = 92,                   /* pointer  */
  YYSYMBOL_direct_declarator = 93,         /* direct_declarator  */
  YYSYMBOL_94_10 = 94,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 95,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 96,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 97,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 98,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 99,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 100,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 101, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 102,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 103,           /* statement_list  */
  YYSYMBOL_statement = 104,                /* statement  */
  YYSYMBOL_labeled_statement = 105,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 106,       /* compound_statement  */
  YYSYMBOL_107_11 = 107,                   /* @11  */
  YYSYMBOL_expression_statement = 108,     /* expression_statement  */
  YYSYMBOL_selection_statement = 109,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 110,      /* iteration_statement  */
  YYSYMBOL_for_expression = 111,           /* for_expression  */
  YYSYMBOL_expression_opt = 112,           /* expression_opt  */
  YYSYMBOL_jump_statement = 113,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 114,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 115,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 116,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 117,      /* constant_expression  */
  YYSYMBOL_expression = 118,               /* expression  */
  YYSYMBOL_comma_expression = 119,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 120,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 121,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 122,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 123,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 124,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 125,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 126,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 127,      /* equality_expression  */
  YYSYMBOL_relational_expression = 128,    /* relational_expression  */
  YYSYMBOL_shift_expression = 129,         /* shift_expression  */
  YYSYMBOL_additive_expression = 130,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 131, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 132,          /* cast_expression  */
  YYSYMBOL_unary_expression = 133,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 134,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 135,       /* primary_expression  */
  YYSYMBOL_type_name = 136                 /* type_name  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   428

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    34,    34,    38,    39,    42,    43,    46,    46,    48,
      48,    52,    53,    56,    57,    60,    64,    65,    66,    67,
      70,    71,    72,    76,    77,    81,    82,    85,    86,    90,
      91,    95,    96,   101,   102,   103,   107,   108,   106,   110,
     110,   110,   113,   116,   117,   120,   121,   125,   128,   129,
     132,   136,   136,   138,   138,   139,   142,   143,   146,   147,
     147,   151,   152,   155,   156,   171,   172,   173,   174,   174,
     180,   181,   185,   186,   191,   192,   195,   196,   200,   201,
     206,   207,   208,   211,   212,   213,   214,   216,   223,   224,
     227,   228,   231,   232,   233,   234,   235,   236,   239,   240,
     243,   243,   249,   250,   253,   254,   255,   258,   259,   260,
     263,   268,   269,   272,   273,   274,   279,   280,   283,   284,
     287,   288,   292,   296,   300,   304,   305,   308,   311,   312,
     315,   316,   319,   322,   325,   328,   329,   330,   334,   335,
     336,   337,   338,   342,   346,   347,   348,   352,   353,   354,
     355,   358,   359,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   376,   377,   378,   379,   380,   381,   382,
     386,   387,   388,   389,   390,   391,   395
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
  "\"end of file\"", "error", "\"invalid token\"", "COMMA", "ASSIGN",
  "DOTDOTDOT", "BARBAR", "AMPAMP", "EQL", "NEQ", "LSS", "GTR", "LEQ",
  "GEQ", "SLASH", "PERCENT", "AMP", "EXCL", "MINUS", "PLUS", "SIZEOF_SYM",
  "LP", "LR", "LB", "RP", "RR", "RB", "PERIOD", "ARROW", "PLUSPLUS",
  "MINUSMINUS", "INTEGER_CONSTANT", "FLOAT_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "RETURN_SYM", "CONTINUE_SYM", "BREAK_SYM", "WHILE_SYM",
  "DO_SYM", "FOR_SYM", "IF_SYM", "ELSE_SYM", "SWITCH_SYM", "DEFAULT_SYM",
  "CASE_SYM", "COLON", "IDENTIFIER", "TYPE_IDENTIFIER", "SEMICOLON",
  "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM", "UNION_SYM",
  "ENUM_SYM", "STAR", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-200)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     354,    45,  -200,  -200,  -200,  -200,  -200,  -200,  -200,   -13,
      23,    91,   354,  -200,  -200,  -200,    45,   172,   172,  -200,
      46,  -200,  -200,     3,    18,    76,    92,    94,  -200,  -200,
    -200,    96,   140,  -200,    72,  -200,  -200,   125,   126,   135,
      18,  -200,   165,  -200,   136,   115,  -200,    45,   306,   135,
     148,  -200,  -200,  -200,   172,   165,   165,   165,   165,   313,
     265,   347,   347,  -200,  -200,  -200,  -200,  -200,   165,   149,
    -200,  -200,  -200,  -200,  -200,   182,   183,  -200,  -200,  -200,
      89,   167,  -200,   103,    -1,  -200,   185,   209,  -200,   115,
     188,    19,  -200,  -200,   189,   306,  -200,  -200,  -200,  -200,
      64,   172,    -2,   181,  -200,   206,  -200,  -200,  -200,  -200,
    -200,  -200,   265,  -200,    15,   186,   191,   165,  -200,  -200,
    -200,  -200,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   166,   170,
    -200,  -200,    48,   224,   115,  -200,  -200,    71,    64,    45,
     111,  -200,   231,   172,  -200,    45,   335,   165,  -200,    25,
    -200,  -200,    86,  -200,    32,   207,   372,    67,  -200,  -200,
     165,   183,  -200,   167,   167,  -200,  -200,  -200,  -200,    -1,
      -1,  -200,  -200,  -200,  -200,   210,   238,  -200,   216,  -200,
    -200,  -200,   165,  -200,   306,  -200,   119,    12,  -200,  -200,
    -200,  -200,   165,   194,   195,   233,   231,   234,   235,   236,
     199,   165,  -200,   248,   231,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,   228,  -200,   255,   264,   232,    86,   172,   165,
    -200,  -200,  -200,  -200,  -200,   165,  -200,  -200,  -200,  -200,
      45,  -200,   240,  -200,  -200,  -200,   165,   221,   165,   165,
     165,   231,   244,  -200,  -200,  -200,  -200,  -200,  -200,   267,
     268,  -200,  -200,  -200,   276,   271,   277,   253,   279,   280,
    -200,   231,  -200,  -200,   231,   165,   231,   165,   231,   231,
    -200,  -200,   281,  -200,   257,   266,  -200,   258,   165,   231,
    -200,  -200,  -200
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    65,    35,    20,    21,    22,    43,    44,    53,
      63,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    55,     0,    64,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,   170,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   156,   151,   158,
     159,   160,     0,   161,    78,     0,     0,     0,   154,   155,
     157,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     168,   169,     0,     0,     0,    54,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,     0,    70,    81,   176,   175,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   146,
     145,   149,   150,   148,   126,     0,   117,   118,     0,   166,
     167,    52,     0,    57,     0,    30,     0,     0,    48,    50,
      41,    46,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   162,   152,   165,     0,   164,    60,    32,    38,
       0,    47,     0,   112,   114,   115,     0,     0,   111,     0,
       0,     0,     0,   101,    91,   103,    85,    83,    84,     0,
       0,   119,    49,   113,     0,     0,     0,     0,     0,     0,
      99,     0,    87,    86,     0,     0,     0,   111,     0,     0,
      98,   107,     0,   109,     0,   104,   106,     0,   111,     0,
     108,   110,   105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -200,  -200,  -200,   297,  -200,  -200,  -200,  -200,  -200,   -89,
       8,  -200,  -200,  -200,   263,   -91,  -200,   -83,  -200,  -200,
    -200,  -200,  -200,  -200,   163,  -119,  -200,   101,  -200,  -200,
    -200,   225,   204,  -200,     0,    -3,   -20,  -200,   -52,  -200,
    -200,   187,   241,  -133,  -124,  -200,  -200,   -60,  -200,    -7,
    -200,  -200,  -200,  -200,  -200,  -199,  -200,  -200,  -200,  -148,
     -43,   -42,  -200,  -125,  -200,  -200,   227,   229,  -200,  -200,
    -200,    13,    74,  -200,    10,   -28,     1,  -200,  -200,   242
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    44,
      27,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   266,   242,   221,   185,   186,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    25,   103,    40,   146,    97,    71,    28,    16,   226,
     184,   187,   154,   132,   133,   240,    34,   149,   115,   156,
      16,   157,   144,   225,     1,    35,    36,   107,   109,   110,
     111,   201,    53,   225,    26,   227,   166,   230,   157,    41,
     120,    42,    98,   227,   145,     2,   156,    94,   157,   267,
       2,   144,    97,    71,    10,   134,   108,   108,   108,   108,
     113,   241,   118,   119,   223,   149,     1,   149,   114,   108,
     115,    10,     2,   191,   194,   115,    48,   201,   284,    10,
       3,   260,     4,     5,     6,     7,     8,     9,   166,   291,
     157,    29,     2,    37,    -7,   188,   195,   124,   125,   159,
      43,    10,   158,   238,   181,   182,   183,   228,   229,   155,
     261,   167,     3,   149,   -51,    71,    45,     7,     8,     9,
     114,   130,   131,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   200,   173,   174,    40,
     179,   180,   233,    47,   239,    46,   247,   -36,    51,   199,
     237,    97,    71,   159,   254,    94,    25,    52,    89,     3,
     243,   155,    90,   167,     7,     8,     9,     3,   252,    71,
      99,   108,     7,     8,     9,   121,   259,   126,   127,   128,
     129,    55,    56,    57,    58,    59,    60,    71,   122,   135,
     123,   270,   -59,    48,    61,    62,    63,    64,    65,    66,
     175,   176,   177,   178,   264,   163,   243,   268,   269,   164,
     169,   280,    67,   189,   281,   170,   283,   190,   285,   286,
       3,    68,     4,     5,     6,     7,     8,     9,   192,   292,
     136,   232,   137,   282,   234,   243,   138,   139,   140,   141,
     199,   235,   236,   244,   245,   251,   243,    55,    56,    57,
      58,    59,    60,    52,   246,   248,   249,   250,   258,   265,
      61,    62,    63,    64,    65,    66,   202,   203,   204,   205,
     206,   207,   208,   253,   209,   210,   211,   255,    67,   256,
     212,    55,    56,    57,    58,    59,    60,    68,   257,   263,
     271,   272,   275,   273,    61,    62,    63,    64,    65,    66,
     274,   276,   277,   278,   279,   287,   288,   290,   289,    30,
      93,   196,    67,     3,   142,     4,     5,     6,     7,     8,
       9,    68,    55,    56,    57,    58,    59,    60,    95,    55,
      56,    57,    58,    59,   112,    61,    62,    63,    64,    65,
      66,   262,    61,    62,    63,    64,    65,    66,   193,   171,
       0,   231,   172,    67,   165,   168,   156,     0,   157,     0,
      67,     0,    68,    55,    56,    57,    58,    59,   117,    68,
       0,     0,     0,     0,     0,     1,    61,    62,    63,    64,
      65,    66,     2,     3,     0,     4,     5,     6,     7,     8,
       9,    10,     0,   166,    67,   157,     0,     0,     0,     0,
       0,     2,     3,    68,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     4,     5,     6,     7,     8,     9,    10
};

static const yytype_int16 yycheck[] =
{
      42,     1,    54,    23,    95,    48,    48,    10,     0,   157,
     135,   136,   101,    14,    15,     3,    16,   100,    60,    21,
      12,    23,     3,   156,    21,    17,    18,    55,    56,    57,
      58,   150,    39,   166,    47,   159,    21,     5,    23,    21,
      68,    23,    49,   167,    25,    47,    21,    47,    23,   248,
      47,     3,    95,    95,    56,    56,    55,    56,    57,    58,
      59,    49,    61,    62,   153,   148,    21,   150,    60,    68,
     112,    56,    47,    25,     3,   117,     4,   196,   277,    56,
      48,   229,    50,    51,    52,    53,    54,    55,    21,   288,
      23,     0,    47,    47,    22,   137,    25,     8,     9,   102,
      24,    56,   102,   194,   132,   133,   134,    21,    22,   101,
     235,   114,    48,   196,    22,   157,    22,    53,    54,    55,
     112,    18,    19,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    25,   124,   125,   159,
     130,   131,   170,     3,    25,    49,   206,    22,    22,   149,
     192,   194,   194,   156,   214,   155,   156,    22,    22,    48,
     202,   153,    47,   166,    53,    54,    55,    48,   211,   211,
      22,   170,    53,    54,    55,    26,   228,    10,    11,    12,
      13,    16,    17,    18,    19,    20,    21,   229,     6,     4,
       7,   251,     4,     4,    29,    30,    31,    32,    33,    34,
     126,   127,   128,   129,   246,    24,   248,   249,   250,     3,
      24,   271,    47,    47,   274,    24,   276,    47,   278,   279,
      48,    56,    50,    51,    52,    53,    54,    55,     4,   289,
      21,    24,    23,   275,    24,   277,    27,    28,    29,    30,
     240,     3,    26,    49,    49,    46,   288,    16,    17,    18,
      19,    20,    21,    22,    21,    21,    21,    21,    26,    38,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    25,    43,    44,    45,    49,    47,    24,
      49,    16,    17,    18,    19,    20,    21,    56,    24,    49,
      46,    24,    21,    25,    29,    30,    31,    32,    33,    34,
      24,    24,    49,    24,    24,    24,    49,    49,    42,    12,
      47,   148,    47,    48,    89,    50,    51,    52,    53,    54,
      55,    56,    16,    17,    18,    19,    20,    21,    22,    16,
      17,    18,    19,    20,    21,    29,    30,    31,    32,    33,
      34,   240,    29,    30,    31,    32,    33,    34,   144,   122,
      -1,   164,   123,    47,   112,   114,    21,    -1,    23,    -1,
      47,    -1,    56,    16,    17,    18,    19,    20,    21,    56,
      -1,    -1,    -1,    -1,    -1,    21,    29,    30,    31,    32,
      33,    34,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    21,    47,    23,    -1,    -1,    -1,    -1,
      -1,    47,    48,    56,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    47,    48,    50,    51,    52,    53,    54,    55,
      56,    58,    59,    60,    61,    66,    67,    68,    74,    75,
      80,    85,    91,    92,    93,    91,    47,    87,    92,     0,
      60,    69,    70,    71,    91,    67,    67,    47,    78,    63,
      93,    21,    23,    24,    86,    22,    49,     3,     4,    62,
      76,    22,    22,   106,    94,    16,    17,    18,    19,    20,
      21,    29,    30,    31,    32,    33,    34,    47,    56,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    22,
      47,    88,    89,    71,    91,    22,    72,   117,   106,    22,
      79,   107,    67,    95,    96,    97,    98,   132,   133,   132,
     132,   132,    21,   133,    67,   118,   136,    21,   133,   133,
     132,    26,     6,     7,     8,     9,    10,    11,    12,    13,
      18,    19,    14,    15,    56,     4,    21,    23,    27,    28,
      29,    30,    88,    90,     3,    25,    72,    73,    77,    74,
      81,    82,    64,    65,    66,    67,    21,    23,    91,    92,
      99,   100,   101,    24,     3,   136,    21,    92,    99,    24,
      24,   123,   124,   128,   128,   129,   129,   129,   129,   131,
     131,   132,   132,   132,   120,   114,   115,   120,   118,    47,
      47,    25,     4,    89,     3,    25,    81,    83,    84,    91,
      25,    82,    35,    36,    37,    38,    39,    40,    41,    43,
      44,    45,    49,   102,   103,   104,   105,   106,   108,   109,
     110,   113,   118,    66,    95,   100,   116,   101,    21,    22,
       5,    98,    24,   132,    24,     3,    26,   118,    72,    25,
       3,    49,   112,   118,    49,    49,    21,   104,    21,    21,
      21,    46,   117,    25,   104,    49,    24,    24,    26,    95,
     116,   120,    84,    49,   118,    38,   111,   112,   118,   118,
     104,    46,    24,    25,    24,    21,    24,    49,    24,    24,
     104,   104,   118,   104,   112,   104,   104,    24,    49,    42,
      49,   112,   104
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      61,    64,    64,    65,    65,    66,    67,    67,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    76,    77,    75,    78,
      79,    75,    75,    80,    80,    81,    81,    82,    83,    83,
      84,    86,    85,    87,    85,    85,    88,    88,    89,    90,
      89,    91,    91,    92,    92,    93,    93,    93,    94,    93,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   105,   105,
     107,   106,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   112,   112,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   118,   119,   120,   120,   121,   122,   122,
     123,   123,   124,   125,   126,   127,   127,   127,   128,   128,
     128,   128,   128,   129,   130,   130,   130,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   136
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     3,     4,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
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
  case 2: /* program: translation_unit  */
#line 35 "kim.y"
                                                {root=makeNode(N_PROGRAM,NIL,yyvsp[0],NIL); checkForwardReference();}
#line 1630 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 38 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 1636 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 39 "kim.y"
                                                                                                {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1642 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 42 "kim.y"
                                                                     {yyval=yyvsp[0];}
#line 1648 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 43 "kim.y"
                                                              {yyval=yyvsp[0];}
#line 1654 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 46 "kim.y"
                                                                                   {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1660 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 47 "kim.y"
                                                                   {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1666 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 48 "kim.y"
                                                             {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],makeSpecifier(int_type,0));}
#line 1672 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 49 "kim.y"
                                                                   {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1678 "y.tab.c"
    break;

  case 11: /* declaration_list_opt: %empty  */
#line 52 "kim.y"
                                                                                                {yyval=NIL;}
#line 1684 "y.tab.c"
    break;

  case 12: /* declaration_list_opt: declaration_list  */
#line 53 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 1690 "y.tab.c"
    break;

  case 13: /* declaration_list: declaration  */
#line 56 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 1696 "y.tab.c"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 57 "kim.y"
                                                                                        {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1702 "y.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 61 "kim.y"
                                                                                                                        {yyval=setDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1708 "y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier  */
#line 64 "kim.y"
                                                                                        {yyval=makeSpecifier(yyvsp[0],0);}
#line 1714 "y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier  */
#line 65 "kim.y"
                                                                                {yyval=makeSpecifier(0,yyvsp[0]);}
#line 1720 "y.tab.c"
    break;

  case 18: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 66 "kim.y"
                                                                                                {yyval=updateSpecifier(yyvsp[0],yyvsp[-1],0);}
#line 1726 "y.tab.c"
    break;

  case 19: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 67 "kim.y"
                                                                                                        {yyval=updateSpecifier(yyvsp[0],0,yyvsp[-1]);}
#line 1732 "y.tab.c"
    break;

  case 20: /* storage_class_specifier: AUTO_SYM  */
#line 70 "kim.y"
                                                                {yyval=S_AUTO;}
#line 1738 "y.tab.c"
    break;

  case 21: /* storage_class_specifier: STATIC_SYM  */
#line 71 "kim.y"
                                                                {yyval=S_STATIC;}
#line 1744 "y.tab.c"
    break;

  case 22: /* storage_class_specifier: TYPEDEF_SYM  */
#line 72 "kim.y"
                                                                {yyval=S_TYPEDEF;}
#line 1750 "y.tab.c"
    break;

  case 23: /* init_declarator_list_opt: %empty  */
#line 76 "kim.y"
                                                                                                        {makeDummyIdentifier();}
#line 1756 "y.tab.c"
    break;

  case 24: /* init_declarator_list_opt: init_declarator_list  */
#line 77 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 1762 "y.tab.c"
    break;

  case 25: /* init_declarator_list: init_declarator  */
#line 81 "kim.y"
                                                                                        {yyval=yyvsp[0];}
#line 1768 "y.tab.c"
    break;

  case 26: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 82 "kim.y"
                                                                                                {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1774 "y.tab.c"
    break;

  case 27: /* init_declarator: declarator  */
#line 85 "kim.y"
                                                                                                        {yyval=yyvsp[0];}
#line 1780 "y.tab.c"
    break;

  case 28: /* init_declarator: declarator ASSIGN initializer  */
#line 86 "kim.y"
                                                                                        {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1786 "y.tab.c"
    break;

  case 29: /* initializer: constant_expression  */
#line 90 "kim.y"
                                                                                                {yyval=makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1792 "y.tab.c"
    break;

  case 30: /* initializer: LR initializer_list RR  */
#line 91 "kim.y"
                                                                                                {yyval=yyvsp[-1];}
#line 1798 "y.tab.c"
    break;

  case 31: /* initializer_list: initializer  */
#line 95 "kim.y"
                                                             {yyval=makeNode(N_INIT_LIST,yyvsp[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1804 "y.tab.c"
    break;

  case 32: /* initializer_list: initializer_list COMMA initializer  */
#line 96 "kim.y"
                                                                                     {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 1810 "y.tab.c"
    break;

  case 33: /* type_specifier: struct_type_specifier  */
#line 101 "kim.y"
                                                                                    {yyval=yyvsp[0];}
#line 1816 "y.tab.c"
    break;

  case 34: /* type_specifier: enum_type_specifier  */
#line 102 "kim.y"
                                                                                        {yyval=yyvsp[0];}
#line 1822 "y.tab.c"
    break;

  case 35: /* type_specifier: TYPE_IDENTIFIER  */
#line 103 "kim.y"
                                                                                                {yyval=yyvsp[0];}
#line 1828 "y.tab.c"
    break;

  case 36: /* @3: %empty  */
#line 107 "kim.y"
                                                {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1834 "y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 108 "kim.y"
                                                   {yyval=current_id; current_level++;}
#line 1840 "y.tab.c"
    break;

  case 38: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 109 "kim.y"
                                                {checkForwardReference(); yyval=setTypeField(yyvsp[-4],yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1846 "y.tab.c"
    break;

  case 39: /* @5: %empty  */
#line 110 "kim.y"
                                                                  {yyval=makeType(yyvsp[0]);}
#line 1852 "y.tab.c"
    break;

  case 40: /* @6: %empty  */
#line 110 "kim.y"
                                                                                        {yyval=current_id; current_level++;}
#line 1858 "y.tab.c"
    break;

  case 41: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 111 "kim.y"
                                                                           {checkForwardReference(); yyval=setTypeField(yyvsp[-4],yyvsp[-1]); current_level--;
						current_id=yyvsp[-2];}
#line 1865 "y.tab.c"
    break;

  case 42: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 113 "kim.y"
                                                                             {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1871 "y.tab.c"
    break;

  case 43: /* struct_or_union: STRUCT_SYM  */
#line 116 "kim.y"
                                                                                                {yyval=T_STRUCT;}
#line 1877 "y.tab.c"
    break;

  case 44: /* struct_or_union: UNION_SYM  */
#line 117 "kim.y"
                                                                                                        {yyval=T_UNION;}
#line 1883 "y.tab.c"
    break;

  case 45: /* struct_declaration_list: struct_declaration  */
#line 120 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 1889 "y.tab.c"
    break;

  case 46: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 121 "kim.y"
                                                                                                {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1895 "y.tab.c"
    break;

  case 47: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 125 "kim.y"
                                                                                                  {yyval=setStructDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1901 "y.tab.c"
    break;

  case 48: /* struct_declarator_list: struct_declarator  */
#line 128 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 1907 "y.tab.c"
    break;

  case 49: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 129 "kim.y"
                                                                                                        {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1913 "y.tab.c"
    break;

  case 50: /* struct_declarator: declarator  */
#line 132 "kim.y"
                                                            {yyval=yyvsp[0];}
#line 1919 "y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 136 "kim.y"
                                                                      {yyval=setTypeStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1925 "y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 137 "kim.y"
                                                                      {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1931 "y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 138 "kim.y"
                                                           {yyval=makeType(T_ENUM);}
#line 1937 "y.tab.c"
    break;

  case 54: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 138 "kim.y"
                                                                                                        {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1943 "y.tab.c"
    break;

  case 55: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 139 "kim.y"
                                                                      {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1949 "y.tab.c"
    break;

  case 56: /* enumerator_list: enumerator  */
#line 142 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 1955 "y.tab.c"
    break;

  case 57: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 143 "kim.y"
                                                                                                {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1961 "y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER  */
#line 146 "kim.y"
                                                             {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1967 "y.tab.c"
    break;

  case 59: /* @9: %empty  */
#line 147 "kim.y"
                                                             {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1973 "y.tab.c"
    break;

  case 60: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 148 "kim.y"
                                                                  {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1979 "y.tab.c"
    break;

  case 61: /* declarator: pointer direct_declarator  */
#line 151 "kim.y"
                                                                            {yyval=setDeclaratorElementType(yyvsp[0],yyvsp[-1]);}
#line 1985 "y.tab.c"
    break;

  case 62: /* declarator: direct_declarator  */
#line 152 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 1991 "y.tab.c"
    break;

  case 63: /* pointer: STAR  */
#line 155 "kim.y"
                                                                                {yyval=makeType(T_POINTER);}
#line 1997 "y.tab.c"
    break;

  case 64: /* pointer: STAR pointer  */
#line 156 "kim.y"
                                                                        {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2003 "y.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 171 "kim.y"
                                                             {yyval=makeIdentifier(yyvsp[0]);}
#line 2009 "y.tab.c"
    break;

  case 66: /* direct_declarator: LP declarator RP  */
#line 172 "kim.y"
                                                                   {yyval=yyvsp[-1];}
#line 2015 "y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 173 "kim.y"
                                                                                                  {yyval=setDeclaratorElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2021 "y.tab.c"
    break;

  case 68: /* @10: %empty  */
#line 174 "kim.y"
                                                                       {yyval=current_id; current_level++;}
#line 2027 "y.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 176 "kim.y"
                                                {checkForwardReference(); current_id=yyvsp[-2]; current_level--; 
						yyval=setDeclaratorElementType(yyvsp[-4],setTypeField(makeType(T_FUNC),yyvsp[-1]));}
#line 2034 "y.tab.c"
    break;

  case 70: /* parameter_type_list_opt: %empty  */
#line 180 "kim.y"
                                                                                                        {yyval=NIL;}
#line 2040 "y.tab.c"
    break;

  case 71: /* parameter_type_list_opt: parameter_type_list  */
#line 181 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 2046 "y.tab.c"
    break;

  case 72: /* parameter_type_list: parameter_list  */
#line 185 "kim.y"
                                                                 {yyval=yyvsp[0];}
#line 2052 "y.tab.c"
    break;

  case 73: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 187 "kim.y"
                                                {yyval=linkDeclaratorList(yyvsp[-2],setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2058 "y.tab.c"
    break;

  case 74: /* parameter_list: parameter_declaration  */
#line 191 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2064 "y.tab.c"
    break;

  case 75: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 192 "kim.y"
                                                                                              {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 2070 "y.tab.c"
    break;

  case 76: /* parameter_declaration: declaration_specifiers declarator  */
#line 195 "kim.y"
                                                                                    {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2076 "y.tab.c"
    break;

  case 77: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 197 "kim.y"
                                                {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),yyvsp[0]),yyvsp[-1]);}
#line 2082 "y.tab.c"
    break;

  case 78: /* abstract_declarator_opt: %empty  */
#line 200 "kim.y"
                                                                                                {yyval=NIL;}
#line 2088 "y.tab.c"
    break;

  case 79: /* abstract_declarator_opt: abstract_declarator  */
#line 201 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2094 "y.tab.c"
    break;

  case 80: /* abstract_declarator: direct_abstract_declarator  */
#line 206 "kim.y"
                                                                             {yyval=yyvsp[0];}
#line 2100 "y.tab.c"
    break;

  case 81: /* abstract_declarator: pointer  */
#line 207 "kim.y"
                                                          {yyval=makeType(T_POINTER);}
#line 2106 "y.tab.c"
    break;

  case 82: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 208 "kim.y"
                                                                                     {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2112 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 211 "kim.y"
                                                                            {yyval=yyvsp[-1];}
#line 2118 "y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 212 "kim.y"
                                                                                {yyval=setTypeExpr(makeType(T_ARRAY),yyvsp[-1]);}
#line 2124 "y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 213 "kim.y"
                                                                                {yyval=setTypeExpr(makeType(T_FUNC),yyvsp[-1]);}
#line 2130 "y.tab.c"
    break;

  case 86: /* direct_abstract_declarator: direct_abstract_declarator LR constant_expression_opt RR  */
#line 215 "kim.y"
                                                {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2136 "y.tab.c"
    break;

  case 87: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 217 "kim.y"
                                                {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 2142 "y.tab.c"
    break;

  case 88: /* statement_list_opt: %empty  */
#line 223 "kim.y"
                                                                                {yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2148 "y.tab.c"
    break;

  case 89: /* statement_list_opt: statement_list  */
#line 224 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2154 "y.tab.c"
    break;

  case 90: /* statement_list: statement  */
#line 227 "kim.y"
                                                                {yyval=makeNode(N_STMT_LIST,yyvsp[0],NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2160 "y.tab.c"
    break;

  case 91: /* statement_list: statement_list statement  */
#line 228 "kim.y"
                                                                                {yyval=makeNodeList(N_STMT_LIST,yyvsp[-1],yyvsp[0]);}
#line 2166 "y.tab.c"
    break;

  case 92: /* statement: labeled_statement  */
#line 231 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2172 "y.tab.c"
    break;

  case 93: /* statement: compound_statement  */
#line 232 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2178 "y.tab.c"
    break;

  case 94: /* statement: expression_statement  */
#line 233 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2184 "y.tab.c"
    break;

  case 95: /* statement: selection_statement  */
#line 234 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2190 "y.tab.c"
    break;

  case 96: /* statement: iteration_statement  */
#line 235 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2196 "y.tab.c"
    break;

  case 97: /* statement: jump_statement  */
#line 236 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 2202 "y.tab.c"
    break;

  case 98: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 239 "kim.y"
                                                                                                {yyval=makeNode(N_STMT_LABEL_CASE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2208 "y.tab.c"
    break;

  case 99: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 240 "kim.y"
                                                                                {yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yyvsp[0],NIL);}
#line 2214 "y.tab.c"
    break;

  case 100: /* @11: %empty  */
#line 243 "kim.y"
                                                     {yyval=current_id; current_level++;}
#line 2220 "y.tab.c"
    break;

  case 101: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 244 "kim.y"
                                                                      {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND,yyvsp[-2],NIL,yyvsp[-1]);
						current_id=yyvsp[-3]; current_level--;}
#line 2227 "y.tab.c"
    break;

  case 102: /* expression_statement: SEMICOLON  */
#line 249 "kim.y"
                                                                        {yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2233 "y.tab.c"
    break;

  case 103: /* expression_statement: expression SEMICOLON  */
#line 250 "kim.y"
                                                                        {yyval=makeNode(N_STMT_EXPRESSION,NIL,yyvsp[-1],NIL);}
#line 2239 "y.tab.c"
    break;

  case 104: /* selection_statement: IF_SYM LP expression RP statement  */
#line 253 "kim.y"
                                                                                                {yyval=makeNode(N_STMT_IF,yyvsp[-2],NIL,yyvsp[0]);}
#line 2245 "y.tab.c"
    break;

  case 105: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 254 "kim.y"
                                                                                                        {yyval=makeNode(N_STMT_IF_ELSE,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2251 "y.tab.c"
    break;

  case 106: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 255 "kim.y"
                                                                                                {yyval=makeNode(N_STMT_SWITCH,yyvsp[-2],NIL,yyvsp[0]);}
#line 2257 "y.tab.c"
    break;

  case 107: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 258 "kim.y"
                                                                                        {yyval=makeNode(N_STMT_WHILE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2263 "y.tab.c"
    break;

  case 108: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 259 "kim.y"
                                                                                                        {yyval=makeNode(N_STMT_DO,yyvsp[-5],NIL,yyvsp[-2]);}
#line 2269 "y.tab.c"
    break;

  case 109: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 260 "kim.y"
                                                                                                {yyval=makeNode(N_STMT_FOR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2275 "y.tab.c"
    break;

  case 110: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 264 "kim.y"
                                                {yyval=makeNode(N_FOR_EXP,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2281 "y.tab.c"
    break;

  case 111: /* expression_opt: %empty  */
#line 268 "kim.y"
                                                                                {yyval=NIL;}
#line 2287 "y.tab.c"
    break;

  case 112: /* expression_opt: expression  */
#line 269 "kim.y"
                                                                {yyval=yyvsp[0];}
#line 2293 "y.tab.c"
    break;

  case 113: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 272 "kim.y"
                                                                                      {yyval=makeNode(N_STMT_RETURN,NIL,yyvsp[-1],NIL);}
#line 2299 "y.tab.c"
    break;

  case 114: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 273 "kim.y"
                                                                         {yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2305 "y.tab.c"
    break;

  case 115: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 274 "kim.y"
                                                                      {yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2311 "y.tab.c"
    break;

  case 116: /* arg_expression_list_opt: %empty  */
#line 279 "kim.y"
                                                                        {yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2317 "y.tab.c"
    break;

  case 117: /* arg_expression_list_opt: arg_expression_list  */
#line 280 "kim.y"
                                                                       {yyval=yyvsp[0];}
#line 2323 "y.tab.c"
    break;

  case 118: /* arg_expression_list: assignment_expression  */
#line 283 "kim.y"
                                                                        {yyval=makeNode(N_ARG_LIST,yyvsp[0],NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2329 "y.tab.c"
    break;

  case 119: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 284 "kim.y"
                                                                                                        {yyval=makeNodeList(N_ARG_LIST,yyvsp[-2],yyvsp[0]);}
#line 2335 "y.tab.c"
    break;

  case 120: /* constant_expression_opt: %empty  */
#line 287 "kim.y"
                                                                                                {yyval=NIL;}
#line 2341 "y.tab.c"
    break;

  case 121: /* constant_expression_opt: constant_expression  */
#line 288 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2347 "y.tab.c"
    break;

  case 122: /* constant_expression: expression  */
#line 292 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 2353 "y.tab.c"
    break;

  case 123: /* expression: comma_expression  */
#line 296 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 2359 "y.tab.c"
    break;

  case 124: /* comma_expression: assignment_expression  */
#line 300 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2365 "y.tab.c"
    break;

  case 125: /* assignment_expression: conditional_expression  */
#line 304 "kim.y"
                                                                                        {yyval=yyvsp[0];}
#line 2371 "y.tab.c"
    break;

  case 126: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 305 "kim.y"
                                                                                                {yyval=makeNode(N_EXP_ASSIGN,yyvsp[-2],NIL,yyvsp[0]);}
#line 2377 "y.tab.c"
    break;

  case 127: /* conditional_expression: logical_or_expression  */
#line 308 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2383 "y.tab.c"
    break;

  case 128: /* logical_or_expression: logical_and_expression  */
#line 311 "kim.y"
                                                                         {yyval=yyvsp[0];}
#line 2389 "y.tab.c"
    break;

  case 129: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 312 "kim.y"
                                                                                                      {yyval=makeNode(N_EXP_OR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2395 "y.tab.c"
    break;

  case 130: /* logical_and_expression: bitwise_or_expression  */
#line 315 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2401 "y.tab.c"
    break;

  case 131: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 316 "kim.y"
                                                                                                      {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL,yyvsp[0]);}
#line 2407 "y.tab.c"
    break;

  case 132: /* bitwise_or_expression: bitwise_xor_expression  */
#line 319 "kim.y"
                                                                         {yyval=yyvsp[0];}
#line 2413 "y.tab.c"
    break;

  case 133: /* bitwise_xor_expression: bitwise_and_expression  */
#line 322 "kim.y"
                                                                         {yyval=yyvsp[0];}
#line 2419 "y.tab.c"
    break;

  case 134: /* bitwise_and_expression: equality_expression  */
#line 325 "kim.y"
                                                                      {yyval=yyvsp[0];}
#line 2425 "y.tab.c"
    break;

  case 135: /* equality_expression: relational_expression  */
#line 328 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 2431 "y.tab.c"
    break;

  case 136: /* equality_expression: equality_expression EQL relational_expression  */
#line 329 "kim.y"
                                                                                                        {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2437 "y.tab.c"
    break;

  case 137: /* equality_expression: equality_expression NEQ relational_expression  */
#line 330 "kim.y"
                                                                                                        {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2443 "y.tab.c"
    break;

  case 138: /* relational_expression: shift_expression  */
#line 334 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 2449 "y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LSS shift_expression  */
#line 335 "kim.y"
                                                                                                {yyval=makeNode(N_EXP_LSS,yyvsp[-2],NIL,yyvsp[0]);}
#line 2455 "y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GTR shift_expression  */
#line 336 "kim.y"
                                                                                                {yyval=makeNode(N_EXP_GTR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2461 "y.tab.c"
    break;

  case 141: /* relational_expression: relational_expression LEQ shift_expression  */
#line 337 "kim.y"
                                                                                                {yyval=makeNode(N_EXP_LEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2467 "y.tab.c"
    break;

  case 142: /* relational_expression: relational_expression GEQ shift_expression  */
#line 338 "kim.y"
                                                                                                {yyval=makeNode(N_EXP_GEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2473 "y.tab.c"
    break;

  case 143: /* shift_expression: additive_expression  */
#line 342 "kim.y"
                                                                      {yyval=yyvsp[0];}
#line 2479 "y.tab.c"
    break;

  case 144: /* additive_expression: multiplicative_expression  */
#line 346 "kim.y"
                                                                                        {yyval=yyvsp[0];}
#line 2485 "y.tab.c"
    break;

  case 145: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 347 "kim.y"
                                                                                                        {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2491 "y.tab.c"
    break;

  case 146: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 348 "kim.y"
                                                                                                        {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2497 "y.tab.c"
    break;

  case 147: /* multiplicative_expression: cast_expression  */
#line 352 "kim.y"
                                                                                                                                        {yyval=yyvsp[0];}
#line 2503 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 353 "kim.y"
                                                                                                        {yyval=makeNode(N_EXP_MUL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2509 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 354 "kim.y"
                                                                                                        {yyval=makeNode(N_EXP_DIV,yyvsp[-2],NIL,yyvsp[0]);}
#line 2515 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 355 "kim.y"
                                                                                                        {yyval=makeNode(N_EXP_MOD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2521 "y.tab.c"
    break;

  case 151: /* cast_expression: unary_expression  */
#line 358 "kim.y"
                                                                                {yyval=yyvsp[0];}
#line 2527 "y.tab.c"
    break;

  case 152: /* cast_expression: LP type_name RP cast_expression  */
#line 359 "kim.y"
                                                                                        {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL,yyvsp[0]);}
#line 2533 "y.tab.c"
    break;

  case 153: /* unary_expression: postfix_expression  */
#line 363 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2539 "y.tab.c"
    break;

  case 154: /* unary_expression: PLUSPLUS unary_expression  */
#line 364 "kim.y"
                                                                                {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2545 "y.tab.c"
    break;

  case 155: /* unary_expression: MINUSMINUS unary_expression  */
#line 365 "kim.y"
                                                                                {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2551 "y.tab.c"
    break;

  case 156: /* unary_expression: AMP cast_expression  */
#line 366 "kim.y"
                                                                                {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2557 "y.tab.c"
    break;

  case 157: /* unary_expression: STAR cast_expression  */
#line 367 "kim.y"
                                                                        {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2563 "y.tab.c"
    break;

  case 158: /* unary_expression: EXCL cast_expression  */
#line 368 "kim.y"
                                                                        {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2569 "y.tab.c"
    break;

  case 159: /* unary_expression: MINUS cast_expression  */
#line 369 "kim.y"
                                                                        {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2575 "y.tab.c"
    break;

  case 160: /* unary_expression: PLUS cast_expression  */
#line 370 "kim.y"
                                                                        {yyval=makeNode(N_EXP_PLUS,NIL,yyvsp[0],NIL);}
#line 2581 "y.tab.c"
    break;

  case 161: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 371 "kim.y"
                                                                                {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2587 "y.tab.c"
    break;

  case 162: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 372 "kim.y"
                                                                                {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2593 "y.tab.c"
    break;

  case 163: /* postfix_expression: primary_expression  */
#line 376 "kim.y"
                                                                        {yyval=yyvsp[0];}
#line 2599 "y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression LB expression RB  */
#line 377 "kim.y"
                                                                                        {yyval=makeNode(N_EXP_ARRAY,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2605 "y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 378 "kim.y"
                                                                                                        {yyval=makeNode(N_EXP_FUNCTION_CALL,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2611 "y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 379 "kim.y"
                                                                                        {yyval=makeNode(N_EXP_STRUCT,yyvsp[-2],NIL,yyvsp[0]);}
#line 2617 "y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 380 "kim.y"
                                                                                        {yyval=makeNode(N_EXP_ARROW,yyvsp[-2],NIL,yyvsp[0]);}
#line 2623 "y.tab.c"
    break;

  case 168: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 381 "kim.y"
                                                                                                {yyval=makeNode(N_EXP_POST_INC,NIL,yyvsp[-1],NIL);}
#line 2629 "y.tab.c"
    break;

  case 169: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 382 "kim.y"
                                                                                                {yyval=makeNode(N_EXP_POST_DEC,NIL,yyvsp[-1],NIL);}
#line 2635 "y.tab.c"
    break;

  case 170: /* primary_expression: IDENTIFIER  */
#line 386 "kim.y"
                                                             {yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yyvsp[0]),NIL);}
#line 2641 "y.tab.c"
    break;

  case 171: /* primary_expression: INTEGER_CONSTANT  */
#line 387 "kim.y"
                                                                        {yyval=makeNode(N_EXP_INT_CONST,NIL,yyvsp[0],NIL);}
#line 2647 "y.tab.c"
    break;

  case 172: /* primary_expression: FLOAT_CONSTANT  */
#line 388 "kim.y"
                                                                        {yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yyvsp[0],NIL);}
#line 2653 "y.tab.c"
    break;

  case 173: /* primary_expression: CHARACTER_CONSTANT  */
#line 389 "kim.y"
                                                                        {yyval=makeNode(N_EXP_CHAR_CONST,NIL,yyvsp[0],NIL);}
#line 2659 "y.tab.c"
    break;

  case 174: /* primary_expression: STRING_LITERAL  */
#line 390 "kim.y"
                                                                        {yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yyvsp[0],NIL);}
#line 2665 "y.tab.c"
    break;

  case 175: /* primary_expression: LP expression RP  */
#line 391 "kim.y"
                                                                   {yyval=yyvsp[-1];}
#line 2671 "y.tab.c"
    break;

  case 176: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 395 "kim.y"
                                                                                                        {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2677 "y.tab.c"
    break;


#line 2681 "y.tab.c"

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

#line 398 "kim.y"


extern char *yytext;
void yyerror(char *s){
		printf("line %d: %s near %s\n",line_no,s,yytext);
}



