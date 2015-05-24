/*
*      Interactive disassembler (IDA).
*      Copyright (c) 1990-2009 Hex-Rays
*      ALL RIGHTS RESERVED.
*
*/

#ifndef __INSTRS_HPP
#define __INSTRS_HPP

#include "necv850.hpp"

//----------------------------------------------------------------------

extern instruc_t Instructions[];

enum NEC850_Instructions
{
  NEC850_NULL = 0,
  NEC850_BREAKPOINT,
  NEC850_XORI,
  NEC850_XOR,
  NEC850_TST1,
  NEC850_TST,
  NEC850_TRAP,
  NEC850_SUBR,
  NEC850_SUB,
  NEC850_STSR,
  NEC850_ST_B,
  NEC850_ST_H,
  NEC850_ST_W,
  NEC850_SST_B,
  NEC850_SST_H,
  NEC850_SST_W,
  NEC850_SLD_B,
  NEC850_SLD_H,
  NEC850_SLD_W,
  NEC850_SHR,
  NEC850_SHL,
  NEC850_SET1,
  NEC850_SETFV,
  NEC850_SETFL,
  NEC850_SETFZ,
  NEC850_SETFNH,
  NEC850_SETFN,
  NEC850_SETFT,
  NEC850_SETFLT,
  NEC850_SETFLE,
  NEC850_SETFNV,
  NEC850_SETFNC,
  NEC850_SETFNZ,
  NEC850_SETFH,
  NEC850_SETFP,
  NEC850_SETFSA,
  NEC850_SETFGE,
  NEC850_SETFGT,
  NEC850_SATSUBR,
  NEC850_SATSUBI,
  NEC850_SATSUB,
  NEC850_SATADD,
  NEC850_SAR,
  NEC850_RETI,
  NEC850_ORI,
  NEC850_OR,
  NEC850_NOT1,
  NEC850_NOT,
  NEC850_NOP,
  NEC850_MULHI,
  NEC850_MULH,
  NEC850_MOVHI,
  NEC850_MOVEA,
  NEC850_MOV,
  NEC850_LDSR,
  NEC850_LD_B,
  NEC850_LD_H,
  NEC850_LD_W,
  NEC850_JR,
  NEC850_JMP,
  NEC850_JARL,
  NEC850_HALT,
  NEC850_EI,
  NEC850_DIVH,
  NEC850_DI,
  NEC850_CMP,
  NEC850_CLR1,
  NEC850_BV,
  NEC850_BL,
  NEC850_BZ,
  NEC850_BNH,
  NEC850_BN,
  NEC850_BR,
  NEC850_BLT,
  NEC850_BLE,
  NEC850_BNV,
  NEC850_BNC,
  NEC850_BNZ,
  NEC850_BH,
  NEC850_BP,
  NEC850_BSA,
  NEC850_BGE,
  NEC850_BGT,
  NEC850_ANDI,
  NEC850_AND,
  NEC850_ADDI,
  NEC850_ADD,

  //
  // V850E
  //
  NEC850_SWITCH,
  NEC850_ZXB,
  NEC850_SXB,
  NEC850_ZXH,
  NEC850_SXH,
  NEC850_DISPOSE_r0,
  NEC850_DISPOSE_r,
  NEC850_CALLT,
  NEC850_DBTRAP,
  NEC850_DBRET,
  NEC850_CTRET,

  NEC850_SASFV,
  NEC850_SASFL,
  NEC850_SASFZ,
  NEC850_SASFNH,
  NEC850_SASFN,
  NEC850_SASFT,
  NEC850_SASFLT,
  NEC850_SASFLE,
  NEC850_SASFNV,
  NEC850_SASFNC,
  NEC850_SASFNZ,
  NEC850_SASFH,
  NEC850_SASFP,
  NEC850_SASFSA,
  NEC850_SASFGE,
  NEC850_SASFGT,

  NEC850_PREPARE_sp,
  NEC850_PREPARE_i,

  NEC850_MUL,
  NEC850_MULU,

  NEC850_DIVH_r3,
  NEC850_DIVHU,
  NEC850_DIV,
  NEC850_DIVU,

  NEC850_BSW,
  NEC850_BSH,
  NEC850_HSW,

  NEC850_CMOVV,
  NEC850_CMOVL,
  NEC850_CMOVZ,
  NEC850_CMOVNH,
  NEC850_CMOVN,
  NEC850_CMOV,
  NEC850_CMOVLT,
  NEC850_CMOVLE,
  NEC850_CMOVNV,
  NEC850_CMOVNC,
  NEC850_CMOVNZ,
  NEC850_CMOVH,
  NEC850_CMOVP,
  NEC850_CMOVSA,
  NEC850_CMOVGE,
  NEC850_CMOVGT,

  NEC850_SLD_BU,
  NEC850_SLD_HU,
  NEC850_LD_BU,
  NEC850_LD_HU,

  NEC850_LAST_INSTRUCTION
};


#endif