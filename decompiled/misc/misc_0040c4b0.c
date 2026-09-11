/* Decompiled from Speed.exe @ 0040c4b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0040c4b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00702a78;
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 < 0x89f23a15) {
    if (uVar1 == 0x89f23a14) {
LAB_0040c55e:
      *(undefined4 *)(param_1 + 0x50) = DAT_00702a58;
      *(undefined4 *)(param_1 + 0x54) = DAT_00702a68;
      return;
    }
    if (uVar1 < 0x3ed70c44) {
      if (uVar1 == 0x3ed70c43) {
LAB_0040c53a:
        *(undefined4 *)(param_1 + 0x50) = DAT_00702a54;
        *(undefined4 *)(param_1 + 0x54) = DAT_00702a64;
        return;
      }
      if (uVar1 < 0x23e6a3f5) {
        if (uVar1 != 0x23e6a3f4) {
          if (uVar1 == 0x12c9453c) goto LAB_0040c53a;
          if (uVar1 != 0x2388dd82) {
            return;
          }
        }
      }
      else if (uVar1 != 0x23e6b396) {
        if (uVar1 != 0x33a26cb6) {
          return;
        }
        goto LAB_0040c50c;
      }
    }
    else if (uVar1 < 0x8050ca40) {
      if (uVar1 == 0x8050ca3f) goto LAB_0040c5e6;
      if (uVar1 == 0x471a1dca) goto LAB_0040c53a;
      if (uVar1 != 0x6cf41096) {
        return;
      }
    }
    else if (uVar1 != 0x8062e2c0) {
      if (uVar1 != 0x89946400) {
        return;
      }
      goto LAB_0040c55e;
    }
  }
  else if (uVar1 < 0x8cbe3498) {
    if (uVar1 != 0x8cbe3497) {
      if (uVar1 < 0x8cb694ee) {
        if (uVar1 != 0x8cb694ed) {
          if (uVar1 == 0x8a616c4c) goto LAB_0040c5e6;
          if (uVar1 != 0x8cb61dcd) {
            return;
          }
        }
      }
      else if ((uVar1 != 0x8cb95e6b) && (uVar1 != 0x8cbc02ec)) {
        return;
      }
    }
  }
  else {
    if (0xc9d2b801 < uVar1) {
      if ((uVar1 != 0xd68ea0c1) && (uVar1 != 0xd6ec76d5)) {
        return;
      }
LAB_0040c5e6:
      *(undefined4 *)(param_1 + 0x50) = DAT_00702a5c;
      *(undefined4 *)(param_1 + 0x54) = DAT_00702a6c;
      return;
    }
    if (uVar1 != 0xc9d2b801) {
      if (uVar1 == 0xa6348ee3) {
LAB_0040c50c:
        *(undefined4 *)(param_1 + 0x50) = DAT_00702a74;
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        return;
      }
      if (uVar1 != 0xb3645f81) {
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = DAT_00702a60;
  *(undefined4 *)(param_1 + 0x54) = DAT_00702a70;
  return;
}

