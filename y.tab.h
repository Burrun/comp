/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
