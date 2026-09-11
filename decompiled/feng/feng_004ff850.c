/* spd-match: far pct=11.48 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_004ee5e0();
int __cdecl FUN_004ee670();
extern unsigned char *PTR_FUN_006c17f4;
extern unsigned char *PTR_FUN_006c1828;
extern unsigned char *PTR_LAB_006c2c4c;
extern unsigned char *PTR_LAB_006c2c50;
extern void LAB_004fe970(void);
extern void LAB_006853f4(void);
void *ExceptionList;

void FUN_004ff850(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006853f4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c17f4;
  local_4 = 5;
  _free((void *)param_1[0xb]);
  if ((void *)param_1[0x17] != (void *)0x0) {
    _free((void *)param_1[0x17]);
  }
  pvVar1 = (void *)param_1[0x19];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x10,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_004fe970);
    _free((void *)((int)pvVar1 + -4));
  }
  if ((void *)param_1[0x23] != (void *)0x0) {
    _free((void *)param_1[0x23]);
  }
  puVar2 = (undefined4 *)0x0;
  if (param_1[0x26] != 0) {
    puVar2 = (undefined4 *)FUN_004ee670();
  }
  while (puVar2 != (undefined4 *)0x0) {
    _free((void *)puVar2[4]);
    (**(code **)*puVar2)(1);
    puVar2 = (undefined4 *)param_1[0x26];
    if (puVar2 != (undefined4 *)0x0) {
      param_1[0x26] = puVar2[1];
      if (puVar2 == (undefined4 *)param_1[0x27]) {
        param_1[0x27] = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
      }
      if (puVar2[1] != 0) {
        *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
      }
      puVar2[1] = 0xabadcafe;
      puVar2[2] = 0xabadcafe;
      param_1[0x25] = param_1[0x25] + -1;
    }
  }
  if ((void *)param_1[0x1f] != (void *)0x0) {
    _free((void *)param_1[0x1f]);
  }
  (*(unsigned char *)&(local_4)) = 4;
  param_1[0x24] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  _free((void *)param_1[0x21]);
  (*(unsigned char *)&(local_4)) = 2;
  param_1[0x1a] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  (*(unsigned char *)&(local_4)) = 1;
  param_1[0x12] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  param_1[0xe] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  *param_1 = &PTR_FUN_006c1828;
  if ((void *)param_1[3] != (void *)0x0) {
    _free((void *)param_1[3]);
  }
  *param_1 = &PTR_LAB_006c2c50;
  ExceptionList = pvStack_c;
  return;
}
