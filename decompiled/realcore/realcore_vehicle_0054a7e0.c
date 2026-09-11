/* spd-match: far pct=12.82 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054A7E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054a260();
int __cdecl FUN_0054b1a0();
int __cdecl FUN_0054b8e0();
int __cdecl FUN_00664d40();
int __cdecl FUN_00664e00();
int __cdecl FUN_00666ea0();
int __cdecl FUN_00666f90();
int __cdecl FUN_00667950();
extern int DAT_006b9172;
extern int DAT_006bd3bc;
extern int DAT_006bd3c4;
extern int DAT_006bd3cc;
extern int DAT_0073d8d0;
extern int DAT_0073d8dc;
extern int DAT_00777b54;
extern void LAB_0054a9f7(void);
extern void LAB_0054bd60(void);
extern void LAB_0054ce70(void);
int unaff_EDI;
void __fastcall FUN_0054a7e0(char * obj, char param_1)

{
  int iVar1;

  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  code *unaff_EDI;
  undefined1 local_80 [128];
  
  iVar3 = *(int *)(obj + 0x68);
  if (iVar3 == 0) {
    return;
  }
  iVar1 = *(int *)(obj + 0x294);
  if (iVar1 == -1) {
    if ((DAT_00777b54 == 0) && (iVar3 = 0, *obj != '\0')) {
      do {
        iVar1 = iVar3 + 1;
        iVar3 = iVar3 + 1;
      } while (obj[iVar1] != '\0');
      if (0 < iVar3) {
        FUN_0054b8e0(1);
        goto LAB_0054a9f7;
      }
    }
    obj[0x78] = '\0';
    obj[0x79] = '\0';
    obj[0x7a] = '\0';
    obj[0x7b] = '\0';
    obj[0x7c] = '\0';
    obj[0x7d] = '\0';
    obj[0x7e] = '\0';
    obj[0x7f] = '\0';
    obj[0x80] = '\0';
    obj[0x81] = '\0';
    obj[0x82] = '\0';
    obj[0x83] = '\0';
    obj[0x84] = '\0';
    obj[0x540] = '\x12';
    obj[0x541] = '\0';
    obj[0x542] = '\0';
    obj[0x543] = '\0';
    *(code **)(obj + 0x544) = unaff_EDI;
    if (unaff_EDI != (code *)0x0) {
      (*unaff_EDI)();
    }
    obj[0x540] = '\0';
    obj[0x541] = '\0';
    obj[0x542] = '\0';
    obj[0x543] = '\0';
    obj[0x544] = '\0';
    obj[0x545] = '\0';
    obj[0x546] = '\0';
    obj[0x547] = '\0';
  }
  else if ((obj[100] & 1U) == 0) {
    obj[0x540] = '\x12';
    obj[0x541] = '\0';
    obj[0x542] = '\0';
    obj[0x543] = '\0';
    *(code **)(obj + 0x544) = unaff_EDI;
    local_80[0] = 0;
    if (param_1 == '\0') {
      uVar2 = FUN_00664d40(iVar3,5,iVar1);
      iVar3 = FUN_00666ea0(*(undefined4 *)(obj + 0x74),uVar2);
      if (iVar3 == 0) {
        puVar4 = &DAT_006b9172;
      }
      else {
        puVar4 = (undefined1 *)(iVar3 + 4);
      }
      FUN_00667950(local_80,0x80,&DAT_006bd3bc,puVar4);
      if (DAT_0073d8d0 == 0) {
        return;
      }
      FUN_00664e00(DAT_0073d8d0,0x676c6561,local_80,&LAB_0054ce70,0);
      return;
    }
    FUN_00667950(local_80,0x80,&DAT_006bd3c4,&DAT_006bd3cc);
    if (DAT_0073d8d0 != 0) {
      FUN_00664e00(DAT_0073d8d0,0x6368616c,local_80,&LAB_0054ce70,0);
    }
  }
  else {
    uVar2 = FUN_00664d40(iVar3,5,iVar1);
    iVar3 = FUN_00666ea0(*(undefined4 *)(obj + 0x74),uVar2);
    if ((iVar3 != 0) && (*(char *)(iVar3 + 4) != '\0')) {
      obj[0x540] = '\x13';
      obj[0x541] = '\0';
      obj[0x542] = '\0';
      obj[0x543] = '\0';
      *(code **)(obj + 0x544) = unaff_EDI;
      local_80[0] = 0;
      if (param_1 == '\0') {
        uVar2 = FUN_0054a260();
        FUN_00667950(local_80,0x80,&DAT_006bd3bc,uVar2);
        FUN_0054b1a0(0x6764656c);
        return;
      }
      FUN_00667950(local_80,0x80,&DAT_006bd3c4,&DAT_006bd3cc);
      FUN_0054b1a0(0x6368616c);
    }
  }
LAB_0054a9f7:
  if (param_1 != '\0') {
    FUN_00666f90(DAT_0073d8dc,0,0,&LAB_0054bd60);
  }
  return;
}
