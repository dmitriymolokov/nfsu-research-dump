/* spd-match: far pct=7.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_0040a880();
int __cdecl FUN_0052e3f0();
int __cdecl FUN_00532670();
extern unsigned char *PTR_FUN_006bf3f0;
extern unsigned char *PTR_LAB_006bf3c4;
extern void LAB_00532600(void);
extern void LAB_00684b33(void);
void *ExceptionList;

undefined4 * FUN_00522600(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684b33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[4] = 0;
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_0052e3f0();
  *puVar1 = &PTR_LAB_006bf3c4;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  *param_1 = &PTR_FUN_006bf3f0;
  _eh_vector_constructor_iterator_
            (param_1 + 0xab,0x7c,6,(_func_void_void_ptr *)&LAB_00532600,FUN_0040a880);
  local_14 = param_1 + 0x167;
  local_18 = param_1 + 0x165;
  puVar1 = param_1 + 199;
  puVar4 = param_1 + 0xa5;
  local_10 = 2;
  do {
    iVar5 = 0;
    do {
      *puVar4 = 0;
      puVar1[1] = 0;
      puVar1[-0x1c] = 0;
      *puVar1 = 0;
      puVar1[-1] = 0;
      iVar3 = 0;
      puVar2 = puVar1 + -0xf;
      do {
        puVar2[-6] = 0;
        *puVar2 = 0;
        puVar2[-0xc] = 0;
        *(undefined1 *)((int)puVar1 + iVar3 + -0x24) = 0;
        puVar2[8] = 0;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < 6);
      *(undefined1 *)(puVar1 + 2) = 0;
      FUN_00532670(0x3f800000,0x3f800000,100,0);
      *(undefined4 *)(extraout_ECX + 0x74) = 0x3f800000;
      *(undefined1 *)((int)local_18 + iVar5) = 0;
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 0x1f;
    } while (iVar5 < 3);
    *local_14 = 0xffffffff;
    local_14 = local_14 + 1;
    local_18 = (undefined4 *)((int)local_18 + 3);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  ExceptionList = local_c;
  return param_1;
}
