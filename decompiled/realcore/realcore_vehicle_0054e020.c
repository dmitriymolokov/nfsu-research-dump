/* spd-match: far pct=9.80 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2113/batches/20260724T133058Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_005493d0();
int __cdecl FUN_00664100();
int __cdecl FUN_006641f0();
int __cdecl FUN_00674898();
extern int DAT_00704b70;
extern int DAT_00704b74;
extern int DAT_00704b78;
extern int DAT_00730150;
extern code *DAT_00730154;
extern code *DAT_0073015c;
extern int DAT_00734f74;
extern int DAT_00734f7c;
extern int DAT_0073ad3c;
extern int DAT_0073d864;
extern int _DAT_00704b7c;
extern code *_DAT_00730158;
extern code *_DAT_00730160;

void FUN_0054e020(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_218 [4];
  ushort local_214;
  char local_212;
  undefined1 local_210 [528];
  
  if (DAT_00734f7c == 0) {
    if (DAT_00734f74 != 0) {
      if ((DAT_0073d864 == 0) || (DAT_0073d864 == 0x7fffffff)) {
        DAT_0073d864 = FUN_00674898();
      }
      DAT_00734f7c = FUN_005493d0();
      if (DAT_00734f7c != 0) {
                    
                    
        (*_DAT_00730158)();
        return;
      }
      if (((DAT_0073d864 != 0) && (DAT_0073d864 != 0x7fffffff)) && (DAT_0073d864 < DAT_0073ad3c)) {
        (*DAT_00730154)(0);
      }
    }
  }
  else {
    iVar2 = FUN_00664100(DAT_00734f7c);
    if ((*(char *)(iVar2 + 0x45) != '\0') && (DAT_00734f7c != 0)) {
      while( true ) {
        iVar2 = FUN_006641f0(DAT_00734f7c,local_218,1);
        if (iVar2 == 0) break;
        uVar4 = (uint)local_214;
        bVar5 = local_212 == '\x05';
        iVar2 = FUN_00674898();
        uVar1 = DAT_00704b78;
        if (DAT_00704b70 <= -iVar2 - (int)DAT_00704b74) {
          iVar2 = (-iVar2 - (int)DAT_00704b74) / DAT_00704b70;
          DAT_00704b74 = ((int)DAT_00704b74) + (int)DAT_00704b70 * iVar2;
          DAT_00704b78 = 0;
          _DAT_00704b7c = (iVar2 != 1) - 1 & uVar1;
        }
        DAT_00704b78 = ((int)DAT_00704b78) + uVar4;
        (*DAT_0073015c)(local_210,uVar4,bVar5);
        if (DAT_00734f7c == 0) {
          return;
        }
      }
      if (DAT_00734f7c != 0) {
        piVar3 = (int *)FUN_00664100(DAT_00734f7c);
        if (DAT_00730150 < (uint)(*piVar3 - piVar3[8])) {
                    
                    
          (*_DAT_00730160)();
          return;
        }
      }
    }
  }
  return;
}
