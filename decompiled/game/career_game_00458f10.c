/* spd-match: far pct=7.20 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00458F10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f5e0();
int __cdecl FUN_00424df0();
int __cdecl FUN_004590a0();
int __cdecl FUN_004594d0();
int __cdecl FUN_00459710();
int __cdecl FUN_0045a7d0();
int __cdecl FUN_0045a8c0();
extern int DAT_006cc7a4;
extern int _DAT_006cc8bc;
extern void LAB_00459028(void);
extern void LAB_00459071(void);
void __fastcall FUN_00458f10(float * obj, int param_1, float param_2)

{
  char cVar1;
  float *pfVar2;

  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_20 [28];
  
  cVar1 = *(char *)obj;
  if (cVar1 != '\0') {
    if ((ABS(param_2) < _DAT_006cc8bc == (ABS(param_2) == _DAT_006cc8bc)) &&
       (DAT_006cc7a4 <= param_2)) {
      iVar7 = 0;
      if (0 < cVar1) {
        pfVar3 = (float *)FUN_0041f5e0();
        pfVar4 = (float *)FUN_00424df0();
        pfVar2 = obj;
        do {
          if (DAT_006cc7a4 < (pfVar2[5] - pfVar3[1]) * pfVar4[1] + (pfVar2[4] - *pfVar3) * *pfVar4)
          break;
          iVar7 = iVar7 + 1;
          pfVar2 = pfVar2 + 4;
        } while (iVar7 < *(char *)obj);
      }
      if (iVar7 < cVar1) {
        if (0 < iVar7) {
          FUN_0045a7d0(0);
        }
        iVar7 = FUN_004590a0(param_2,local_20);
        if (iVar7 < *(char *)obj + -1) {
          if (iVar7 < 0) goto LAB_00459028;
          *(char *)obj = (char)iVar7 + '\x01';
          uVar5 = (uint)*(byte *)(iVar7 + 0x18c + (int)obj);
          uVar6 = (uint)*(ushort *)((int)obj + iVar7 * 2 + 0x164);
          cVar1 = *(char *)(iVar7 + 0x150 + (int)obj);
        }
        else {
          if (-1 < iVar7) goto LAB_00459071;
LAB_00459028:
          iVar7 = FUN_00459710(*(undefined4 *)(param_1 + 0x3d0),param_1 + 0x60,param_1 + 0x70);
          cVar1 = *(char *)(iVar7 + 0x150 + (int)obj);
          uVar6 = (uint)*(short *)((int)obj + iVar7 * 2 + 0x164);
          uVar5 = (uint)*(char *)(iVar7 + 0x18c + (int)obj);
          *(undefined1 *)obj = 0;
        }
        FUN_004594d0((int)cVar1,uVar6,uVar5,0);
        FUN_0045a8c0();
        goto LAB_00459071;
      }
    }
    *(undefined1 *)obj = 0;
  }
  obj[0x6b] = 0.0;
LAB_00459071:
  *(undefined1 *)(obj + 0x6c) = 0xff;
  *(undefined1 *)((int)obj + 0x1b1) = 0;
  obj[0x69] = 0.0;
  obj[0x6a] = 0.0;
  return;
}
