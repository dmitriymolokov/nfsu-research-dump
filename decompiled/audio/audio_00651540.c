/* spd-match: far pct=11.16 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141721Z_w0_tc0 */
#include "ghidra_compat.h"

/* P3 ghidra_field_overlay — CRT soft structs (no pthreadlocinfo — in GHIDRA_COMPAT) */
typedef struct m375_cpinfo_s {
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_cpinfo;
typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct _m375_ptiddata {
  void *_initaddr;
  void *_initarg;
  void *_translator;
  void *_terminate;
  void *_unexpected;
  void *_purecall;
  void *_token;
  void *_tpxcptinfoptrs;
  void *_pxcptacttab;
  unsigned int _holdrand;
  int _tfpecode;
  int _terrno;
  int _tdoserrno;
  int _NLG_dwCode;
  int _maxcharsize;
  char _con_ch_buf[32];
  unsigned int _thandle;
  unsigned char _pad[64];
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375

int __cdecl FUN_006513b0();
int __cdecl FUN_00654010();
int __cdecl FUN_00656ef0();
int __cdecl FUN_00656f90();
int __cdecl FUN_00656fd0();
int __cdecl FUN_00657080();
int __cdecl FUN_006571e0();
int __cdecl FUN_00657220();
int __cdecl FUN_00657410();
int __cdecl FUN_00657540();
int __cdecl FUN_00657590();
int __cdecl FUN_00657630();
int __cdecl FUN_00657690();
int __cdecl FUN_00657770();
int __cdecl FUN_006577a0();
int __cdecl FUN_006577e0();
int __cdecl FUN_00657b50();
int __cdecl FUN_00657c50();
extern int DAT_00713f48;
extern int DAT_0071400c;
extern int DAT_00714068;
extern int DAT_00714075;
extern unsigned char *DAT_00714094;
extern void LAB_00657040(void);
extern void LAB_00657060(void);
extern void LAB_006574d0(void);
extern void LAB_006575d0(void);
extern void LAB_00657670(void);
extern void LAB_00657910(void);
extern void LAB_00657940(void);
extern void LAB_00657a40(void);
extern void LAB_00657b20(void);

int FUN_00651540(short *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                ,undefined4 param_6,undefined4 param_7,undefined4 *param_8,int param_9,
                undefined4 *param_10,int param_11,undefined1 param_12)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [6];
  undefined4 local_3c [6];
  undefined4 auStack_24 [9];
  
  iVar4 = (int)param_1 * 0x110 + DAT_0071400c;
  iVar5 = (int)param_1 * 0x8c;
  iVar3 = iVar4 + 0x2c;
  iVar6 = iVar5 + DAT_00713f48;
  *(undefined4 *)(iVar4 + 0x10c) = 0;
  *(int *)(iVar4 + 0xbc) = iVar3;
  *(int *)(iVar4 + 0xc0) = iVar3;
  *(int *)(iVar4 + 0xc4) = iVar3;
  *(int *)(iVar4 + 200) = iVar3;
  *(int *)(iVar4 + 0xcc) = iVar3;
  *(int *)(iVar4 + 0xd0) = iVar3;
  *(int *)(iVar4 + 0xd4) = iVar3;
  *(int *)(iVar4 + 0xd8) = iVar3;
  *(int *)(iVar4 + 0xdc) = iVar3;
  *(int *)(iVar4 + 0xe0) = iVar3;
  uVar1 = *(ushort *)(iVar6 + 0x24);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 4) != 0) {
      (*(unsigned int *)&(local_64)) = (*(unsigned int *)&(local_64) & 0xff000000u) | ((unsigned int)(CONCAT12(param_12,CONCAT11(*(undefined1 *)(iVar6 + 0x22),*(undefined1 *)(iVar6 + 0x23)))) & 0x00ffffffu);
      local_60 = param_2;
      local_68 = CONCAT22((short)param_1,*(undefined2 *)(iVar6 + 0x20));
      local_5c = param_3;
      local_58 = *(undefined4 *)(iVar6 + 0x14);
      *(code **)(iVar4 + 0xec) = FUN_00657540;
      *(undefined1 **)(iVar4 + 0xf8) = &LAB_006575d0;
      *(code **)(iVar4 + 0xfc) = FUN_00657630;
      *(code **)(iVar4 + 0xf0) = FUN_00657590;
      *(undefined1 **)(iVar4 + 0x108) = &LAB_00657670;
      *(undefined4 *)(iVar4 + 0x100) = 0;
      *(undefined4 *)(iVar4 + 0x104) = 0;
      *(code **)(iVar4 + 0xe8) = FUN_006577a0;
      *(undefined1 **)(iVar4 + 0xf4) = &LAB_006574d0;
      iVar2 = 0;
      if (*(char *)(iVar6 + 0x23) != '\0') {
        do {
          local_3c[iVar2] = *(undefined4 *)(param_9 + iVar2 * 4);
          local_54[iVar2] = param_8[iVar2];
          auStack_24[iVar2] = param_10[iVar2];
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)*(byte *)(iVar6 + 0x23));
      }
      FUN_00657690(iVar3,&local_68);
    }
  }
  else {
    if (1 < *(byte *)(iVar6 + 0x23)) {
      return -7;
    }
    if ((uVar1 & 1) == 0) {
      local_54[0] = *param_8;
      local_54[1] = *param_10;
      local_68 = CONCAT22((short)param_1,*(undefined2 *)(iVar6 + 0x20));
      local_5c = param_3;
      local_60 = param_2;
      local_58 = *(undefined4 *)(iVar6 + 0x14);
      iVar2 = iVar4 + 0x74;
      (*(unsigned int *)&(local_64)) = (*(unsigned int *)&(local_64) & 0xff000000u) | ((unsigned int)(CONCAT12(param_12,CONCAT11(*(undefined1 *)(iVar6 + 0x22),*(undefined1 *)(iVar6 + 0x23)))) & 0x00ffffffu);
      FUN_00657b50(iVar2,&local_68);
      *(int *)(iVar4 + 0xcc) = iVar2;
      *(int *)(iVar4 + 0xd0) = iVar2;
      *(int *)(iVar4 + 0xd4) = iVar2;
      *(int *)(iVar4 + 0xd8) = iVar2;
      *(undefined1 **)(iVar4 + 0xf8) = &LAB_00657940;
      *(undefined1 **)(iVar4 + 0xfc) = &LAB_00657a40;
      *(undefined1 **)(iVar4 + 0xf0) = &LAB_00657910;
      *(undefined1 **)(iVar4 + 0x108) = &LAB_00657b20;
      local_64 = 0;
    }
    else {
      if (param_11 == 0) {
        return -0xf;
      }
      iVar2 = FUN_00654010(param_11);
      if (iVar2 == 0) {
        return -9;
      }
      local_64 = *(undefined4 *)(&DAT_00714094 + *(int *)(iVar2 + 4) * 0x20);
      *(undefined4 *)(iVar4 + 0xf8) = 0;
      *(undefined4 *)(iVar4 + 0xfc) = 0;
      *(undefined4 *)(iVar4 + 0xf0) = 0;
      *(undefined1 **)(iVar4 + 0x108) = &LAB_00657040;
    }
    local_68 = DAT_00714068;
    local_60 = CONCAT31(((unsigned int)(local_60) >> 8),param_12);
    local_60 = CONCAT22(*(undefined2 *)(iVar6 + 0x20),(undefined2)local_60);
    (*(unsigned short *)&(local_5c)) = CONCAT11(DAT_00714075,0 < param_3);
    iVar2 = FUN_00657220(iVar3,&local_68);
    if (iVar2 == 0) {
      if ((*(byte *)(iVar6 + 0x24) & 2) != 0) {
        FUN_00657c50(iVar4 + 0x74);
      }
      return -9;
    }
    *(code **)(iVar4 + 0xec) = FUN_00656fd0;
    *(code **)(iVar4 + 0x100) = FUN_00656ef0;
    *(code **)(iVar4 + 0x104) = FUN_00657080;
    *(code **)(iVar4 + 0xe8) = FUN_006571e0;
    *(code **)(iVar4 + 0xf4) = FUN_00656f90;
    if ((*(byte *)(iVar6 + 0x24) & 2) != 0) {
      *(undefined2 *)(iVar4 + 0x44) = 0;
      FUN_006577e0(iVar4 + 0xe4,iVar3);
    }
  }
  (**(code **)(iVar4 + 0xec))(*(undefined4 *)(iVar4 + 200),*(undefined2 *)(iVar6 + 0x8a));
  if (*(char *)(iVar6 + 0x23) != '\0') {
    param_1 = (short *)(iVar6 + 4);
    iVar2 = 0;
    do {
      FUN_006513b0((int)*param_1);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(iVar6 + 0x23));
  }
  if (*(code **)(iVar4 + 0xf8) != (code *)0x0) {
    (**(code **)(iVar4 + 0xf8))(*(undefined4 *)(iVar4 + 0xd0),param_6);
  }
  if (*(code **)(iVar4 + 0xfc) != (code *)0x0) {
    (**(code **)(iVar4 + 0xfc))(*(undefined4 *)(iVar4 + 0xd0),param_7);
  }
  if (*(code **)(iVar4 + 0xf0) != (code *)0x0) {
    (**(code **)(iVar4 + 0xf0))
              (*(undefined4 *)(iVar4 + 0xcc),*(undefined2 *)(iVar5 + 0x6a + DAT_00713f48));
  }
  if (*(code **)(iVar4 + 0x100) != (code *)0x0) {
    (**(code **)(iVar4 + 0x100))(*(undefined4 *)(iVar4 + 0xe0),100);
  }
  if ((*(byte *)(iVar6 + 0x24) & 0x10) == 0) {
    iVar3 = FUN_00657770(iVar3);
  }
  else {
    iVar3 = FUN_00657410();
  }
  if (-1 < iVar3) {
    (**(code **)(iVar4 + 0xf4))(*(undefined4 *)(iVar4 + 0xc4),(int)*(short *)(iVar6 + 0x62));
    if ((*(byte *)(iVar6 + 0x24) & 1) != 0) {
      *(undefined1 **)(iVar4 + 0x10c) = &LAB_00657060;
    }
    return 0;
  }
  if ((*(byte *)(iVar6 + 0x24) & 2) != 0) {
    FUN_00657c50(iVar4 + 0x74);
  }
  return iVar3;
}
