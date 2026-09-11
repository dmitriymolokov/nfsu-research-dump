/* Decompiled from Speed.exe @ 00559030 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00559030(void)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int *piVar5;
  int local_8;
  
  if (*(char *)(unaff_EBX + 0x888) != '\0') {
    piVar5 = (int *)(unaff_EBX + 0x44);
    local_8 = 8;
    do {
      if ((*piVar5 != 0) && (cVar2 = FUN_004f7eb0(unaff_EBX), cVar2 != '\0')) {
        uVar1 = *(uint *)(*piVar5 + 0x10);
        if (uVar1 < 0xda96ef8f) {
          if (uVar1 == 0xda96ef8e) {
LAB_00559133:
            uVar3 = *(undefined4 *)(unaff_EBX + 100);
            uVar4 = FUN_004f6670();
            if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
              FUN_004f0700(0x9120409e,*piVar5,uVar3,uVar4,0);
            }
          }
          else {
            switch(uVar1) {
            case 0x70355aa6:
              break;
            case 0x70355aa7:
              break;
            case 0x70355aa8:
              break;
            case 0x70355aa9:
              break;
            default:
              goto switchD_00559086_default;
            }
            uVar3 = FUN_004f6670();
            FUN_004f6540(0xc407210,uVar3);
          }
        }
        else {
          if (uVar1 == 0xda96ef8f) goto LAB_00559133;
          if (uVar1 == 0xda9a39d4) {
            uVar3 = FUN_004f6670();
            FUN_004f6540(0xb5971bf1,uVar3);
          }
          else if (uVar1 == 0xda9a39d5) {
            uVar3 = FUN_004f6670();
            FUN_004f6540(0xb5971bf1,uVar3);
          }
        }
      }
switchD_00559086_default:
      piVar5 = piVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

