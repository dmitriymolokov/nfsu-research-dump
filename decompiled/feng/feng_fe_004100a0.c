/* spd-match: far pct=13.66 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004100A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040bc10();
extern int DAT_007010ac;
extern int DAT_007010b0;
extern int DAT_007010b4;
extern unsigned char *DAT_0073640c;
extern int _DAT_006ccc34;
extern char stack0xfffffed4;
void __fastcall FUN_004100a0(int * obj)

{

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fStack_138;
  int iStack_134;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float fStack_dc;
  float afStack_a8 [3];
  undefined1 auStack_9c [12];
  undefined1 local_90 [28];
  undefined1 auStack_74 [112];
  
  iVar1 = *obj;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0x3f800000;
  local_f4 = 0;
  local_e8 = 0;
  local_e4 = 0x3f800000;
  local_f0 = 0x3f000000;
  local_ec = 0x3f000000;
  iStack_134 = iVar1 + 0x80;
  FUN_004100a0(local_90);
  FUN_004100a0(auStack_9c,auStack_9c,&stack0xfffffed4);
  if (*(int *)(DAT_0073640c + 0xc) == 0) {
    piVar2 = *(int **)(DAT_0073640c + 0x18);
    uVar3 = *(undefined4 *)(DAT_0073640c + 0x38);
    iVar1 = *piVar2;
    pfVar4 = afStack_a8;
  }
  else {
    FUN_0040bc10();
    FUN_004100a0(&local_e8,iVar1 + 0x80,&fStack_138);
    FUN_004100a0(&local_f4,auStack_74,&local_f4);
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x98))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x38),&local_100);
    fStack_138 = fStack_dc * _DAT_006ccc34;
    iStack_134 = 0;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0x3f800000;
    pfVar4 = &fStack_138;
    piVar2 = *(int **)(DAT_0073640c + 0x18);
    uVar3 = *(undefined4 *)(DAT_0073640c + 0xb8);
    iVar1 = *piVar2;
  }
  (**(code **)(iVar1 + 0x98))(piVar2,uVar3,pfVar4);
  local_fc = DAT_007010b4;
  local_104 = DAT_007010ac;
  local_100 = DAT_007010b0;
  local_f8 = 0;
  (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x88))
            (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x70),&local_104);
  return;
}
