/* spd-match: far pct=10.52 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142403Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_0041f600();
int __cdecl FUN_00421a30();
int __cdecl FUN_00421a50();
int __cdecl FUN_0042ab30();
int __cdecl FUN_0042ac10();
int __cdecl FUN_0042ac30();
int __cdecl FUN_0042ebb0();
int __cdecl FUN_00432a10();
int __cdecl FUN_0043a2e0();
extern int DAT_006f0888;
extern int DAT_00700e8c;
extern unsigned char *DAT_0073619c;
extern int DAT_007361b8;
extern int DAT_007361c4;
extern unsigned char *DAT_007361f0;
extern int DAT_007796a8;
extern int DAT_0078a30c;
extern int DAT_0078a318;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a328;
extern int DAT_0078a32c;
extern int DAT_0078a350;
extern int DAT_0078a368;
extern int DAT_0078a3f4;
extern int DAT_0078a3f6;
extern int DAT_0078a3f7;
extern int DAT_0078a3f8;
extern int DAT_0078a3f9;
extern void LAB_0042eb1d(void);
extern void LAB_0042eb34(void);
extern void LAB_0042eb7b(void);
extern void LAB_0042eb7d(void);

undefined8 FUN_0042e620(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     ((((*(int *)(param_1 + 0x27c) != 0 &&
        (iVar3 = *(int *)(*(int *)(param_1 + 0x27c) + 0xc), 1 < iVar3)) && (iVar3 < 5)) ||
      (0 < DAT_007796a8)))) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x60);
  uVar6 = 0;
  uVar7 = 0x40000;
  if (((iVar3 != 0) && (iVar3 != 6)) && (iVar3 != 7)) goto LAB_0042eb7d;
  iVar4 = *DAT_007361f0;
  if ((iVar4 == 9) || (iVar4 == 10)) {
    uVar7 = 0;
LAB_0042eb7b:
    uVar6 = 0;
    goto LAB_0042eb7d;
  }
  if (iVar4 == 5) {
    uVar7 = 0;
    goto LAB_0042eb7b;
  }
  if (iVar4 == 1) {
    uVar7 = 0;
    goto LAB_0042eb7b;
  }
  if (iVar4 == 8) {
    uVar7 = 0;
    goto LAB_0042eb7b;
  }
  iVar1 = *DAT_0073619c;
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar7 = 0x2000000;
    goto LAB_0042eb7b;
  }
  if ((iVar1 == 3) && (DAT_007361c4 == 1)) {
    uVar7 = 0x2040000;
    uVar6 = 0;
    iVar3 = FUN_0042ac10();
    if (iVar3 == 0) {
      if ((*(byte *)(param_1 + 0x30) & 0x40) != 0) {
        uVar6 = FUN_0042ebb0();
        uVar7 = uVar6 | 0x2040000;
        uVar6 = (int)uVar6 >> 0x1f | 0x40000;
      }
      cVar2 = FUN_00421a50();
      if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x30) & 0x40) != 0)) {
        uVar7 = uVar7 | 0x20000000;
      }
    }
    goto LAB_0042eb7d;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((iVar1 != 0) && (iVar4 == 4)) {
    uVar6 = 0;
    uVar7 = 0x40004;
    if ((DAT_007361c4 != 2) ||
       (((*(int *)(param_1 + 0x10) != 0 || (*(int *)(((int)DAT_007361b8) + 0x58) != 0)) ||
        (DAT_0078a3f7 == '\x06')))) goto LAB_0042eb7d;
    uVar7 = 0x40005;
    goto LAB_0042eb7b;
  }
  iVar4 = FUN_0042ac10();
  if (iVar4 != 0) {
    cVar2 = FUN_0042ac30();
    if (cVar2 != '\0') {
      uVar7 = 0x2040000;
    }
    uVar6 = 0;
    if (*(int *)(param_1 + 0x538) != 0) {
      if (((int)DAT_006f0888) - *(int *)(param_1 + 0x538) < 0x3c) {
        uVar7 = uVar7 | 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x538) = 0;
      }
    }
    cVar2 = FUN_0043a2e0();
    if (cVar2 != '\0') {
      uVar7 = uVar7 | 0x4000;
    }
    goto LAB_0042eb7d;
  }
  if ((iVar3 == 1) || (iVar3 == 2)) {
    uVar7 = 0x42000;
    goto LAB_0042eb7b;
  }
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 0:
    uVar6 = 0x140000;
    if ((*(int *)(param_1 + 0x27c) != 0) &&
       (cVar2 = (**(code **)(**(int **)(param_1 + 0x27c) + 0x28))(), cVar2 != '\0')) {
      uVar6 = 0x40000;
    }
    cVar2 = DAT_0078a3f8;
    if ((DAT_0078a368 == 0) && (cVar2 = DAT_0078a3f7, DAT_007361c4 != 2)) {
      cVar2 = DAT_0078a3f6;
    }
    if (cVar2 != '\x06') {
      uVar6 = uVar6 | 1;
    }
    uVar8 = *(uint *)(param_1 + 0x30);
    if ((uVar8 & 0x100) != 0) {
      uVar6 = uVar6 | 0x508;
    }
    if (((uVar8 & 4) != 0) && ((DAT_007361c4 != 2 || (cVar2 = FUN_0041f600(), cVar2 == '\0')))) {
      uVar6 = uVar6 | 0x80;
    }
    if ((uVar8 & 0x10) != 0) {
      uVar6 = uVar6 | 0x200;
    }
    if (((((uVar8 & 0x200) != 0) && (DAT_0078a368 == 0)) && (iVar3 = FUN_00421a30(), iVar3 == 0)) &&
       (((cVar2 = FUN_00432a10(), cVar2 == '\0' && (DAT_0078a3f9 != '\0')) &&
        (cVar2 = FUN_00421a50(), cVar2 == '\0')))) {
      uVar6 = uVar6 | 0x800000;
    }
    uVar7 = uVar6;
    if ((DAT_0078a3f4 != '\0') && (uVar7 = uVar6 | 0x1000, *(char *)(param_1 + 0x4ad) != '\0')) {
      uVar7 = uVar6;
    }
    if ((DAT_0078a30c == 2) && (DAT_0078a318 == 0)) {
      uVar7 = uVar7 & 0xfffffdff;
    }
    if (((((int)DAT_0078a328) + ((int)DAT_0078a32c) + ((int)DAT_0078a324) + (int)DAT_0078a320 == 1) ||
        (cVar2 = FUN_00432a10(), cVar2 != '\0')) && (cVar2 = FUN_0041f600(), cVar2 == '\0')) {
      uVar7 = uVar7 & 0xfffffdff;
    }
    if ((uVar8 & 0x400) != 0) {
      uVar7 = uVar7 | 0x20000;
    }
    cVar2 = FUN_00432a10();
    if ((((cVar2 != '\0') || ((DAT_0078a368 != 0 && (DAT_007361c4 == 2)))) ||
        (*(int *)(param_1 + 0x50) == 0)) ||
       ((cVar2 = FUN_0041f600(), cVar2 == '\0' && (DAT_007361c4 == 2)))) {
      uVar7 = uVar7 & 0xfffdffff;
    }
    uVar5 = FUN_0042ebb0();
    if ((uVar8 & 0x40) == 0) {
      uVar7 = uVar7 & ~uVar5;
      uVar6 = 0;
      cVar2 = FUN_00421a50();
      if ((cVar2 == '\0') && (cVar2 = FUN_0041f600(), cVar2 == '\0')) {
        FUN_0042ab30();
      }
    }
    else {
      uVar6 = (int)uVar5 >> 0x1f | 0x40000;
      uVar7 = uVar7 | uVar5;
      cVar2 = FUN_00421a50();
      if (cVar2 == '\0') {
        cVar2 = FUN_0041f600();
        if (cVar2 == '\0') {
          cVar2 = FUN_0042ab30();
          if (cVar2 != '\0') {
            uVar7 = uVar7 | 0x10000;
          }
        }
        else {
          uVar7 = uVar7 | 0x80000000;
        }
      }
      else {
        uVar7 = uVar7 | 0x20000000;
      }
    }
    cVar2 = FUN_0042ab30();
    if (cVar2 != '\0') {
      uVar7 = uVar7 & 0xffffefff;
    }
    break;
  case 1:
    if ((DAT_0078a350 != 0) && (DAT_0078a368 == 0)) {
      uVar7 = 0x4040000;
    }
    uVar6 = 0;
    if (DAT_007361c4 == 1) {
      uVar7 = uVar7 | 1;
    }
    break;
  case 2:
    if (DAT_0078a350 == 0) break;
    if (DAT_0078a368 != 0) goto LAB_0042eb1d;
    if (iVar1 == 0) {
      uVar7 = 0x4040000;
      uVar6 = 0;
    }
    goto LAB_0042eb34;
  case 3:
    if ((DAT_0078a350 != 0) && (DAT_0078a368 == 0)) {
      uVar7 = 0x4040000;
    }
    uVar8 = FUN_0042ebb0();
    uVar6 = (int)uVar8 >> 0x1f;
    uVar7 = uVar7 | uVar8;
  }
  if (DAT_0078a368 != 0) {
LAB_0042eb1d:
    uVar7 = uVar7 & 0xfbff7dff;
    if (*(int *)(param_1 + 0x278) == 4) {
      uVar7 = uVar7 | 0x400000;
    }
  }
LAB_0042eb34:
  if (DAT_007361c4 == 2) {
    uVar8 = uVar7;
    if ((uVar7 & 0x4000000) != 0) {
      uVar8 = uVar7 & 0xfbffffff | 0x8000;
    }
    uVar7 = uVar8 & 0xffefffff;
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar7 = uVar8 & 0xffeffffe;
    }
  }
  uVar7 = uVar7 | 0x4000;
LAB_0042eb7d:
  if (DAT_00700e8c == 0) {
    uVar6 = uVar6 | 0x20000;
  }
  return CONCAT44(uVar6,uVar7);
}
