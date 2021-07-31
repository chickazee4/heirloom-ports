/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bc.y"

/*	from 4.4BSD /usr/src/usr.bin/bc/bc.y	*/
/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This module is believed to contain source code proprietary to AT&T.
 * Use and redistribution is subject to the Berkeley Software License
 * Agreement and your Software Agreement with AT&T (Western Electric).
 *
 *	from bc.y	8.1 (Berkeley) 6/6/93
 */
/*
 * Copyright(C) Caldera International Inc. 2001-2002. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *   Redistributions of source code and documentation must retain the
 *    above copyright notice, this list of conditions and the following
 *    disclaimer.
 *   Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *   All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *      This product includes software developed or owned by Caldera
 *      International, Inc.
 *   Neither the name of Caldera International, Inc. nor the names of
 *    other contributors may be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * USE OF THE SOFTWARE PROVIDED FOR UNDER THIS LICENSE BY CALDERA
 * INTERNATIONAL, INC. AND CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL CALDERA INTERNATIONAL, INC. BE
 * LIABLE FOR ANY DIRECT, INDIRECT INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)bc.sl	1.24 (gritter) 7/3/05";
#include <unistd.h>
#include <signal.h>
#include <limits.h>
#include <inttypes.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
typedef	intptr_t	YYSTYPE;
			YYSTYPE yyval;
#define	YYSTYPE	YYSTYPE
	static int cpeek(int c, int yes, int no);
	static int getch(void);
	static intptr_t bundle(int a, ...);
	static void routput(intptr_t *p);
	static void output(intptr_t *p);
	static void conout(intptr_t p, intptr_t s);
	static void pp(intptr_t);
	static void tp(intptr_t);
	static void yyinit(int argc, char *argv[]);
	static intptr_t *getout(void);
	static intptr_t *getf(intptr_t);
	static intptr_t *geta(intptr_t);
	static void yyerror(const char *);
	static void cantopen(const char *);
	extern int yylex(void);

#if defined (__GLIBC__) && defined (_IO_getc_unlocked)
#undef	getc
#define	getc(f)		_IO_getc_unlocked(f)
#endif
#line 97 "bc.y"

#define	THIS_BC_STRING_MAX	1000
static FILE *in;
static char cary[LINE_MAX + 1], *cp = { cary };
static char string[THIS_BC_STRING_MAX + 3], *str = {string};
static int crs = '0';
static int rcrs = '0';  /* reset crs */
static int bindx = 0;
static int lev = 0;
static int ln;
static char *ss;
static int bstack[10] = { 0 };
static char *numb[15] = {
  " 0", " 1", " 2", " 3", " 4", " 5",
  " 6", " 7", " 8", " 9", " 10", " 11",
  " 12", " 13", " 14" };
static intptr_t *pre, *post;

#line 173 "y.tab.c"

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
    UMINUS = 258,                  /* UMINUS  */
    LETTER = 259,                  /* LETTER  */
    DIGIT = 260,                   /* DIGIT  */
    SQRT = 261,                    /* SQRT  */
    LENGTH = 262,                  /* LENGTH  */
    _IF = 263,                     /* _IF  */
    FFF = 264,                     /* FFF  */
    EQ = 265,                      /* EQ  */
    _WHILE = 266,                  /* _WHILE  */
    _FOR = 267,                    /* _FOR  */
    NE = 268,                      /* NE  */
    LE = 269,                      /* LE  */
    GE = 270,                      /* GE  */
    INCR = 271,                    /* INCR  */
    DECR = 272,                    /* DECR  */
    _RETURN = 273,                 /* _RETURN  */
    _BREAK = 274,                  /* _BREAK  */
    _DEFINE = 275,                 /* _DEFINE  */
    BASE = 276,                    /* BASE  */
    OBASE = 277,                   /* OBASE  */
    SCALE = 278,                   /* SCALE  */
    EQPL = 279,                    /* EQPL  */
    EQMI = 280,                    /* EQMI  */
    EQMUL = 281,                   /* EQMUL  */
    EQDIV = 282,                   /* EQDIV  */
    EQREM = 283,                   /* EQREM  */
    EQEXP = 284,                   /* EQEXP  */
    _AUTO = 285,                   /* _AUTO  */
    DOT = 286,                     /* DOT  */
    QSTR = 287                     /* QSTR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define UMINUS 258
#define LETTER 259
#define DIGIT 260
#define SQRT 261
#define LENGTH 262
#define _IF 263
#define FFF 264
#define EQ 265
#define _WHILE 266
#define _FOR 267
#define NE 268
#define LE 269
#define GE 270
#define INCR 271
#define DECR 272
#define _RETURN 273
#define _BREAK 274
#define _DEFINE 275
#define BASE 276
#define OBASE 277
#define SCALE 278
#define EQPL 279
#define EQMI 280
#define EQMUL 281
#define EQDIV 282
#define EQREM 283
#define EQEXP 284
#define _AUTO 285
#define DOT 286
#define QSTR 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_3_ = 3,                         /* '='  */
  YYSYMBOL_4_ = 4,                         /* '+'  */
  YYSYMBOL_5_ = 5,                         /* '-'  */
  YYSYMBOL_6_ = 6,                         /* '*'  */
  YYSYMBOL_7_ = 7,                         /* '/'  */
  YYSYMBOL_8_ = 8,                         /* '%'  */
  YYSYMBOL_9_ = 9,                         /* '^'  */
  YYSYMBOL_UMINUS = 10,                    /* UMINUS  */
  YYSYMBOL_LETTER = 11,                    /* LETTER  */
  YYSYMBOL_DIGIT = 12,                     /* DIGIT  */
  YYSYMBOL_SQRT = 13,                      /* SQRT  */
  YYSYMBOL_LENGTH = 14,                    /* LENGTH  */
  YYSYMBOL__IF = 15,                       /* _IF  */
  YYSYMBOL_FFF = 16,                       /* FFF  */
  YYSYMBOL_EQ = 17,                        /* EQ  */
  YYSYMBOL__WHILE = 18,                    /* _WHILE  */
  YYSYMBOL__FOR = 19,                      /* _FOR  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_LE = 21,                        /* LE  */
  YYSYMBOL_GE = 22,                        /* GE  */
  YYSYMBOL_INCR = 23,                      /* INCR  */
  YYSYMBOL_DECR = 24,                      /* DECR  */
  YYSYMBOL__RETURN = 25,                   /* _RETURN  */
  YYSYMBOL__BREAK = 26,                    /* _BREAK  */
  YYSYMBOL__DEFINE = 27,                   /* _DEFINE  */
  YYSYMBOL_BASE = 28,                      /* BASE  */
  YYSYMBOL_OBASE = 29,                     /* OBASE  */
  YYSYMBOL_SCALE = 30,                     /* SCALE  */
  YYSYMBOL_EQPL = 31,                      /* EQPL  */
  YYSYMBOL_EQMI = 32,                      /* EQMI  */
  YYSYMBOL_EQMUL = 33,                     /* EQMUL  */
  YYSYMBOL_EQDIV = 34,                     /* EQDIV  */
  YYSYMBOL_EQREM = 35,                     /* EQREM  */
  YYSYMBOL_EQEXP = 36,                     /* EQEXP  */
  YYSYMBOL__AUTO = 37,                     /* _AUTO  */
  YYSYMBOL_DOT = 38,                       /* DOT  */
  YYSYMBOL_QSTR = 39,                      /* QSTR  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_42_ = 42,                       /* '}'  */
  YYSYMBOL_43_ = 43,                       /* '['  */
  YYSYMBOL_44_ = 44,                       /* ']'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_47_ = 47,                       /* '~'  */
  YYSYMBOL_48_n_ = 48,                     /* '\n'  */
  YYSYMBOL_49_ = 49,                       /* '<'  */
  YYSYMBOL_50_ = 50,                       /* '>'  */
  YYSYMBOL_51_ = 51,                       /* '?'  */
  YYSYMBOL_52_ = 52,                       /* ','  */
  YYSYMBOL_53___ = 53,                     /* '_'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_start = 55,                     /* start  */
  YYSYMBOL_dlist = 56,                     /* dlist  */
  YYSYMBOL_stat = 57,                      /* stat  */
  YYSYMBOL_EQOP = 58,                      /* EQOP  */
  YYSYMBOL_fprefix = 59,                   /* fprefix  */
  YYSYMBOL_BLEV = 60,                      /* BLEV  */
  YYSYMBOL_slist = 61,                     /* slist  */
  YYSYMBOL_tail = 62,                      /* tail  */
  YYSYMBOL_re = 63,                        /* re  */
  YYSYMBOL_e = 64,                         /* e  */
  YYSYMBOL_cargs = 65,                     /* cargs  */
  YYSYMBOL_eora = 66,                      /* eora  */
  YYSYMBOL_cons = 67,                      /* cons  */
  YYSYMBOL_constant = 68,                  /* constant  */
  YYSYMBOL_CRS = 69,                       /* CRS  */
  YYSYMBOL_def = 70,                       /* def  */
  YYSYMBOL_dargs = 71,                     /* dargs  */
  YYSYMBOL_dlets = 72,                     /* dlets  */
  YYSYMBOL_lora = 73                       /* lora  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYLAST   673

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  226

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
      48,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     8,     2,     2,
      45,    40,     6,     4,    52,     5,     2,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
      49,     3,    50,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     9,    53,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,    47,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   116,   116,   117,   119,   128,   129,   132,   135,   136,
     138,   140,   142,   144,   146,   148,   150,   152,   154,   156,
     158,   160,   162,   164,   166,   168,   170,   172,   176,   181,
     186,   190,   192,   194,   196,   198,   200,   204,   209,   212,
     213,   217,   219,   222,   224,   226,   228,   230,   232,   234,
     238,   240,   242,   244,   246,   248,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278,   280,   282,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   310,   312,   314,   316,
     318,   320,   322,   324,   326,   328,   330,   332,   334,   336,
     338,   340,   342,   344,   346,   350,   351,   354,   355,   359,
     363,   365,   367,   372,   381,   390,   391,   393,   397,   399,
     402,   403
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
  "\"end of file\"", "error", "\"invalid token\"", "'='", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'^'", "UMINUS", "LETTER", "DIGIT", "SQRT",
  "LENGTH", "_IF", "FFF", "EQ", "_WHILE", "_FOR", "NE", "LE", "GE", "INCR",
  "DECR", "_RETURN", "_BREAK", "_DEFINE", "BASE", "OBASE", "SCALE", "EQPL",
  "EQMI", "EQMUL", "EQDIV", "EQREM", "EQEXP", "_AUTO", "DOT", "QSTR",
  "')'", "'{'", "'}'", "'['", "']'", "'('", "';'", "'~'", "'\\n'", "'<'",
  "'>'", "'?'", "','", "'_'", "$accept", "start", "dlist", "stat", "EQOP",
  "fprefix", "BLEV", "slist", "tail", "re", "e", "cargs", "eora", "cons",
  "constant", "CRS", "def", "dargs", "dlets", "lora", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,    61,    43,    45,    42,    47,    37,    94,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      41,   123,   125,    91,    93,    40,    59,   126,    10,    60,
      62,    63,    44,    95
};
#endif

#define YYPACT_NINF (-174)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -174,   200,  -174,  -174,   405,   456,  -174,   -35,   -24,  -174,
    -174,  -174,   -22,     6,    82,     8,  -174,     9,   575,   581,
     497,    -7,  -174,   298,   405,    56,  -174,  -174,   -37,  -174,
     658,    26,    59,    63,   462,   597,   615,   503,    64,  -174,
     405,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,   405,
     102,   405,   405,   405,  -174,    34,   405,    37,  -174,  -174,
    -174,    39,  -174,  -174,  -174,   342,    38,   405,  -174,  -174,
     405,   405,  -174,  -174,   405,   405,  -174,  -174,   405,   405,
    -174,  -174,    81,   354,    92,  -174,  -174,  -174,   405,   405,
     405,   405,   405,   405,   405,    -7,  -174,    51,   -34,  -174,
     405,   405,   405,   405,   405,   405,   405,   405,   405,  -174,
     658,   162,   479,  -174,   658,   -33,  -174,   658,   417,   545,
      52,   405,    20,   405,   405,  -174,   551,  -174,   658,   658,
     658,   658,   658,   557,   658,  -174,   298,  -174,   405,    50,
      35,    53,    53,    99,    99,    99,    99,  -174,    65,    76,
      63,   658,   227,   658,   658,   658,   658,   658,   658,   658,
     621,   362,  -174,   425,  -174,  -174,   405,    88,  -174,   276,
     325,  -174,  -174,  -174,   658,   405,   405,   405,   405,   405,
     405,   405,  -174,   -37,  -174,   637,   405,  -174,  -174,   405,
    -174,  -174,    94,   298,  -174,  -174,   563,   658,   658,   658,
     658,   658,   658,   249,  -174,   405,   405,   658,   658,   298,
    -174,   298,    63,    91,   658,   658,  -174,  -174,  -174,    72,
    -174,  -174,  -174,    63,  -174,  -174
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    26,     0,    85,   111,     0,     0,   113,
      25,   113,     0,     0,     0,    17,    14,     0,   103,   104,
     102,    84,     9,     0,     0,     0,    93,   110,     0,   113,
       7,    80,   109,   115,    85,   103,   104,   102,     0,    52,
       0,    58,    61,    31,    32,    33,    34,    35,    36,     0,
       0,     0,     0,     0,    38,     0,     0,    59,    71,    75,
      67,    60,    73,    77,    69,     0,     0,     0,    70,    72,
       0,     0,    74,    76,     0,     0,    66,    68,     0,     0,
      81,    39,     0,     0,    95,    42,    41,     3,     0,     0,
       0,     0,     0,     0,     0,    83,   112,   120,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      10,     0,    85,    79,   107,     0,   105,    12,     0,     0,
       0,     0,     0,     0,     0,    16,     0,   114,    20,    21,
      22,    23,    18,     0,    19,    24,     0,    92,     0,     0,
      49,    50,    51,    53,    54,    55,    56,    82,     0,     0,
       0,    86,     0,    87,    98,    99,   100,   101,    96,    97,
      57,     0,    78,     0,    94,    90,     0,     0,    37,     0,
       0,    15,    91,    40,    30,     0,     0,     0,     0,     0,
       0,     0,   121,     0,   117,    57,     0,    62,    64,     0,
     108,   106,     0,     0,    63,    65,     0,    43,    46,    48,
      47,    44,    45,     0,     5,     0,     0,    11,    13,     0,
      38,     0,     0,     0,    88,    89,    27,    28,    38,     0,
     118,     4,    29,     0,     6,   119
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,  -174,    -1,    -4,  -174,  -173,   -65,   -25,  -108,
      -2,  -174,   -20,   -17,  -174,     1,  -174,  -174,  -174,  -142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,   203,    81,   102,    29,   120,    82,   136,   139,
      30,   115,   116,    31,    32,    54,    33,    98,   219,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    51,    39,    87,    80,     6,   149,   162,   184,    85,
      52,    86,    55,   167,    70,    74,    79,    57,   150,   163,
      66,    53,    83,    56,    89,    90,    91,    92,    93,    94,
      88,   104,   106,   108,    58,    59,    60,   217,   110,    89,
      90,    91,    92,    93,    94,   222,    27,   111,   114,   117,
     118,   119,   176,    65,   122,   177,   178,   179,   192,    91,
      92,    93,    94,   126,    95,   128,   168,    84,   129,   130,
     220,    96,   131,   132,    97,   109,   133,   134,   147,   121,
     123,   225,   124,   127,   180,   181,   140,   141,   142,   143,
     144,   145,   146,    61,   148,   138,   175,   166,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     4,    94,   182,
      62,    63,    64,   112,     6,     7,     8,   183,    85,   140,
      86,   169,   170,   135,   223,    13,    14,    85,   193,    86,
      35,    36,    37,   221,   209,   173,   174,    85,   213,    86,
      21,     0,   113,   191,     0,     0,     0,    24,     0,    38,
       0,     0,     0,    26,     0,    27,   189,     0,   204,   152,
       0,   114,     0,     0,   140,     0,    89,    90,    91,    92,
      93,    94,     0,   196,   197,   198,   199,   200,   201,   202,
       0,   206,     0,     0,   207,     0,     0,   208,     0,     0,
       0,     0,   210,     0,   224,     0,     0,     0,     0,     0,
       2,     3,     0,   214,   215,     4,   160,     0,   216,     0,
     218,     5,     6,     7,     8,     9,    10,     0,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    89,    90,    91,    92,    93,    94,     0,    21,    22,
       0,    23,     0,     0,     0,    24,    -8,    25,    -8,     0,
       3,    26,     0,    27,     4,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,     0,    11,    12,     0,
       0,   185,    13,    14,    15,    16,     0,    18,    19,    20,
      89,    90,    91,    92,    93,    94,   212,    21,    22,     0,
      23,    -8,     0,     0,    24,    -8,    25,    -8,     0,     3,
      26,     0,    27,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,     0,    11,    12,     0,     0,
     194,    13,    14,    15,    16,     0,    18,    19,    20,    89,
      90,    91,    92,    93,    94,     0,    21,    22,     0,    23,
      -8,     0,     0,    24,    -8,    25,    -8,     4,     0,    26,
       0,    27,     0,    34,     6,     7,     8,     0,    89,    90,
      91,    92,    93,    94,     0,    13,    14,     4,     0,   195,
      35,    36,    37,    34,     6,     7,     8,     0,     0,     0,
      21,     0,   125,     0,     0,    13,    14,    24,     0,    38,
      35,    36,    37,    26,   137,    27,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,   190,    24,     0,    38,
       4,     0,     0,    26,     0,    27,    34,     6,     7,     8,
       0,    89,    90,    91,    92,    93,    94,     0,    13,    14,
       4,     0,     0,    35,    36,    37,   112,     6,     7,     8,
       0,     0,     0,    21,     0,     0,     0,     0,    13,    14,
      24,     0,    38,    35,    36,    37,    26,   164,    27,    40,
       0,     0,     0,    21,     0,   100,     0,     0,     0,     0,
      24,     0,    38,     0,     0,     0,    26,     0,    27,    41,
      42,     0,   100,     0,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    43,    44,    45,    46,    47,    48,    49,
      75,    50,    41,    42,     0,   101,   107,    50,     0,     0,
      43,    44,    45,    46,    47,    48,     0,     0,     0,     0,
      76,    77,   161,     0,    50,     0,    76,    77,    43,    44,
      45,    46,    47,    48,    43,    44,    45,    46,    47,    48,
       0,     0,    78,     0,     0,     0,     0,     0,    78,    89,
      90,    91,    92,    93,    94,    89,    90,    91,    92,    93,
      94,    89,    90,    91,    92,    93,    94,    89,    90,    91,
      92,    93,    94,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,     0,    71,   165,     0,     0,     0,     0,
       0,   171,     0,     0,     0,     0,     0,   172,    68,    69,
     103,     0,     0,   211,    72,    73,    43,    44,    45,    46,
      47,    48,    43,    44,    45,    46,    47,    48,   105,     0,
      68,    69,     0,     0,   186,     0,     0,     0,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,    72,    73,
     205,     0,     0,     0,   187,   188,    43,    44,    45,    46,
      47,    48,    43,    44,    45,    46,    47,    48,     0,     0,
     187,   188,    89,    90,    91,    92,    93,    94,    43,    44,
      45,    46,    47,    48
};

static const yytype_int16 yycheck[] =
{
       1,     5,     4,    28,    21,    12,    40,    40,   150,    46,
      45,    48,    11,   121,    18,    19,    20,    11,    52,    52,
      11,    45,    24,    45,     4,     5,     6,     7,     8,     9,
      29,    35,    36,    37,    28,    29,    30,   210,    40,     4,
       5,     6,     7,     8,     9,   218,    53,    49,    50,    51,
      52,    53,    17,    45,    56,    20,    21,    22,   166,     6,
       7,     8,     9,    65,    38,    67,    46,    11,    70,    71,
     212,    12,    74,    75,    11,    11,    78,    79,    95,    45,
      43,   223,    43,    45,    49,    50,    88,    89,    90,    91,
      92,    93,    94,    11,    43,     3,    46,    45,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     5,     9,    44,
      28,    29,    30,    11,    12,    13,    14,    41,    46,   121,
      48,   123,   124,    42,    52,    23,    24,    46,    40,    48,
      28,    29,    30,    42,    40,   136,   138,    46,   203,    48,
      38,    -1,    40,   163,    -1,    -1,    -1,    45,    -1,    47,
      -1,    -1,    -1,    51,    -1,    53,   160,    -1,   183,   161,
      -1,   163,    -1,    -1,   166,    -1,     4,     5,     6,     7,
       8,     9,    -1,   175,   176,   177,   178,   179,   180,   181,
      -1,   185,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,
      -1,    -1,   193,    -1,   219,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,   205,   206,     5,    44,    -1,   209,    -1,
     211,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,     4,     5,     6,     7,     8,     9,    -1,    38,    39,
      -1,    41,    -1,    -1,    -1,    45,    46,    47,    48,    -1,
       1,    51,    -1,    53,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    44,    23,    24,    25,    26,    -1,    28,    29,    30,
       4,     5,     6,     7,     8,     9,    37,    38,    39,    -1,
      41,    42,    -1,    -1,    45,    46,    47,    48,    -1,     1,
      51,    -1,    53,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      44,    23,    24,    25,    26,    -1,    28,    29,    30,     4,
       5,     6,     7,     8,     9,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    45,    46,    47,    48,     5,    -1,    51,
      -1,    53,    -1,    11,    12,    13,    14,    -1,     4,     5,
       6,     7,     8,     9,    -1,    23,    24,     5,    -1,    44,
      28,    29,    30,    11,    12,    13,    14,    -1,    -1,    -1,
      38,    -1,    40,    -1,    -1,    23,    24,    45,    -1,    47,
      28,    29,    30,    51,    40,    53,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    47,
       5,    -1,    -1,    51,    -1,    53,    11,    12,    13,    14,
      -1,     4,     5,     6,     7,     8,     9,    -1,    23,    24,
       5,    -1,    -1,    28,    29,    30,    11,    12,    13,    14,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    23,    24,
      45,    -1,    47,    28,    29,    30,    51,    40,    53,     3,
      -1,    -1,    -1,    38,    -1,     3,    -1,    -1,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    51,    -1,    53,    23,
      24,    -1,     3,    -1,    -1,    23,    24,    31,    32,    33,
      34,    35,    36,    31,    32,    33,    34,    35,    36,    43,
       3,    45,    23,    24,    -1,    43,     3,    45,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      23,    24,    43,    -1,    45,    -1,    23,    24,    31,    32,
      33,    34,    35,    36,    31,    32,    33,    34,    35,    36,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    45,     4,
       5,     6,     7,     8,     9,     4,     5,     6,     7,     8,
       9,     4,     5,     6,     7,     8,     9,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,     3,    40,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    40,    23,    24,
       3,    -1,    -1,    40,    23,    24,    31,    32,    33,    34,
      35,    36,    31,    32,    33,    34,    35,    36,     3,    -1,
      23,    24,    -1,    -1,     3,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    23,    24,
       3,    -1,    -1,    -1,    23,    24,    31,    32,    33,    34,
      35,    36,    31,    32,    33,    34,    35,    36,    -1,    -1,
      23,    24,     4,     5,     6,     7,     8,     9,    31,    32,
      33,    34,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,     0,     1,     5,    11,    12,    13,    14,    15,
      16,    18,    19,    23,    24,    25,    26,    27,    28,    29,
      30,    38,    39,    41,    45,    47,    51,    53,    57,    59,
      64,    67,    68,    70,    11,    28,    29,    30,    47,    64,
       3,    23,    24,    31,    32,    33,    34,    35,    36,    43,
      45,    58,    45,    45,    69,    69,    45,    11,    28,    29,
      30,    11,    28,    29,    30,    45,    11,     3,    23,    24,
      58,     3,    23,    24,    58,     3,    23,    24,    45,    58,
      67,    57,    61,    64,    11,    46,    48,    62,    69,     4,
       5,     6,     7,     8,     9,    38,    12,    11,    71,    73,
       3,    43,    58,     3,    58,     3,    58,     3,    58,    11,
      64,    64,    11,    40,    64,    65,    66,    64,    64,    64,
      60,    45,    64,    43,    43,    40,    64,    45,    64,    64,
      64,    64,    64,    64,    64,    42,    62,    40,     3,    63,
      64,    64,    64,    64,    64,    64,    64,    67,    43,    40,
      52,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      44,    43,    40,    52,    40,    40,    45,    63,    46,    64,
      64,    40,    40,    57,    64,    46,    17,    20,    21,    22,
      49,    50,    44,    41,    73,    44,     3,    23,    24,    58,
      44,    66,    63,    40,    44,    44,    64,    64,    64,    64,
      64,    64,    64,    56,    62,     3,    58,    64,    64,    40,
      57,    40,    37,    61,    64,    64,    57,    60,    57,    72,
      73,    42,    60,    52,    62,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    58,    58,    59,    60,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    67,
      68,    68,    68,    69,    70,    71,    71,    71,    72,    72,
      73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     8,     1,     4,     1,     0,     1,
       3,     6,     3,     6,     1,     4,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     7,     7,     8,
       4,     1,     1,     1,     1,     1,     1,     4,     0,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     2,     3,     3,     3,     3,     4,     2,     2,
       2,     2,     5,     5,     5,     5,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     3,
       1,     2,     3,     2,     1,     1,     3,     3,     6,     6,
       4,     4,     3,     1,     4,     2,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     2,     0,     3,     0,     1,     3,     1,     3,
       1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 3: /* start: start stat tail  */
#line 118 "bc.y"
                { output( (intptr_t *)yyvsp[-1] );}
#line 1578 "y.tab.c"
    break;

  case 4: /* start: start def dargs ')' '{' dlist slist '}'  */
#line 120 "bc.y"
                {	bundle( 6,pre, yyvsp[-1], post ,"0",numb[lev],"Q");
			conout( yyval, yyvsp[-6] );
			rcrs = crs;
			output( (intptr_t *)"" );
			lev = bindx = 0;
			}
#line 1589 "y.tab.c"
    break;

  case 7: /* stat: e  */
#line 133 "bc.y"
                { bundle(2, yyvsp[0], "ps." ); }
#line 1595 "y.tab.c"
    break;

  case 8: /* stat: %empty  */
#line 135 "bc.y"
                { bundle(1, "" ); }
#line 1601 "y.tab.c"
    break;

  case 9: /* stat: QSTR  */
#line 137 "bc.y"
                { bundle(3,"[",yyvsp[0],"]P");}
#line 1607 "y.tab.c"
    break;

  case 10: /* stat: LETTER '=' e  */
#line 139 "bc.y"
                { bundle(3, yyvsp[0], "s", yyvsp[-2] ); }
#line 1613 "y.tab.c"
    break;

  case 11: /* stat: LETTER '[' e ']' '=' e  */
#line 141 "bc.y"
                { bundle(4, yyvsp[0], yyvsp[-3], ":", geta(yyvsp[-5])); }
#line 1619 "y.tab.c"
    break;

  case 12: /* stat: LETTER EQOP e  */
#line 143 "bc.y"
                { bundle(6, "l", yyvsp[-2], yyvsp[0], yyvsp[-1], "s", yyvsp[-2] ); }
#line 1625 "y.tab.c"
    break;

  case 13: /* stat: LETTER '[' e ']' EQOP e  */
#line 145 "bc.y"
                { bundle(8,yyvsp[-3], ";", geta(yyvsp[-5]), yyvsp[0], yyvsp[-1], yyvsp[-3], ":", geta(yyvsp[-5]));}
#line 1631 "y.tab.c"
    break;

  case 14: /* stat: _BREAK  */
#line 147 "bc.y"
                { bundle(2, numb[lev-bstack[bindx-1]], "Q" ); }
#line 1637 "y.tab.c"
    break;

  case 15: /* stat: _RETURN '(' e ')'  */
#line 149 "bc.y"
                { bundle(4, yyvsp[-1], post, numb[lev], "Q" ); }
#line 1643 "y.tab.c"
    break;

  case 16: /* stat: _RETURN '(' ')'  */
#line 151 "bc.y"
                { bundle(4, "0", post, numb[lev], "Q" ); }
#line 1649 "y.tab.c"
    break;

  case 17: /* stat: _RETURN  */
#line 153 "bc.y"
                { bundle(4,"0",post,numb[lev],"Q"); }
#line 1655 "y.tab.c"
    break;

  case 18: /* stat: SCALE '=' e  */
#line 155 "bc.y"
                { bundle(2, yyvsp[0], "k"); }
#line 1661 "y.tab.c"
    break;

  case 19: /* stat: SCALE EQOP e  */
#line 157 "bc.y"
                { bundle(4,"K",yyvsp[0],yyvsp[-1],"k"); }
#line 1667 "y.tab.c"
    break;

  case 20: /* stat: BASE '=' e  */
#line 159 "bc.y"
                { bundle(2,yyvsp[0], "i"); }
#line 1673 "y.tab.c"
    break;

  case 21: /* stat: BASE EQOP e  */
#line 161 "bc.y"
                { bundle(4,"I",yyvsp[0],yyvsp[-1],"i"); }
#line 1679 "y.tab.c"
    break;

  case 22: /* stat: OBASE '=' e  */
#line 163 "bc.y"
                { bundle(2,yyvsp[0],"o"); }
#line 1685 "y.tab.c"
    break;

  case 23: /* stat: OBASE EQOP e  */
#line 165 "bc.y"
                { bundle(4,"O",yyvsp[0],yyvsp[-1],"o"); }
#line 1691 "y.tab.c"
    break;

  case 24: /* stat: '{' slist '}'  */
#line 167 "bc.y"
                { yyval = yyvsp[-1]; }
#line 1697 "y.tab.c"
    break;

  case 25: /* stat: FFF  */
#line 169 "bc.y"
                { bundle(1,"fY"); }
#line 1703 "y.tab.c"
    break;

  case 26: /* stat: error  */
#line 171 "bc.y"
                { bundle(1,"c"); }
#line 1709 "y.tab.c"
    break;

  case 27: /* stat: _IF CRS BLEV '(' re ')' stat  */
#line 173 "bc.y"
                {	conout( yyvsp[0], yyvsp[-5] );
			bundle(3, yyvsp[-2], yyvsp[-5], " " );
			}
#line 1717 "y.tab.c"
    break;

  case 28: /* stat: _WHILE CRS '(' re ')' stat BLEV  */
#line 177 "bc.y"
                {	bundle(3, yyvsp[-1], yyvsp[-3], yyvsp[-5] );
			conout( yyval, yyvsp[-5] );
			bundle(3, yyvsp[-3], yyvsp[-5], " " );
			}
#line 1726 "y.tab.c"
    break;

  case 29: /* stat: fprefix CRS re ';' e ')' stat BLEV  */
#line 182 "bc.y"
                {	bundle(5, yyvsp[-1], yyvsp[-3], "s.", yyvsp[-5], yyvsp[-6] );
			conout( yyval, yyvsp[-6] );
			bundle(5, yyvsp[-7], "s.", yyvsp[-5], yyvsp[-6], " " );
			}
#line 1735 "y.tab.c"
    break;

  case 30: /* stat: '~' LETTER '=' e  */
#line 187 "bc.y"
                {	bundle(3,yyvsp[0],"S",yyvsp[-2]); }
#line 1741 "y.tab.c"
    break;

  case 31: /* EQOP: EQPL  */
#line 191 "bc.y"
                { yyval = (intptr_t)"+"; }
#line 1747 "y.tab.c"
    break;

  case 32: /* EQOP: EQMI  */
#line 193 "bc.y"
                { yyval = (intptr_t)"-"; }
#line 1753 "y.tab.c"
    break;

  case 33: /* EQOP: EQMUL  */
#line 195 "bc.y"
                { yyval = (intptr_t)"*"; }
#line 1759 "y.tab.c"
    break;

  case 34: /* EQOP: EQDIV  */
#line 197 "bc.y"
                { yyval = (intptr_t)"/"; }
#line 1765 "y.tab.c"
    break;

  case 35: /* EQOP: EQREM  */
#line 199 "bc.y"
                { yyval = (intptr_t)"%%"; }
#line 1771 "y.tab.c"
    break;

  case 36: /* EQOP: EQEXP  */
#line 201 "bc.y"
                { yyval = (intptr_t)"^"; }
#line 1777 "y.tab.c"
    break;

  case 37: /* fprefix: _FOR '(' e ';'  */
#line 205 "bc.y"
                { yyval = yyvsp[-1]; }
#line 1783 "y.tab.c"
    break;

  case 38: /* BLEV: %empty  */
#line 209 "bc.y"
                { --bindx; }
#line 1789 "y.tab.c"
    break;

  case 40: /* slist: slist tail stat  */
#line 214 "bc.y"
                { bundle(2, yyvsp[-2], yyvsp[0] ); }
#line 1795 "y.tab.c"
    break;

  case 41: /* tail: '\n'  */
#line 218 "bc.y"
                {ln++;}
#line 1801 "y.tab.c"
    break;

  case 43: /* re: e EQ e  */
#line 223 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "=" ); }
#line 1807 "y.tab.c"
    break;

  case 44: /* re: e '<' e  */
#line 225 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], ">" ); }
#line 1813 "y.tab.c"
    break;

  case 45: /* re: e '>' e  */
#line 227 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "<" ); }
#line 1819 "y.tab.c"
    break;

  case 46: /* re: e NE e  */
#line 229 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "!=" ); }
#line 1825 "y.tab.c"
    break;

  case 47: /* re: e GE e  */
#line 231 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "!>" ); }
#line 1831 "y.tab.c"
    break;

  case 48: /* re: e LE e  */
#line 233 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "!<" ); }
#line 1837 "y.tab.c"
    break;

  case 49: /* re: e  */
#line 235 "bc.y"
                { bundle(2, yyvsp[0], " 0!=" ); }
#line 1843 "y.tab.c"
    break;

  case 50: /* e: e '+' e  */
#line 239 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "+" ); }
#line 1849 "y.tab.c"
    break;

  case 51: /* e: e '-' e  */
#line 241 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "-" ); }
#line 1855 "y.tab.c"
    break;

  case 52: /* e: '-' e  */
#line 243 "bc.y"
                { bundle(3, " 0", yyvsp[0], "-" ); }
#line 1861 "y.tab.c"
    break;

  case 53: /* e: e '*' e  */
#line 245 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "*" ); }
#line 1867 "y.tab.c"
    break;

  case 54: /* e: e '/' e  */
#line 247 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "/" ); }
#line 1873 "y.tab.c"
    break;

  case 55: /* e: e '%' e  */
#line 249 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "%%" ); }
#line 1879 "y.tab.c"
    break;

  case 56: /* e: e '^' e  */
#line 251 "bc.y"
                { bundle(3, yyvsp[-2], yyvsp[0], "^" ); }
#line 1885 "y.tab.c"
    break;

  case 57: /* e: LETTER '[' e ']'  */
#line 253 "bc.y"
                { bundle(3,yyvsp[-1], ";", geta(yyvsp[-3])); }
#line 1891 "y.tab.c"
    break;

  case 58: /* e: LETTER INCR  */
#line 255 "bc.y"
                { bundle(4, "l", yyvsp[-1], "d1+s", yyvsp[-1] ); }
#line 1897 "y.tab.c"
    break;

  case 59: /* e: INCR LETTER  */
#line 257 "bc.y"
                { bundle(4, "l", yyvsp[0], "1+ds", yyvsp[0] ); }
#line 1903 "y.tab.c"
    break;

  case 60: /* e: DECR LETTER  */
#line 259 "bc.y"
                { bundle(4, "l", yyvsp[0], "1-ds", yyvsp[0] ); }
#line 1909 "y.tab.c"
    break;

  case 61: /* e: LETTER DECR  */
#line 261 "bc.y"
                { bundle(4, "l", yyvsp[-1], "d1-s", yyvsp[-1] ); }
#line 1915 "y.tab.c"
    break;

  case 62: /* e: LETTER '[' e ']' INCR  */
#line 263 "bc.y"
                { bundle(7,yyvsp[-2],";",geta(yyvsp[-4]),"d1+",yyvsp[-2],":",geta(yyvsp[-4])); }
#line 1921 "y.tab.c"
    break;

  case 63: /* e: INCR LETTER '[' e ']'  */
#line 265 "bc.y"
                { bundle(7,yyvsp[-1],";",geta(yyvsp[-3]),"1+d",yyvsp[-1],":",geta(yyvsp[-3])); }
#line 1927 "y.tab.c"
    break;

  case 64: /* e: LETTER '[' e ']' DECR  */
#line 267 "bc.y"
                { bundle(7,yyvsp[-2],";",geta(yyvsp[-4]),"d1-",yyvsp[-2],":",geta(yyvsp[-4])); }
#line 1933 "y.tab.c"
    break;

  case 65: /* e: DECR LETTER '[' e ']'  */
#line 269 "bc.y"
                { bundle(7,yyvsp[-1],";",geta(yyvsp[-3]),"1-d",yyvsp[-1],":",geta(yyvsp[-3])); }
#line 1939 "y.tab.c"
    break;

  case 66: /* e: SCALE INCR  */
#line 271 "bc.y"
                { bundle(1,"Kd1+k"); }
#line 1945 "y.tab.c"
    break;

  case 67: /* e: INCR SCALE  */
#line 273 "bc.y"
                { bundle(1,"K1+dk"); }
#line 1951 "y.tab.c"
    break;

  case 68: /* e: SCALE DECR  */
#line 275 "bc.y"
                { bundle(1,"Kd1-k"); }
#line 1957 "y.tab.c"
    break;

  case 69: /* e: DECR SCALE  */
#line 277 "bc.y"
                { bundle(1,"K1-dk"); }
#line 1963 "y.tab.c"
    break;

  case 70: /* e: BASE INCR  */
#line 279 "bc.y"
                { bundle(1,"Id1+i"); }
#line 1969 "y.tab.c"
    break;

  case 71: /* e: INCR BASE  */
#line 281 "bc.y"
                { bundle(1,"I1+di"); }
#line 1975 "y.tab.c"
    break;

  case 72: /* e: BASE DECR  */
#line 283 "bc.y"
                { bundle(1,"Id1-i"); }
#line 1981 "y.tab.c"
    break;

  case 73: /* e: DECR BASE  */
#line 285 "bc.y"
                { bundle(1,"I1-di"); }
#line 1987 "y.tab.c"
    break;

  case 74: /* e: OBASE INCR  */
#line 287 "bc.y"
                { bundle(1,"Od1+o"); }
#line 1993 "y.tab.c"
    break;

  case 75: /* e: INCR OBASE  */
#line 289 "bc.y"
                { bundle(1,"O1+do"); }
#line 1999 "y.tab.c"
    break;

  case 76: /* e: OBASE DECR  */
#line 291 "bc.y"
                { bundle(1,"Od1-o"); }
#line 2005 "y.tab.c"
    break;

  case 77: /* e: DECR OBASE  */
#line 293 "bc.y"
                { bundle(1,"O1-do"); }
#line 2011 "y.tab.c"
    break;

  case 78: /* e: LETTER '(' cargs ')'  */
#line 295 "bc.y"
                { bundle(4, yyvsp[-1], "l", getf(yyvsp[-3]), "x" ); }
#line 2017 "y.tab.c"
    break;

  case 79: /* e: LETTER '(' ')'  */
#line 297 "bc.y"
                { bundle(3, "l", getf(yyvsp[-2]), "x" ); }
#line 2023 "y.tab.c"
    break;

  case 80: /* e: cons  */
#line 299 "bc.y"
                { bundle(2, " ", yyvsp[0] ); }
#line 2029 "y.tab.c"
    break;

  case 81: /* e: DOT cons  */
#line 301 "bc.y"
                { bundle(2, " .", yyvsp[0] ); }
#line 2035 "y.tab.c"
    break;

  case 82: /* e: cons DOT cons  */
#line 303 "bc.y"
                { bundle(4, " ", yyvsp[-2], ".", yyvsp[0] ); }
#line 2041 "y.tab.c"
    break;

  case 83: /* e: cons DOT  */
#line 305 "bc.y"
                { bundle(3, " ", yyvsp[-1], "." ); }
#line 2047 "y.tab.c"
    break;

  case 84: /* e: DOT  */
#line 307 "bc.y"
                { yyval = (intptr_t)"l."; }
#line 2053 "y.tab.c"
    break;

  case 85: /* e: LETTER  */
#line 309 "bc.y"
                { bundle(2, "l", yyvsp[0] ); }
#line 2059 "y.tab.c"
    break;

  case 86: /* e: LETTER '=' e  */
#line 311 "bc.y"
                { bundle(3, yyvsp[0], "ds", yyvsp[-2] ); }
#line 2065 "y.tab.c"
    break;

  case 87: /* e: LETTER EQOP e  */
#line 313 "bc.y"
                { bundle(6, "l", yyvsp[-2], yyvsp[0], yyvsp[-1], "ds", yyvsp[-2] ); }
#line 2071 "y.tab.c"
    break;

  case 88: /* e: LETTER '[' e ']' '=' e  */
#line 315 "bc.y"
                { bundle(5,yyvsp[0],"d",yyvsp[-3],":",geta(yyvsp[-5])); }
#line 2077 "y.tab.c"
    break;

  case 89: /* e: LETTER '[' e ']' EQOP e  */
#line 317 "bc.y"
                { bundle(9,yyvsp[-3],";",geta(yyvsp[-5]),yyvsp[0],yyvsp[-1],"d",yyvsp[-3],":",geta(yyvsp[-5])); }
#line 2083 "y.tab.c"
    break;

  case 90: /* e: LENGTH '(' e ')'  */
#line 319 "bc.y"
                { bundle(2,yyvsp[-1],"Z"); }
#line 2089 "y.tab.c"
    break;

  case 91: /* e: SCALE '(' e ')'  */
#line 321 "bc.y"
                { bundle(2,yyvsp[-1],"X"); }
#line 2095 "y.tab.c"
    break;

  case 92: /* e: '(' e ')'  */
#line 323 "bc.y"
                { yyval = yyvsp[-1]; }
#line 2101 "y.tab.c"
    break;

  case 93: /* e: '?'  */
#line 325 "bc.y"
                { bundle(1, "?" ); }
#line 2107 "y.tab.c"
    break;

  case 94: /* e: SQRT '(' e ')'  */
#line 327 "bc.y"
                { bundle(2, yyvsp[-1], "v" ); }
#line 2113 "y.tab.c"
    break;

  case 95: /* e: '~' LETTER  */
#line 329 "bc.y"
                { bundle(2,"L",yyvsp[0]); }
#line 2119 "y.tab.c"
    break;

  case 96: /* e: SCALE '=' e  */
#line 331 "bc.y"
                { bundle(2,yyvsp[0],"dk"); }
#line 2125 "y.tab.c"
    break;

  case 97: /* e: SCALE EQOP e  */
#line 333 "bc.y"
                { bundle(4,"K",yyvsp[0],yyvsp[-1],"dk"); }
#line 2131 "y.tab.c"
    break;

  case 98: /* e: BASE '=' e  */
#line 335 "bc.y"
                { bundle(2,yyvsp[0],"di"); }
#line 2137 "y.tab.c"
    break;

  case 99: /* e: BASE EQOP e  */
#line 337 "bc.y"
                { bundle(4,"I",yyvsp[0],yyvsp[-1],"di"); }
#line 2143 "y.tab.c"
    break;

  case 100: /* e: OBASE '=' e  */
#line 339 "bc.y"
                { bundle(2,yyvsp[0],"do"); }
#line 2149 "y.tab.c"
    break;

  case 101: /* e: OBASE EQOP e  */
#line 341 "bc.y"
                { bundle(4,"O",yyvsp[0],yyvsp[-1],"do"); }
#line 2155 "y.tab.c"
    break;

  case 102: /* e: SCALE  */
#line 343 "bc.y"
                { bundle(1,"K"); }
#line 2161 "y.tab.c"
    break;

  case 103: /* e: BASE  */
#line 345 "bc.y"
                { bundle(1,"I"); }
#line 2167 "y.tab.c"
    break;

  case 104: /* e: OBASE  */
#line 347 "bc.y"
                { bundle(1,"O"); }
#line 2173 "y.tab.c"
    break;

  case 106: /* cargs: cargs ',' eora  */
#line 352 "bc.y"
                { bundle(2, yyvsp[-2], yyvsp[0] ); }
#line 2179 "y.tab.c"
    break;

  case 108: /* eora: LETTER '[' ']'  */
#line 356 "bc.y"
                {bundle(2,"l",geta(yyvsp[-2])); }
#line 2185 "y.tab.c"
    break;

  case 109: /* cons: constant  */
#line 360 "bc.y"
                { *cp++ = '\0'; }
#line 2191 "y.tab.c"
    break;

  case 110: /* constant: '_'  */
#line 364 "bc.y"
                { yyval = (intptr_t)cp; *cp++ = '_'; }
#line 2197 "y.tab.c"
    break;

  case 111: /* constant: DIGIT  */
#line 366 "bc.y"
                { yyval = (intptr_t)cp; *cp++ = yyvsp[0]; }
#line 2203 "y.tab.c"
    break;

  case 112: /* constant: constant DIGIT  */
#line 368 "bc.y"
                { *cp++ = yyvsp[0]; }
#line 2209 "y.tab.c"
    break;

  case 113: /* CRS: %empty  */
#line 372 "bc.y"
                { yyval = (intptr_t)cp; *cp++ = crs++; *cp++ = '\0';
			if(crs == '[')crs+=3;
			if(crs == 'a')crs='{';
			if(crs >= 0241){yyerror("program too big");
				getout();
			}
			bstack[bindx++] = lev++; }
#line 2221 "y.tab.c"
    break;

  case 114: /* def: _DEFINE LETTER '('  */
#line 382 "bc.y"
                {	yyval = (intptr_t)getf(yyvsp[-1]);
			pre = (intptr_t *)"";
			post = (intptr_t *)"";
			lev = 1;
			bstack[bindx=0] = 0;
			}
#line 2232 "y.tab.c"
    break;

  case 116: /* dargs: lora  */
#line 392 "bc.y"
                { pp( yyvsp[0] ); }
#line 2238 "y.tab.c"
    break;

  case 117: /* dargs: dargs ',' lora  */
#line 394 "bc.y"
                { pp( yyvsp[0] ); }
#line 2244 "y.tab.c"
    break;

  case 118: /* dlets: lora  */
#line 398 "bc.y"
                { tp(yyvsp[0]); }
#line 2250 "y.tab.c"
    break;

  case 119: /* dlets: dlets ',' lora  */
#line 400 "bc.y"
                { tp(yyvsp[0]); }
#line 2256 "y.tab.c"
    break;

  case 121: /* lora: LETTER '[' ']'  */
#line 404 "bc.y"
                { yyval = (intptr_t)geta(yyvsp[-2]); }
#line 2262 "y.tab.c"
    break;


#line 2266 "y.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 407 "bc.y"

# define error 256

static int peekc = -1;
static int sargc;
static int ifile;
static char **sargv;

static char funtab[52] = {
	01,0,02,0,03,0,04,0,05,0,06,0,07,0,010,0,011,0,012,0,013,0,014,0,015,0,016,0,017,0,
	020,0,021,0,022,0,023,0,024,0,025,0,026,0,027,0,030,0,031,0,032,0 };
static char atab[52] = {
	0241,0,0242,0,0243,0,0244,0,0245,0,0246,0,0247,0,0250,0,0251,0,0252,0,0253,0,
	0254,0,0255,0,0256,0,0257,0,0260,0,0261,0,0262,0,0263,0,0264,0,0265,0,0266,0,
	0267,0,0270,0,0271,0,0272,0};
static char *letr[26] = {
  "a","b","c","d","e","f","g","h","i","j",
  "k","l","m","n","o","p","q","r","s","t",
  "u","v","w","x","y","z" } ;
/*static char *dot = { "." };*/

int
yylex(void){
	int c, ch;
restart:
	c = getch();
	peekc = -1;
	while( c == ' ' || c == '\t' ) c = getch();
	if(c == '\\'){
		getch();
		goto restart;
	}
	if( c<= 'z' && c >= 'a' ) {
		/* look ahead to look for reserved words */
		peekc = getch();
		if( peekc >= 'a' && peekc <= 'z' ){ /* must be reserved word */
			if( c=='i' && peekc=='f' ){ c=_IF; goto skip; }
			if( c=='w' && peekc=='h' ){ c=_WHILE; goto skip; }
			if( c=='f' && peekc=='o' ){ c=_FOR; goto skip; }
			if( c=='s' && peekc=='q' ){ c=SQRT; goto skip; }
			if( c=='r' && peekc=='e' ){ c=_RETURN; goto skip; }
			if( c=='b' && peekc=='r' ){ c=_BREAK; goto skip; }
			if( c=='d' && peekc=='e' ){ c=_DEFINE; goto skip; }
			if( c=='s' && peekc=='c' ){ c= SCALE; goto skip; }
			if( c=='b' && peekc=='a' ){ c=BASE; goto skip; }
			if( c=='i' && peekc == 'b'){ c=BASE; goto skip; }
			if( c=='o' && peekc=='b' ){ c=OBASE; goto skip; }
			if( c=='d' && peekc=='i' ){ c=FFF; goto skip; }
			if( c=='a' && peekc=='u' ){ c=_AUTO; goto skip; }
			if( c == 'l' && peekc=='e'){ c=LENGTH; goto skip; }
			if( c == 'q' && peekc == 'u'){getout();}
			/* could not be found */
			return( error );
		skip:	/* skip over rest of word */
			peekc = -1;
			while( (ch = getch()) >= 'a' && ch <= 'z' );
			peekc = ch;
			return( c );
		}

		/* usual case; just one single letter */

		yylval = (intptr_t)letr[c-'a'];
		return( LETTER );
	}
	if( c>= '0' && c <= '9' || c>= 'A' && c<= 'F' ){
		yylval = c;
		return( DIGIT );
	}
	switch( c ){
	case '.':	return( DOT );
	case '=':
		switch( peekc = getch() ){
		case '=': c=EQ; goto gotit;
		case '+': c=EQPL; goto gotit;
		case '-': c=EQMI; goto gotit;
		case '*': c=EQMUL; goto gotit;
		case '/': c=EQDIV; goto gotit;
		case '%': c=EQREM; goto gotit;
		case '^': c=EQEXP; goto gotit;
		default:   return( '=' );
			  gotit:     peekc = -1; return(c);
		  }
	case '+':	return( cpeek( '+', INCR, cpeek( '=', EQPL, '+') ) );
	case '-':	return( cpeek( '-', DECR, cpeek( '=', EQMI, '-') ) ) ;
	case '<':	return( cpeek( '=', LE, '<' ) );
	case '>':	return( cpeek( '=', GE, '>' ) );
	case '!':	return( cpeek( '=', NE, '!' ) );
	case '/':
		if((peekc = getch()) == '*'){
			peekc = -1;
			while((getch() != '*') || ((peekc = getch()) != '/'));
			peekc = -1;
			goto restart;
		}
		else if (peekc == '=') {
			c=EQDIV;
			goto gotit;
		}
		else return(c);
	case '*':
		return( cpeek( '=', EQMUL, '*' ) );
	case '%':
		return( cpeek( '=', EQREM, '%' ) );
	case '^':
		return( cpeek( '=', EQEXP, '^' ) );
	case '"':	
		 yylval = (intptr_t)str;
		 while((c=getch()) != '"'){*str++ = c;
			if(str >= &string[sizeof string - 1]){yyerror("string space exceeded");
			getout();
		}
	}
	 *str++ = '\0';
	return(QSTR);
	default:	 return( c );
	}
}

static int
cpeek(int c, int yes, int no){
	if( (peekc=getch()) != c ) return( no );
	else {
		peekc = -1;
		return( yes );
	}
}

static int
getch(void){
	int ch;
loop:
	ch = (peekc < 0) ? getc(in) : peekc;
	peekc = -1;
	if(ch != EOF)return(ch);
	if(++ifile > sargc){
		if(ifile >= sargc+2)getout();
		in = stdin;
		ln = 0;
		goto loop;
	}
	fclose(in);
	if((in = fopen(sargv[ifile],"r")) != NULL){
		ln = 0;
		ss = sargv[ifile];
		goto loop;
	}
	cantopen(sargv[ifile]);
	return EOF;
}
# define b_sp_max 3000
static intptr_t b_space [ b_sp_max ];
static intptr_t * b_sp_nxt = { b_space };

static int	bdebug = 0;

static intptr_t
bundle(int a, ...){
	intptr_t i, *q;
	va_list ap;

	i = a;
	q = b_sp_nxt;
	if( bdebug ) printf("bundle %ld elements at %lo\n",(long)i,  (long)q );
	va_start(ap, a);
	while(i-- > 0){
		if( b_sp_nxt >= & b_space[b_sp_max] ) yyerror( "bundling space exceeded" );
		* b_sp_nxt++ = va_arg(ap, intptr_t);
	}
	va_end(ap);
	* b_sp_nxt++ = 0;
	yyval = (intptr_t)q;
	return( (intptr_t)q );
}

static void
routput(intptr_t *p) {
	if( bdebug ) printf("routput(%lo)\n", (long)p );
	if( p >= &b_space[0] && p < &b_space[b_sp_max]){
		/* part of a bundle */
		while( *p != 0 ) routput( (intptr_t *)*p++ );
	}
	else printf( (char *)p );	 /* character string */
}

static void
output(intptr_t *p) {
	routput( p );
	b_sp_nxt = & b_space[0];
	printf( "\n" );
	fflush(stdout);
	cp = cary;
	crs = rcrs;
}

static void
conout(intptr_t p, intptr_t s) {
	printf("[");
	routput( (intptr_t *)p );
	printf("]s%s\n", (char *)s );
	fflush(stdout);
	lev--;
}

static void
yyerror(const char *s) {
	if(ifile > sargc)ss="teletype";
	fprintf(stderr, "%s on line %d, %s\n",
		s ,ss?ln+1:0,ss?ss:"command line");
	cp = cary;
	crs = rcrs;
	bindx = 0;
	lev = 0;
	b_sp_nxt = &b_space[0];
}

static void
cantopen(const char *fn)
{
	char	spc[280];
	char	*oss = ss;

	ss = 0;
	snprintf(spc, sizeof spc, "can't open input file %s", fn);
	yyerror(spc);
	ss = oss;
}

static void
pp(intptr_t s) {
	/* puts the relevant stuff on pre and post for the letter s */

	bundle(3, "S", s, pre );
	pre = (intptr_t *)yyval;
	bundle(4, post, "L", s, "s." );
	post = (intptr_t *)yyval;
}

static void
tp(intptr_t s) { /* same as pp, but for temps */
	bundle(3, "0S", s, pre );
	pre = (intptr_t *)yyval;
	bundle(4, post, "L", s, "s." );
	post = (intptr_t *)yyval;
}

static void
yyinit(int argc,char **argv) {
	signal(SIGINT, SIG_IGN);
	sargv=argv;
	sargc= -- argc;
	if(sargc == 0)in=stdin;
	else if((in = fopen(sargv[1],"r")) == NULL) {
		cantopen(sargv[1]);
		exit(0);
	}
	ifile = 1;
	ln = 0;
	ss = sargv[1];
}

static intptr_t *
getout(void){
	printf("q");
	fflush(stdout);
	exit(0);
	/*NOTREACHED*/
	return(NULL);
}

static intptr_t *
getf(intptr_t p) {
	return(intptr_t *)(&funtab[2*(*((char *)p) -0141)]);
}

static intptr_t *
geta(intptr_t p) {
	return(intptr_t *)(&atab[2*(*((char *)p) - 0141)]);
}

int
main(int argc, char **argv)
{
	extern int yyparse(void);
	const char optstring[] = "cdl";
	int p[2];
	int i;
	int cflag = 0, lflag = 0;


#ifdef	__GLIBC__
	putenv("POSIXLY_CORRECT=1");
#endif
	while ((i = getopt(argc, argv, optstring)) != EOF) {
		switch (i) {
		case 'd':
		case 'c':
			cflag = 1;
			break;
		case 'l':
			lflag = 1;
			break;
		default:
			exit(2);
		}
	}
	argv += optind - 1, argc -= optind - 1;
	if (cflag) {
		yyinit(argc, argv);
		yyparse();
		exit(0);
	}
	if (lflag) {
		*argv-- = LIBB;
		argc++;
	}
	pipe(p);
	if (fork()==0) {
		close(1);
		dup(p[1]);
		close(p[0]);
		close(p[1]);
		yyinit(argc, argv);
		yyparse();
		exit(0);
	}
	close(0);
	dup(p[0]);
	close(p[0]);
	close(p[1]);
	execl(DC, "dc", "-", NULL);
	execl("/usr/5bin/dc", "dc", "-", NULL);
	execl("/usr/local/bin/dc", "dc", "-", NULL);
	execl("/usr/contrib/bin/dc", "dc", "-", NULL);
	execl("/usr/bin/dc", "dc", "-", NULL);
	return(1);
}
