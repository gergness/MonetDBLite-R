/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     X_BODY = 259,
     IDENT = 260,
     aTYPE = 261,
     ALIAS = 262,
     AGGR = 263,
     AGGR2 = 264,
     RANK = 265,
     sqlINT = 266,
     OIDNUM = 267,
     HEXADECIMAL = 268,
     INTNUM = 269,
     APPROXNUM = 270,
     USING = 271,
     GLOBAL = 272,
     CAST = 273,
     CONVERT = 274,
     CHARACTER = 275,
     VARYING = 276,
     LARGE = 277,
     OBJECT = 278,
     VARCHAR = 279,
     CLOB = 280,
     sqlTEXT = 281,
     BINARY = 282,
     sqlBLOB = 283,
     sqlDECIMAL = 284,
     sqlFLOAT = 285,
     TINYINT = 286,
     SMALLINT = 287,
     BIGINT = 288,
     HUGEINT = 289,
     sqlINTEGER = 290,
     sqlDOUBLE = 291,
     sqlREAL = 292,
     PRECISION = 293,
     PARTIAL = 294,
     SIMPLE = 295,
     ACTION = 296,
     CASCADE = 297,
     RESTRICT = 298,
     BOOL_FALSE = 299,
     BOOL_TRUE = 300,
     CURRENT_DATE = 301,
     CURRENT_TIMESTAMP = 302,
     CURRENT_TIME = 303,
     LOCALTIMESTAMP = 304,
     LOCALTIME = 305,
     LEX_ERROR = 306,
     GEOMETRY = 307,
     GEOMETRYSUBTYPE = 308,
     GEOMETRYA = 309,
     USER = 310,
     CURRENT_USER = 311,
     SESSION_USER = 312,
     LOCAL = 313,
     LOCKED = 314,
     BEST = 315,
     EFFORT = 316,
     CURRENT_ROLE = 317,
     sqlSESSION = 318,
     sqlDELETE = 319,
     UPDATE = 320,
     SELECT = 321,
     INSERT = 322,
     LATERAL = 323,
     LEFT = 324,
     RIGHT = 325,
     FULL = 326,
     OUTER = 327,
     NATURAL = 328,
     CROSS = 329,
     JOIN = 330,
     INNER = 331,
     COMMIT = 332,
     ROLLBACK = 333,
     SAVEPOINT = 334,
     RELEASE = 335,
     WORK = 336,
     CHAIN = 337,
     NO = 338,
     PRESERVE = 339,
     ROWS = 340,
     START = 341,
     TRANSACTION = 342,
     READ = 343,
     WRITE = 344,
     ONLY = 345,
     ISOLATION = 346,
     LEVEL = 347,
     UNCOMMITTED = 348,
     COMMITTED = 349,
     sqlREPEATABLE = 350,
     SERIALIZABLE = 351,
     DIAGNOSTICS = 352,
     sqlSIZE = 353,
     STORAGE = 354,
     ASYMMETRIC = 355,
     SYMMETRIC = 356,
     ORDER = 357,
     ORDERED = 358,
     BY = 359,
     IMPRINTS = 360,
     EXISTS = 361,
     ESCAPE = 362,
     HAVING = 363,
     sqlGROUP = 364,
     sqlNULL = 365,
     FROM = 366,
     FOR = 367,
     MATCH = 368,
     EXTRACT = 369,
     SEQUENCE = 370,
     INCREMENT = 371,
     RESTART = 372,
     CONTINUE = 373,
     MAXVALUE = 374,
     MINVALUE = 375,
     CYCLE = 376,
     NOMAXVALUE = 377,
     NOMINVALUE = 378,
     NOCYCLE = 379,
     NEXT = 380,
     VALUE = 381,
     CACHE = 382,
     GENERATED = 383,
     ALWAYS = 384,
     IDENTITY = 385,
     SERIAL = 386,
     BIGSERIAL = 387,
     AUTO_INCREMENT = 388,
     SCOLON = 389,
     AT = 390,
     XMLCOMMENT = 391,
     XMLCONCAT = 392,
     XMLDOCUMENT = 393,
     XMLELEMENT = 394,
     XMLATTRIBUTES = 395,
     XMLFOREST = 396,
     XMLPARSE = 397,
     STRIP = 398,
     WHITESPACE = 399,
     XMLPI = 400,
     XMLQUERY = 401,
     PASSING = 402,
     XMLTEXT = 403,
     NIL = 404,
     REF = 405,
     ABSENT = 406,
     EMPTY = 407,
     DOCUMENT = 408,
     ELEMENT = 409,
     CONTENT = 410,
     XMLNAMESPACES = 411,
     NAMESPACE = 412,
     XMLVALIDATE = 413,
     RETURNING = 414,
     LOCATION = 415,
     ID = 416,
     ACCORDING = 417,
     XMLSCHEMA = 418,
     URI = 419,
     XMLAGG = 420,
     FILTER = 421,
     UNIONJOIN = 422,
     CORRESPONDING = 423,
     INTERSECT = 424,
     EXCEPT = 425,
     UNION = 426,
     DATA = 427,
     WITH = 428,
     FILTER_FUNC = 429,
     NOT = 430,
     SOME = 431,
     OR = 432,
     ILIKE = 433,
     NOT_ILIKE = 434,
     LIKE = 435,
     NOT_LIKE = 436,
     sqlIN = 437,
     NOT_IN = 438,
     BETWEEN = 439,
     NOT_BETWEEN = 440,
     ANY = 441,
     ALL = 442,
     AND = 443,
     COMPARISON = 444,
     SPLIT_PART = 445,
     POSITION = 446,
     SUBSTRING = 447,
     CONCATSTRING = 448,
     RIGHT_SHIFT_ASSIGN = 449,
     LEFT_SHIFT_ASSIGN = 450,
     RIGHT_SHIFT = 451,
     LEFT_SHIFT = 452,
     UMINUS = 453,
     GEOM_OVERLAP_OR_LEFT = 454,
     GEOM_OVERLAP_OR_BELOW = 455,
     GEOM_OVERLAP_OR_ABOVE = 456,
     GEOM_OVERLAP = 457,
     GEOM_MBR_EQUAL = 458,
     GEOM_DIST = 459,
     GEOM_ABOVE = 460,
     GEOM_BELOW = 461,
     GEOM_OVERLAP_OR_RIGHT = 462,
     TEMP = 463,
     TEMPORARY = 464,
     STREAM = 465,
     MERGE = 466,
     REMOTE = 467,
     REPLICA = 468,
     ASC = 469,
     DESC = 470,
     AUTHORIZATION = 471,
     CHECK = 472,
     CONSTRAINT = 473,
     CREATE = 474,
     COMMENT = 475,
     TYPE = 476,
     PROCEDURE = 477,
     FUNCTION = 478,
     sqlLOADER = 479,
     AGGREGATE = 480,
     RETURNS = 481,
     EXTERNAL = 482,
     sqlNAME = 483,
     DECLARE = 484,
     CALL = 485,
     LANGUAGE = 486,
     ANALYZE = 487,
     MINMAX = 488,
     SQL_EXPLAIN = 489,
     SQL_PLAN = 490,
     SQL_DEBUG = 491,
     SQL_TRACE = 492,
     PREP = 493,
     PREPARE = 494,
     EXEC = 495,
     EXECUTE = 496,
     DEFAULT = 497,
     DISTINCT = 498,
     DROP = 499,
     TRUNCATE = 500,
     FOREIGN = 501,
     RENAME = 502,
     ENCRYPTED = 503,
     UNENCRYPTED = 504,
     PASSWORD = 505,
     GRANT = 506,
     REVOKE = 507,
     ROLE = 508,
     ADMIN = 509,
     INTO = 510,
     IS = 511,
     KEY = 512,
     ON = 513,
     OPTION = 514,
     OPTIONS = 515,
     PATH = 516,
     PRIMARY = 517,
     PRIVILEGES = 518,
     PUBLIC = 519,
     REFERENCES = 520,
     SCHEMA = 521,
     SET = 522,
     AUTO_COMMIT = 523,
     RETURN = 524,
     ALTER = 525,
     ADD = 526,
     TABLE = 527,
     COLUMN = 528,
     TO = 529,
     UNIQUE = 530,
     VALUES = 531,
     VIEW = 532,
     WHERE = 533,
     sqlDATE = 534,
     TIME = 535,
     TIMESTAMP = 536,
     INTERVAL = 537,
     YEAR = 538,
     QUARTER = 539,
     MONTH = 540,
     WEEK = 541,
     DAY = 542,
     HOUR = 543,
     MINUTE = 544,
     SECOND = 545,
     ZONE = 546,
     LIMIT = 547,
     OFFSET = 548,
     SAMPLE = 549,
     CASE = 550,
     WHEN = 551,
     THEN = 552,
     ELSE = 553,
     NULLIF = 554,
     COALESCE = 555,
     IF = 556,
     ELSEIF = 557,
     WHILE = 558,
     DO = 559,
     ATOMIC = 560,
     BEGIN = 561,
     END = 562,
     COPY = 563,
     RECORDS = 564,
     DELIMITERS = 565,
     STDIN = 566,
     STDOUT = 567,
     FWF = 568,
     INDEX = 569,
     REPLACE = 570,
     AS = 571,
     TRIGGER = 572,
     OF = 573,
     BEFORE = 574,
     AFTER = 575,
     ROW = 576,
     STATEMENT = 577,
     sqlNEW = 578,
     OLD = 579,
     EACH = 580,
     REFERENCING = 581,
     OVER = 582,
     PARTITION = 583,
     CURRENT = 584,
     EXCLUDE = 585,
     FOLLOWING = 586,
     PRECEDING = 587,
     OTHERS = 588,
     TIES = 589,
     RANGE = 590,
     UNBOUNDED = 591
   };
#endif
/* Tokens.  */
#define STRING 258
#define X_BODY 259
#define IDENT 260
#define aTYPE 261
#define ALIAS 262
#define AGGR 263
#define AGGR2 264
#define RANK 265
#define sqlINT 266
#define OIDNUM 267
#define HEXADECIMAL 268
#define INTNUM 269
#define APPROXNUM 270
#define USING 271
#define GLOBAL 272
#define CAST 273
#define CONVERT 274
#define CHARACTER 275
#define VARYING 276
#define LARGE 277
#define OBJECT 278
#define VARCHAR 279
#define CLOB 280
#define sqlTEXT 281
#define BINARY 282
#define sqlBLOB 283
#define sqlDECIMAL 284
#define sqlFLOAT 285
#define TINYINT 286
#define SMALLINT 287
#define BIGINT 288
#define HUGEINT 289
#define sqlINTEGER 290
#define sqlDOUBLE 291
#define sqlREAL 292
#define PRECISION 293
#define PARTIAL 294
#define SIMPLE 295
#define ACTION 296
#define CASCADE 297
#define RESTRICT 298
#define BOOL_FALSE 299
#define BOOL_TRUE 300
#define CURRENT_DATE 301
#define CURRENT_TIMESTAMP 302
#define CURRENT_TIME 303
#define LOCALTIMESTAMP 304
#define LOCALTIME 305
#define LEX_ERROR 306
#define GEOMETRY 307
#define GEOMETRYSUBTYPE 308
#define GEOMETRYA 309
#define USER 310
#define CURRENT_USER 311
#define SESSION_USER 312
#define LOCAL 313
#define LOCKED 314
#define BEST 315
#define EFFORT 316
#define CURRENT_ROLE 317
#define sqlSESSION 318
#define sqlDELETE 319
#define UPDATE 320
#define SELECT 321
#define INSERT 322
#define LATERAL 323
#define LEFT 324
#define RIGHT 325
#define FULL 326
#define OUTER 327
#define NATURAL 328
#define CROSS 329
#define JOIN 330
#define INNER 331
#define COMMIT 332
#define ROLLBACK 333
#define SAVEPOINT 334
#define RELEASE 335
#define WORK 336
#define CHAIN 337
#define NO 338
#define PRESERVE 339
#define ROWS 340
#define START 341
#define TRANSACTION 342
#define READ 343
#define WRITE 344
#define ONLY 345
#define ISOLATION 346
#define LEVEL 347
#define UNCOMMITTED 348
#define COMMITTED 349
#define sqlREPEATABLE 350
#define SERIALIZABLE 351
#define DIAGNOSTICS 352
#define sqlSIZE 353
#define STORAGE 354
#define ASYMMETRIC 355
#define SYMMETRIC 356
#define ORDER 357
#define ORDERED 358
#define BY 359
#define IMPRINTS 360
#define EXISTS 361
#define ESCAPE 362
#define HAVING 363
#define sqlGROUP 364
#define sqlNULL 365
#define FROM 366
#define FOR 367
#define MATCH 368
#define EXTRACT 369
#define SEQUENCE 370
#define INCREMENT 371
#define RESTART 372
#define CONTINUE 373
#define MAXVALUE 374
#define MINVALUE 375
#define CYCLE 376
#define NOMAXVALUE 377
#define NOMINVALUE 378
#define NOCYCLE 379
#define NEXT 380
#define VALUE 381
#define CACHE 382
#define GENERATED 383
#define ALWAYS 384
#define IDENTITY 385
#define SERIAL 386
#define BIGSERIAL 387
#define AUTO_INCREMENT 388
#define SCOLON 389
#define AT 390
#define XMLCOMMENT 391
#define XMLCONCAT 392
#define XMLDOCUMENT 393
#define XMLELEMENT 394
#define XMLATTRIBUTES 395
#define XMLFOREST 396
#define XMLPARSE 397
#define STRIP 398
#define WHITESPACE 399
#define XMLPI 400
#define XMLQUERY 401
#define PASSING 402
#define XMLTEXT 403
#define NIL 404
#define REF 405
#define ABSENT 406
#define EMPTY 407
#define DOCUMENT 408
#define ELEMENT 409
#define CONTENT 410
#define XMLNAMESPACES 411
#define NAMESPACE 412
#define XMLVALIDATE 413
#define RETURNING 414
#define LOCATION 415
#define ID 416
#define ACCORDING 417
#define XMLSCHEMA 418
#define URI 419
#define XMLAGG 420
#define FILTER 421
#define UNIONJOIN 422
#define CORRESPONDING 423
#define INTERSECT 424
#define EXCEPT 425
#define UNION 426
#define DATA 427
#define WITH 428
#define FILTER_FUNC 429
#define NOT 430
#define SOME 431
#define OR 432
#define ILIKE 433
#define NOT_ILIKE 434
#define LIKE 435
#define NOT_LIKE 436
#define sqlIN 437
#define NOT_IN 438
#define BETWEEN 439
#define NOT_BETWEEN 440
#define ANY 441
#define ALL 442
#define AND 443
#define COMPARISON 444
#define SPLIT_PART 445
#define POSITION 446
#define SUBSTRING 447
#define CONCATSTRING 448
#define RIGHT_SHIFT_ASSIGN 449
#define LEFT_SHIFT_ASSIGN 450
#define RIGHT_SHIFT 451
#define LEFT_SHIFT 452
#define UMINUS 453
#define GEOM_OVERLAP_OR_LEFT 454
#define GEOM_OVERLAP_OR_BELOW 455
#define GEOM_OVERLAP_OR_ABOVE 456
#define GEOM_OVERLAP 457
#define GEOM_MBR_EQUAL 458
#define GEOM_DIST 459
#define GEOM_ABOVE 460
#define GEOM_BELOW 461
#define GEOM_OVERLAP_OR_RIGHT 462
#define TEMP 463
#define TEMPORARY 464
#define STREAM 465
#define MERGE 466
#define REMOTE 467
#define REPLICA 468
#define ASC 469
#define DESC 470
#define AUTHORIZATION 471
#define CHECK 472
#define CONSTRAINT 473
#define CREATE 474
#define COMMENT 475
#define TYPE 476
#define PROCEDURE 477
#define FUNCTION 478
#define sqlLOADER 479
#define AGGREGATE 480
#define RETURNS 481
#define EXTERNAL 482
#define sqlNAME 483
#define DECLARE 484
#define CALL 485
#define LANGUAGE 486
#define ANALYZE 487
#define MINMAX 488
#define SQL_EXPLAIN 489
#define SQL_PLAN 490
#define SQL_DEBUG 491
#define SQL_TRACE 492
#define PREP 493
#define PREPARE 494
#define EXEC 495
#define EXECUTE 496
#define DEFAULT 497
#define DISTINCT 498
#define DROP 499
#define TRUNCATE 500
#define FOREIGN 501
#define RENAME 502
#define ENCRYPTED 503
#define UNENCRYPTED 504
#define PASSWORD 505
#define GRANT 506
#define REVOKE 507
#define ROLE 508
#define ADMIN 509
#define INTO 510
#define IS 511
#define KEY 512
#define ON 513
#define OPTION 514
#define OPTIONS 515
#define PATH 516
#define PRIMARY 517
#define PRIVILEGES 518
#define PUBLIC 519
#define REFERENCES 520
#define SCHEMA 521
#define SET 522
#define AUTO_COMMIT 523
#define RETURN 524
#define ALTER 525
#define ADD 526
#define TABLE 527
#define COLUMN 528
#define TO 529
#define UNIQUE 530
#define VALUES 531
#define VIEW 532
#define WHERE 533
#define sqlDATE 534
#define TIME 535
#define TIMESTAMP 536
#define INTERVAL 537
#define YEAR 538
#define QUARTER 539
#define MONTH 540
#define WEEK 541
#define DAY 542
#define HOUR 543
#define MINUTE 544
#define SECOND 545
#define ZONE 546
#define LIMIT 547
#define OFFSET 548
#define SAMPLE 549
#define CASE 550
#define WHEN 551
#define THEN 552
#define ELSE 553
#define NULLIF 554
#define COALESCE 555
#define IF 556
#define ELSEIF 557
#define WHILE 558
#define DO 559
#define ATOMIC 560
#define BEGIN 561
#define END 562
#define COPY 563
#define RECORDS 564
#define DELIMITERS 565
#define STDIN 566
#define STDOUT 567
#define FWF 568
#define INDEX 569
#define REPLACE 570
#define AS 571
#define TRIGGER 572
#define OF 573
#define BEFORE 574
#define AFTER 575
#define ROW 576
#define STATEMENT 577
#define sqlNEW 578
#define OLD 579
#define EACH 580
#define REFERENCING 581
#define OVER 582
#define PARTITION 583
#define CURRENT 584
#define EXCLUDE 585
#define FOLLOWING 586
#define PRECEDING 587
#define OTHERS 588
#define TIES 589
#define RANGE 590
#define UNBOUNDED 591




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 110 "src/sql/server/sql_parser.y"
{
	int		i_val,bval;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;
}
/* Line 1529 of yacc.c.  */
#line 731 "src/sql/server/sql_parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



