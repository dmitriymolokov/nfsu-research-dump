/* spd-match: far pct=4.69 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_006635d0();
int __cdecl FUN_00669660();
int __cdecl FUN_006698c0();
int __cdecl FUN_0067101f();
extern int DAT_006cc568;
extern int DAT_006eb720;
int unaff_retaddr;

undefined4 FUN_006637b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint unaff_retaddr;
  uint local_108;
  undefined1 local_104 [256];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = 0;
    piVar3 = (int *)(param_1 + 0x7c);
    do {
      if (*piVar3 != 0) break;
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar1 < 4);
    if (uVar1 == 4) {
      uVar1 = FUN_00669660(*(int *)(param_1 + 0x68),"GmUtil",param_1 + 0x24,&local_108,0);
      if (uVar1 != 0) {
        if (local_108 < uVar1) {
          *(uint *)(param_1 + 0x74) = local_108;
          *(uint *)(param_1 + 0x70) = uVar1;
          FUN_0067101f(local_104,"%d.%d.%d.%d%s",uVar1 >> 0x18,uVar1 >> 0x10 & 0xff,
                       uVar1 >> 8 & 0xff,uVar1 & 0xff);
          FUN_006635d0(param_1,*(uint *)(param_1 + 0x78) | 2,local_104);
        }
        else {
          *(uint *)(param_1 + 0x70) = local_108;
          *(uint *)(param_1 + 0x74) = uVar1;
          FUN_0067101f(local_104,&DAT_006cc568,param_1 + 0x24);
          FUN_006635d0(param_1,*(uint *)(param_1 + 0x78) | 1,local_104);
        }
      }
    }
  }
  uVar1 = 0;
  piVar3 = (int *)(param_1 + 0x7c);
  do {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      if (uVar4 == 0) {
        uVar4 = (**(code **)(iVar2 + 0x28))(iVar2);
      }
      iVar2 = (**(code **)(*piVar3 + 0x24))(*piVar3);
      if (iVar2 == 3) {
        if (piVar3[1] == 0) {
          piVar3[1] = uVar4;
        }
        if ((uint)(piVar3[2] + piVar3[1]) <= uVar4) {
          if ((int)uVar1 < 0) {
            return 0;
          }
          uVar4 = 0;
          piVar3 = (int *)(param_1 + 0x7c);
          do {
            if ((uVar4 != uVar1) && (iVar2 = *piVar3, iVar2 != 0)) {
              (**(code **)(iVar2 + 4))(iVar2);
              *piVar3 = 0;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 3;
          } while (uVar4 < 4);
          if (*(int *)(param_1 + 100) != 0) {
            FUN_006698c0(*(int *)(param_1 + 100));
            *(undefined4 *)(param_1 + 100) = 0;
          }
          if (*(int *)(param_1 + 0x68) != 0) {
            FUN_006698c0(*(int *)(param_1 + 0x68));
            *(undefined4 *)(param_1 + 0x68) = 0;
          }
          return *(undefined4 *)(param_1 + 0x7c + uVar1 * 0xc);
        }
      }
    }
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 3;
    if (3 < uVar1) {
      return 0;
    }
  } while( true );
}
