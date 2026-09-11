/* spd-match: far pct=7.54 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049D760 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6910();
int __cdecl FUN_00586580();
extern int DAT_00735710;
extern int DAT_00736168;
extern int DAT_0073616c;
extern unsigned char *DAT_00777b7c;
extern unsigned char *DAT_00777bec;
extern unsigned char *DAT_00777bf4;
extern int DAT_0078a2f0;
extern int DAT_0078a31c;
extern unsigned char *PTR_LAB_006c7968;
extern void LAB_0049d8ec(void);
void __fastcall FUN_0049d760(int obj, int param_1)

{

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_2c;
  undefined1 local_20 [32];
  
  iVar4 = *(char *)(obj + 10) * 0x15c;
  iVar3 = 0;
  iVar1 = 0;
  iVar2 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar2 + 0x6c) == DAT_0078a2f0) {
        if ((*(byte *)(iVar2 + 0x74) & 4) != 0) {
          iVar2 = *(int *)(param_1 + 0x120);
          iVar3 = 1;
          if (iVar2 != 0) {
            *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
            puVar5 = DAT_00735710;
            bVar6 = DAT_00735710 != (undefined4 *)0x0;
            *(undefined4 *)(iVar2 + 0x5c) = 0x174cc8dc;
            if (bVar6) {
              (**(code **)*puVar5)(iVar2);
            }
            *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
          }
          FUN_00586580(local_20);
          FUN_004f68a0(local_20);
          FUN_004f68a0(&PTR_LAB_006c7968,*(undefined4 *)(&DAT_00777bf4 + iVar4));
          goto LAB_0049d8ec;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xfc;
    } while (iVar1 < DAT_0073616c);
  }
  if (*(int *)(&DAT_00777b7c + iVar4) == 1) {
    local_2c = DAT_0078a31c;
  }
  else {
    local_2c = *(int *)(&DAT_00777bec + iVar4);
  }
  if (0 < local_2c) {
    puVar5 = (undefined4 *)(&DAT_00777bf4 + iVar4);
    do {
      iVar3 = iVar3 + 1;
      FUN_004f68a0(&PTR_LAB_006c7968,iVar3);
      FUN_00586580(local_20);
      FUN_004f68a0(local_20);
      FUN_004f68a0(&PTR_LAB_006c7968,*puVar5);
      puVar5 = puVar5 + 1;
    } while (iVar3 < local_2c);
    if (9 < iVar3) {
      return;
    }
  }
LAB_0049d8ec:
  puVar5 = (undefined4 *)(param_1 + 0x80 + iVar3 * 4);
  do {
    FUN_004f6910(puVar5[-10]);
    FUN_004f6910(*puVar5);
    FUN_004f6910(puVar5[10]);
    FUN_004f6910(*(undefined4 *)(param_1 + 0x128 + (iVar3 / 2) * 4));
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar3 < 10);
  return;
}
