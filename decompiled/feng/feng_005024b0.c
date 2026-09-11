/* spd-match: far pct=6.79 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005024B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_004ee590();
int __cdecl FUN_004fe2e0();
int __cdecl FUN_004fe3d0();
int __cdecl FUN_004fe570();
int __cdecl FUN_005007d0();
extern unsigned char *PTR_FUN_006c181c;
extern void LAB_004fe230(void);
extern void LAB_00502628(void);
undefined4 __fastcall FUN_005024b0(int obj, int param_1, ushort *param_2, char param_3)

{
  ushort *puVar1;
  ushort uVar2;
  void *pvVar3;

  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar1 = param_2;
  puVar4 = (ushort *)(obj + (int)param_2);
  puVar7 = (undefined4 *)0x0;
  iVar6 = -1;
  param_2 = (ushort *)0x0;
  puVar5 = puVar4;
  do {
    if (puVar4 <= puVar1) {
      return CONCAT31((int3)((uint)puVar5 >> 8),1);
    }
    uVar2 = *puVar1;
    if (uVar2 < 0x7353) {
      if (uVar2 == 0x7352) {
        FUN_004fe2e0(param_2);
      }
      else if (uVar2 == 0x434d) {
        FUN_004fe3d0(puVar7,*(undefined4 *)(puVar1 + 2));
      }
      else if (uVar2 == 0x694d) {
        iVar6 = *(int *)(puVar1 + 2);
        if ((param_3 == '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
          for (puVar7 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x3c);
              (puVar7 != (undefined4 *)0x0 && (puVar7[3] != iVar6));
              puVar7 = (undefined4 *)puVar7[1]) {
          }
          if (puVar7 != (undefined4 *)0x0) {
            pvVar3 = (void *)puVar7[5];
            if (pvVar3 != (void *)0x0) {
              _eh_vector_destructor_iterator_
                        (pvVar3,0xc,*(int *)((int)pvVar3 + -4),(_func_void_void_ptr *)&LAB_004fe230)
              ;
              _free((void *)((int)pvVar3 + -4));
            }
            puVar7[5] = 0;
            puVar7[4] = 0;
            iVar6 = -1;
            goto LAB_00502628;
          }
        }
        puVar7 = (undefined4 *)FUN_004fe570();
        puVar7[1] = 0xabadcafe;
        puVar7[2] = 0xabadcafe;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        *puVar7 = &PTR_FUN_006c181c;
        puVar7[3] = iVar6;
        if (param_3 == '\0') {
          FUN_004ee590();
          iVar6 = -1;
        }
        else {
          FUN_005007d0();
          iVar6 = -1;
        }
      }
      else if (uVar2 == 0x6952) {
        iVar6 = iVar6 + 1;
        param_2 = (ushort *)(puVar7[5] + iVar6 * 0xc);
        *(undefined4 *)param_2 = *(undefined4 *)(puVar1 + 2);
      }
    }
    else if (uVar2 == 0x7452) {
      *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(puVar1 + 2);
    }
    else if (uVar2 == 0x7552) {
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(puVar1 + 2);
    }
LAB_00502628:
    puVar5 = (ushort *)(uint)puVar1[1];
    puVar1 = (ushort *)((int)(puVar1 + 2) + (int)puVar5);
  } while( true );
}
