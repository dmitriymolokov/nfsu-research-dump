/* spd-match: far pct=18.64 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042D520 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0042c670();
int __cdecl FUN_0042c6d0();
int __cdecl FUN_0042e190();
int __cdecl FUN_0042e1e0();
int __cdecl FUN_0042e230();
int __cdecl FUN_0042e400();
int __cdecl FUN_00574020();
int __cdecl FUN_005740b0();
int __cdecl FUN_00574120();
extern int DAT_007361c4;
extern unsigned char *DAT_007361f0;
extern int DAT_0073b3ec;
extern void LAB_0042abb0(void);
extern void LAB_0042abd0(void);
extern void LAB_0042d90e(void);
extern void LAB_0042d9a0(void);
extern void LAB_0042d9d0(void);
void __fastcall FUN_0042d520(int obj, undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;

  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  switch(*(undefined4 *)(obj + 0x278)) {
  case 2:
  case 3:
  case 4:
    iVar3 = FUN_00574120();
    if (iVar3 != 0) {
      FUN_005740b0(0xab);
    }
    iVar3 = FUN_00574120();
    if (iVar3 != 0) {
      FUN_005740b0(0x75);
    }
    iVar3 = FUN_00574120();
    if (iVar3 != 0) {
      FUN_005740b0(0xaa);
    }
    iVar3 = FUN_00574120();
    if (iVar3 != 0) {
      FUN_005740b0(0x76);
    }
    iVar3 = FUN_00574120();
    if (iVar3 != 0) {
      FUN_005740b0(0xa3);
    }
    iVar3 = FUN_00574120();
    if (iVar3 != 0) {
      FUN_005740b0(0xa0);
    }
    iVar3 = FUN_00574120();
    if (iVar3 != 0) {
      FUN_005740b0(0xa1);
    }
    iVar3 = FUN_00574120();
    if (iVar3 != 0) {
      FUN_005740b0(0xa2);
    }
    FUN_005740b0(0x9a);
    FUN_005740b0(0x99);
    FUN_005740b0(0x9b);
    FUN_005740b0(0x9c);
    FUN_005740b0(0x77);
    FUN_005740b0(0x78);
    FUN_005740b0(0x79);
    FUN_005740b0(0x7a);
    if (*(int *)(obj + 0x278) == 3) {
      FUN_0042e1e0();
    }
    else if (*(int *)(obj + 0x278) == 4) {
      FUN_0042e400();
    }
    else if ((*(int *)(obj + 4) != 0) &&
            (piVar1 = *(int **)(*(int *)(obj + 4) + 0x30), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x18))();
    }
    break;
  case 5:
    FUN_005740b0(0xab);
    break;
  case 7:
  case 8:
    FUN_005740b0(0xac);
    FUN_005740b0(0xab);
  }
  puVar2 = DAT_0073b3ec;
  if (*(int *)(obj + 0x10) == 0) {
    puVar4 = (undefined4 *)FUN_0040a880();
    for (; puVar2 != puVar4; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[2] == 0x44) {
        FUN_005740b0(0x44);
        break;
      }
    }
  }
  *(undefined4 *)(obj + 0x278) = param_1;
  switch(param_1) {
  case 2:
  case 3:
  case 4:
    if (*DAT_007361f0 == 4) {
      FUN_00574020(0xab,&LAB_0042abb0);
      FUN_00574020(0x75,&LAB_0042abb0);
      FUN_00574020(0xaa,&LAB_0042abb0);
    }
    FUN_00574020(0x76,&LAB_0042abb0);
    FUN_00574020(0x9a,&LAB_0042abb0);
    FUN_00574020(0x99,&LAB_0042abb0);
    FUN_00574020(0x9b,&LAB_0042abb0);
    FUN_00574020(0x9c,&LAB_0042abb0);
    FUN_00574020(0x77,&LAB_0042abb0);
    FUN_00574020(0x78,&LAB_0042abb0);
    FUN_00574020(0x79,&LAB_0042abb0);
    FUN_00574020(0x7a,&LAB_0042abb0);
    if (*(int *)(obj + 0x278) == 4) {
      FUN_00574020(0xa0,&LAB_0042abb0);
      FUN_00574020(0xa1,&LAB_0042abb0);
      FUN_00574020(0xa2,0,0);
      FUN_0042e230(obj);
      FUN_0042c6d0(obj,0x12,0);
    }
    else {
      if (*(int *)(obj + 0x278) == 3) {
        FUN_0042e190();
      }
      else {
        FUN_0042c670(0);
      }
      if ((*(int *)(obj + 4) != 0) &&
         (piVar1 = *(int **)(*(int *)(obj + 4) + 0x30), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(obj + 8));
        (**(code **)(*piVar1 + 0x14))();
      }
    }
    break;
  case 5:
    FUN_00574020(0xab,&LAB_0042abb0);
    break;
  case 7:
    FUN_00574020(0xac,&LAB_0042d9a0);
    puVar5 = &LAB_0042d9a0;
    goto LAB_0042d90e;
  case 8:
    FUN_00574020(0xac,&LAB_0042d9d0);
    puVar5 = &LAB_0042d9d0;
LAB_0042d90e:
    FUN_00574020(0xab,puVar5);
  }
  iVar3 = *(int *)(obj + 0x278);
  if (((1 < iVar3) && (((iVar3 < 5 || (iVar3 == 6)) && (DAT_007361c4 < 2)))) &&
     (*(int *)(obj + 0x10) == 0)) {
    FUN_00574020(0x44,&LAB_0042abd0);
  }
  return;
}
