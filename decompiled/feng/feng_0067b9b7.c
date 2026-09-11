/* spd-match: far pct=11.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00677f42();
extern int DAT_0069ed50;
extern int DAT_0069ed58;
extern int DAT_0069ed68;
extern int DAT_0069ede8;
extern int DAT_0069ee44;
extern int DAT_0069ee58;
extern int DAT_006eb720;
extern unsigned char *PTR_DAT_0069ed30;
extern unsigned char *PTR_DAT_0069edf0;
extern unsigned char *PTR_FUN_006ebe30;
extern void LAB_0067ba64(void);
extern void LAB_0067bab1(void);
extern void LAB_0067bb6c(void);
extern void LAB_0067bb73(void);
extern void LAB_0067bbd3(void);
extern void LAB_0067bbfb(void);
extern void LAB_0067bc05(void);
extern void LAB_0067bc38(void);
int unaff_retaddr;

void FUN_0067b9b7(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  undefined4 local_28;
  undefined **local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  if (0xa1 < param_4) {
    if (param_4 < 0x3eb) {
      if (param_4 != 0x3ea) {
        if (param_4 == 0xa2) {
          local_28 = 4;
          goto LAB_0067bb6c;
        }
        if (param_4 == 0xa6) {
          local_28 = 3;
          local_24 = (undefined **)0x6ac8f8;
        }
        else {
          if (param_4 != 0xaa) {
            if (param_4 == 0xab) {
              local_24 = (undefined **)&DAT_0069ed58;
              goto LAB_0067bc05;
            }
            if (param_4 == 1000) {
              local_24 = (undefined **)&DAT_0069ed68;
            }
            else {
              if (param_4 != 0x3e9) {
                return;
              }
              local_24 = (undefined **)0x69ed60;
            }
            goto LAB_0067bbfb;
          }
          local_28 = 2;
          local_24 = (undefined **)&DAT_0069ed58;
        }
        goto LAB_0067bb73;
      }
      local_24 = &PTR_DAT_0069edf0;
    }
    else if (param_4 == 0x3eb) {
      local_24 = (undefined **)&DAT_0069ee58;
    }
    else if (param_4 == 0x3ec) {
      local_24 = (undefined **)&DAT_0069ee44;
    }
    else if (param_4 == 0x3ed) {
      local_24 = (undefined **)0x69edcc;
    }
    else {
      if (param_4 == 0x3ee) goto LAB_0067bbd3;
      if (param_4 != 0x3ef) {
        return;
      }
      local_24 = (undefined **)&DAT_0069ed50;
    }
LAB_0067bbfb:
    *param_3 = *param_1;
    goto LAB_0067bc05;
  }
  if (param_4 == 0xa1) {
    local_28 = 3;
LAB_0067bb6c:
    local_24 = (undefined **)&DAT_0069ede8;
    goto LAB_0067bb73;
  }
  if (param_4 < 0x19) {
    if (param_4 == 0x18) {
      local_28 = 3;
      goto LAB_0067ba64;
    }
    if (param_4 == 2) {
      local_28 = 2;
      local_24 = (undefined **)&DAT_0069ed68;
    }
    else {
      if (param_4 == 3) {
        local_24 = (undefined **)&DAT_0069ed68;
LAB_0067bc05:
        local_20 = *param_1;
        local_28 = 1;
        local_18 = *param_2;
        local_10 = *param_3;
        iVar1 = (*(code *)PTR_FUN_006ebe30)(&local_28);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_00677f42();
          *puVar2 = 0x21;
        }
        goto LAB_0067bc38;
      }
      if (param_4 == 8) {
        local_28 = 2;
        local_24 = (undefined **)0x69ed60;
      }
      else {
        if (param_4 == 9) {
          local_24 = (undefined **)0x69ed60;
          goto LAB_0067bc05;
        }
        if (param_4 != 0xe) {
          if (param_4 != 0xf) {
            return;
          }
          local_24 = &PTR_DAT_0069edf0;
          goto LAB_0067bab1;
        }
        local_28 = 3;
        local_24 = &PTR_DAT_0069edf0;
      }
    }
  }
  else {
    if (param_4 == 0x19) {
      local_24 = &PTR_DAT_0069ed30;
LAB_0067bab1:
      local_20 = *param_1;
      local_18 = *param_2;
      local_10 = *param_3;
      local_28 = 4;
      (*(code *)PTR_FUN_006ebe30)(&local_28);
      goto LAB_0067bc38;
    }
    if (param_4 == 0x1a) {
      *param_3 = 0x3ff0000000000000;
      return;
    }
    if (param_4 != 0x1b) {
      if (param_4 != 0x1c) {
        if (param_4 != 0x1d) {
          return;
        }
        local_24 = &PTR_DAT_0069ed30;
        goto LAB_0067bbfb;
      }
LAB_0067bbd3:
      local_24 = &PTR_DAT_0069ed30;
      goto LAB_0067bc05;
    }
    local_28 = 2;
LAB_0067ba64:
    local_24 = &PTR_DAT_0069ed30;
  }
LAB_0067bb73:
  local_20 = *param_1;
  local_18 = *param_2;
  local_10 = *param_3;
  iVar1 = (*(code *)PTR_FUN_006ebe30)(&local_28);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_00677f42();
    *puVar2 = 0x22;
  }
LAB_0067bc38:
  *param_3 = local_10;
  return;
}
