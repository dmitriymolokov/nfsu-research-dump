/* spd-match: far pct=15.06 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054A370 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00438a60();
int __cdecl FUN_004ab510();
int __cdecl FUN_0054cb30();
int __cdecl FUN_00565da0();
int __cdecl FUN_00664e00();
int __cdecl FUN_00667d70();
extern int DAT_006f227c;
extern int DAT_007346c8;
extern int DAT_007346d0;
extern int DAT_0073d8d0;
extern int DAT_0073dda0;
extern int DAT_0073ddb0;
extern int DAT_00777c70;
extern int _DAT_0073dda4;
void __fastcall FUN_0054a370(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
  char cVar1;

  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  uint uVar6;
  undefined1 local_2a4 [36];
  undefined1 local_280 [128];
  undefined1 local_200 [512];
  
  if (*(int *)(obj + 0x68) != 0) {
    *(undefined4 *)(obj + 0x544) = param_4;
    *(undefined4 *)(obj + 0x540) = 8;
    DAT_0073ddb0 = param_2;
    *(uint *)(obj + 100) = *(uint *)(obj + 100) | 1;
    DAT_007346c8 = 1;
    local_200[0] = 0;
    iVar2 = FUN_004ab510();
    uVar6 = 0;
    cVar1 = FUN_00438a60();
    if (cVar1 != '\0') {
      uVar6 = 0x40000;
    }
    if (unaff_EBX == 0) {
      uVar6 = uVar6 | 2;
    }
    uVar5 = DAT_006f227c % 1000;
    uVar4 = DAT_006f227c ^ 0x1d872b41;
    uVar3 = uVar4 >> 5 ^ uVar4;
    DAT_006f227c = uVar3 << 0x1b ^ uVar3 ^ uVar4;
    FUN_00565da0("%04d_%s",uVar5,param_3);
    local_280[0] = 0;
    FUN_00667d70(local_280,0x80,"TRACK=%d DIR=%d LAPS=%d MYIP=%d",*(undefined4 *)(iVar2 + 8),
                 *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),DAT_007346d0);
    FUN_00667d70(local_200,0x200,"NAME=%s ROOM=%s MAXSIZE=%d MINSIZE=2 SYSFLAGS=%d PARAMS=%s",
                 local_2a4,&DAT_00777c70,(unaff_EBX != 0) * '\x02' + '\x02',uVar6,local_280);
    if (DAT_0073d8d0 != 0) {
      FUN_00664e00(DAT_0073d8d0,0x67637265,local_200,FUN_0054cb30,0);
    }
    _DAT_0073dda4 = DAT_0073dda0;
    DAT_0073dda0 = 0x12;
  }
  return;
}
