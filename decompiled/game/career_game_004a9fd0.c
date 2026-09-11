/* spd-match: far pct=10.62 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A9FD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004960a0();
int __cdecl FUN_004a9e70();
int __cdecl FUN_004aa1c0();
int __cdecl FUN_0051b8d0();
int __cdecl FUN_0051ba00();
int __cdecl FUN_00674898();
extern int DAT_00736168;
extern int DAT_0073616c;
extern int DAT_0075f240;
extern int DAT_00777b4c;
extern unsigned char *DAT_00777ccc;
extern int _DAT_006cc90c;
extern void LAB_004aa10b(void);
extern void LAB_004aa1a8(void);
void __fastcall FUN_004a9fd0(int * obj, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, int param_6)

{
  int *piVar1;
  int *piVar2;

  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if ((DAT_00777b4c == 1) && (*(int *)(DAT_00777ccc + 0x58a0) == 0)) {
    return;
  }
  iVar7 = *obj;
  uVar5 = (uint)(iVar7 == 1);
  if (param_1 != -1) {
    piVar2 = (int *)(param_2 + 0xa18 + param_1 * 0xc);
    FUN_004960a0();
    iVar3 = FUN_00674898();
    piVar1 = (int *)(param_2 + (param_1 * 3 + 0x285) * 4);
    iVar6 = *piVar1;
    *piVar2 = *piVar2 + iVar3;
    *piVar1 = iVar6 + uVar5;
    if ((param_1 == 1) && (obj[2] == 7)) {
      *(int *)(param_2 + 0xa4c) = *(int *)(param_2 + 0xa4c) + 1;
    }
  }
  if (param_6 != 0) {
    FUN_004960a0();
    uVar4 = FUN_00674898();
    *(undefined4 *)(param_2 + 0xa48) = uVar4;
    *(uint *)(param_2 + 0xa44) = uVar5;
  }
  *(float *)(param_2 + 0xa00) = (float)obj[0x2b] + *(float *)(param_2 + 0xa00);
  *(uint *)(param_2 + 0xa08) = *(int *)(param_2 + 0xa08) + (uint)(*obj == 1);
  *(uint *)(param_2 + 0xa0c) = *(int *)(param_2 + 0xa0c) + (uint)(iVar7 != 1);
  uVar5 = FUN_004a9e70(param_1,param_4,param_5,obj);
  obj[0x56] = uVar5 & 0xff;
  iVar6 = 0;
  iVar7 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar7 + 0x6c) == param_3) goto LAB_004aa10b;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xfc;
    } while (iVar6 < DAT_0073616c);
  }
  iVar7 = 0;
LAB_004aa10b:
  if ((0x513 < param_3) && (param_3 < 0x578)) {
    if (iVar7 == 0) goto LAB_004aa1a8;
    if (DAT_0075f240 == 2) {
      if (param_4 == 0) {
        uVar4 = *(undefined4 *)(iVar7 + 0x88);
      }
      else {
        uVar4 = *(undefined4 *)(iVar7 + 0x84);
      }
      FUN_0051ba00(param_3,uVar4);
      FUN_004aa1c0();
      return;
    }
  }
  if ((iVar7 != 0) && (DAT_0075f240 == 2)) {
    if (param_4 == 0) {
      param_3 = *(undefined4 *)(iVar7 + 0x80);
    }
    else {
      param_3 = *(undefined4 *)(iVar7 + 0x7c);
    }
    FUN_0051b8d0((float)obj[4] * _DAT_006cc90c,param_3);
  }
LAB_004aa1a8:
  FUN_004aa1c0();
  return;
}
