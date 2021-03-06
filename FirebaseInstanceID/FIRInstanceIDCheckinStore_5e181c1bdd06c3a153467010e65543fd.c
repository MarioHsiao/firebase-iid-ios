/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2015 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

__int64 __fastcall -[FIRInstanceIDCheckinStore initWithCheckinPlistFileName:applicationSupportSubDirectory:](__int64 a1, __int64 a2, __int64 a3, __int64 a4);
id __cdecl -[FIRInstanceIDCheckinStore initWithCheckinPlist:keychain:](struct FIRInstanceIDCheckinStore *self, SEL, id, id);
bool __cdecl -[FIRInstanceIDCheckinStore hasCheckinPlist](struct FIRInstanceIDCheckinStore *self, SEL);
bool __cdecl -[FIRInstanceIDCheckinStore saveCheckinPreferences:error:](struct FIRInstanceIDCheckinStore *self, SEL, id, id *);
bool __cdecl -[FIRInstanceIDCheckinStore removeCheckinPreferencesWithError:](struct FIRInstanceIDCheckinStore *self, SEL, id *);
id __cdecl -[FIRInstanceIDCheckinStore cachedCheckinPreferences](struct FIRInstanceIDCheckinStore *self, SEL);
id __cdecl -[FIRInstanceIDCheckinStore plist](struct FIRInstanceIDCheckinStore *self, SEL);
void __cdecl -[FIRInstanceIDCheckinStore setPlist:](struct FIRInstanceIDCheckinStore *self, SEL, id);
id __cdecl -[FIRInstanceIDCheckinStore keychain](struct FIRInstanceIDCheckinStore *self, SEL);
void __cdecl -[FIRInstanceIDCheckinStore setKeychain:](struct FIRInstanceIDCheckinStore *self, SEL, id);
void __cdecl -[FIRInstanceIDCheckinStore .cxx_destruct](struct FIRInstanceIDCheckinStore *self, SEL);
// int __fastcall FIRInstanceIDSharedLogger(_QWORD); weak
// int __fastcall objc_autoreleaseReturnValue(_QWORD); weak
// void *objc_msgSend(void *, const char *, ...); idb
// void *objc_msgSendSuper2(void *, const char *, ...); idb
// int __fastcall objc_release(_QWORD); weak
// int __fastcall objc_retain(_QWORD); weak
// int __fastcall objc_retainAutoreleasedReturnValue(_QWORD); weak
// int __fastcall objc_storeStrong(_QWORD, _QWORD); weak

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN loc_6; // weak
char aCom_google_iid[15] = "com.google.iid"; // weak
__CFString cfstr_Com_google_iid = { &__CFConstantStringClassReference, 1992LL, "com.google.iid", 14LL }; // weak
void *classRef_FIRInstanceIDBackupExcludedPlist = &OBJC_CLASS___FIRInstanceIDBackupExcludedPlist; // weak
char *selRef_alloc = "alloc"; // weak
void *classRef_FIRInstanceIDCheckinStore = &OBJC_CLASS___FIRInstanceIDCheckinStore; // weak
// extern _UNKNOWN kFIRInstanceIDDeviceAuthIdKey; weak
// extern _UNKNOWN kFIRInstanceIDSecretTokenKey; weak


//----- (0000000000000000) ----------------------------------------------------
__int64 __fastcall -[FIRInstanceIDCheckinStore initWithCheckinPlistFileName:applicationSupportSubDirectory:](__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15@1
  __int64 v5; // rax@1
  __int64 v6; // r12@1
  __int64 v7; // rax@1
  __int64 v8; // r14@1
  void *v9; // rax@1
  void *v10; // r15@1
  __int64 v11; // rax@1
  __int64 v12; // rax@1
  __int64 v13; // rbx@1
  __int64 v14; // ST00_8@1
  __int64 v15; // rax@1
  __int64 v16; // r14@1

  v4 = a4;
  LODWORD(v5) = objc_retain(a3);
  v6 = v5;
  LODWORD(v7) = objc_retain(v4);
  v8 = v7;
  v9 = objc_msgSend(classRef_FIRInstanceIDBackupExcludedPlist, selRef_alloc, a1);
  v10 = objc_msgSend(v9, *(&selRef_alloc + 1), v6, v8);
  objc_release(v8);
  objc_release(v6);
  LODWORD(v11) = ((int (__fastcall *)(_QWORD, char *))objc_msgSend)(
                   *(&classRef_FIRInstanceIDBackupExcludedPlist + 1),
                   selRef_alloc);
  LODWORD(v12) = ((int (__fastcall *)(__int64, _QWORD, __CFString *))objc_msgSend)(
                   v11,
                   *(&selRef_alloc + 2),
                   &cfstr_Com_google_iid);
  v13 = v12;
  LODWORD(v15) = ((int (__fastcall *)(__int64, _QWORD, void *, __int64))objc_msgSend)(
                   v14,
                   *(&selRef_alloc + 3),
                   v10,
                   v12);
  v16 = v15;
  objc_release(v13);
  objc_release(v10);
  return v16;
}
// ED0: using guessed type __CFString cfstr_Com_google_iid;
// 1010: using guessed type void *classRef_FIRInstanceIDBackupExcludedPlist;
// 13D8: using guessed type char *selRef_alloc;
// 6450: using guessed type int __fastcall objc_release(_QWORD);
// 6458: using guessed type int __fastcall objc_retain(_QWORD);

//----- (00000000000000D6) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (id)initWithCheckinPlist:(id) keychain:(id) 
id __cdecl -[FIRInstanceIDCheckinStore initWithCheckinPlist:keychain:](struct FIRInstanceIDCheckinStore *self, SEL a2, id a3, id a4)
{
  id v4; // r12@1
  id v5; // r13@1
  __int64 v6; // rax@1
  __int64 v7; // r14@1
  __int64 v8; // rax@1
  __int64 v9; // r15@1
  struct objc_object *v10; // rax@1
  struct objc_object *v11; // rbx@1
  struct FIRInstanceIDCheckinStore *v13; // [sp+8h] [bp-38h]@1
  void *v14; // [sp+10h] [bp-30h]@1

  v4 = a4;
  v5 = a3;
  LODWORD(v6) = objc_retain(a3);
  v7 = v6;
  LODWORD(v8) = objc_retain(v4);
  v9 = v8;
  v13 = self;
  v14 = classRef_FIRInstanceIDCheckinStore;
  v10 = (struct objc_object *)objc_msgSendSuper2(&v13, *(&selRef_alloc + 4));
  v11 = v10;
  if ( v10 )
  {
    objc_storeStrong(&v10[1], v5);
    objc_storeStrong(&v11[2], v4);
  }
  objc_release(v9);
  objc_release(v7);
  return v11;
}
// 13D8: using guessed type char *selRef_alloc;
// 1528: using guessed type void *classRef_FIRInstanceIDCheckinStore;
// 6450: using guessed type int __fastcall objc_release(_QWORD);
// 6458: using guessed type int __fastcall objc_retain(_QWORD);
// 6468: using guessed type int __fastcall objc_storeStrong(_QWORD, _QWORD);

//----- (0000000000000178) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (bool)hasCheckinPlist
bool __cdecl -[FIRInstanceIDCheckinStore hasCheckinPlist](struct FIRInstanceIDCheckinStore *self, SEL a2)
{
  void *v2; // rax@1
  void *v3; // rax@1
  void *v4; // rbx@1
  int v5; // er14@1

  v2 = objc_msgSend(self, *(&selRef_alloc + 5));
  LODWORD(v3) = objc_retainAutoreleasedReturnValue(v2);
  v4 = v3;
  v5 = (unsigned __int64)objc_msgSend(v3, *(&selRef_alloc + 6));
  objc_release(v4);
  return v5;
}
// 13D8: using guessed type char *selRef_alloc;
// 6450: using guessed type int __fastcall objc_release(_QWORD);
// 6460: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (00000000000001BC) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (bool)saveCheckinPreferences:(id) error:(id *) 
bool __cdecl -[FIRInstanceIDCheckinStore saveCheckinPreferences:error:](struct FIRInstanceIDCheckinStore *self, SEL a2, id a3, id *a4)
{
  void *v4; // rax@1
  void *v5; // r12@1
  void *(*v6)(void *, const char *, ...); // r14@1
  void *v7; // rax@1
  void *v8; // rax@1
  void *v9; // r15@1
  void *v10; // rax@1
  void *v11; // rax@1
  void *v12; // rbx@1
  void *v13; // rax@1
  char v14; // al@3
  id *v15; // r13@4
  __int64 v16; // rax@5
  void *v17; // rax@5
  void *v18; // rbx@5
  const char *v19; // rsi@5
  char *v20; // rdx@5
  __CFString *v21; // r8@5
  bool v22; // r13@5
  signed __int64 v23; // rcx@5
  __int64 v24; // rax@6
  void *v25; // rax@6
  void *v27; // rax@10
  __int64 v28; // rax@10
  void *v29; // rax@10
  __int64 v30; // rax@10
  void *v31; // r13@10
  void *v32; // rax@10
  void *v33; // rax@10
  void *v34; // rax@10
  __int64 v35; // rax@10
  __int64 v36; // r12@10
  void *v37; // rdi@10
  char v38; // r15@10
  __int64 v39; // rdi@10
  bool v40; // zf@10
  void *v41; // rax@11
  void *v42; // rax@11
  void *v43; // rbx@11
  char v44; // r15@11
  __int64 v45; // rax@12
  void *v46; // rax@12
  void *v47; // rbx@12
  const char *v48; // r12@12
  void *v49; // rax@12
  id *v50; // rax@12
  id *v51; // r15@12
  void *v52; // rax@12
  void *v53; // rax@12
  void *v54; // r13@12
  void *v55; // rax@12
  __int64 v56; // rax@12
  __int64 v57; // rbx@12
  __int64 v58; // rax@12
  __int64 v59; // r12@12
  id *v60; // rdi@12
  __int64 v61; // rax@13
  void *v62; // rax@13
  void *v63; // rbx@13
  __int64 v64; // rax@15
  void *v65; // rax@15
  __int64 v66; // [sp+0h] [bp-70h]@12
  void *v67; // [sp+8h] [bp-68h]@1
  __int64 v68; // [sp+10h] [bp-60h]@10
  void *v69; // [sp+18h] [bp-58h]@10
  __int64 v70; // [sp+20h] [bp-50h]@10
  struct FIRInstanceIDCheckinStore *v71; // [sp+28h] [bp-48h]@3
  void *v72; // [sp+30h] [bp-40h]@3
  void *v73; // [sp+38h] [bp-38h]@10
  id *v74; // [sp+40h] [bp-30h]@1

  v74 = a4;
  LODWORD(v4) = objc_retain(a3);
  v5 = v4;
  v6 = objc_msgSend;
  v7 = objc_msgSend(v4, *(&selRef_alloc + 7));
  LODWORD(v8) = objc_retainAutoreleasedReturnValue(v7);
  v9 = v8;
  v10 = objc_msgSend(v5, *(&selRef_alloc + 8));
  LODWORD(v11) = objc_retainAutoreleasedReturnValue(v10);
  v12 = v11;
  v13 = objc_msgSend(v11, *(&selRef_alloc + 9));
  v67 = v12;
  if ( !v13 )
  {
    LODWORD(v16) = ((int (*)(void))FIRInstanceIDSharedLogger)();
    LODWORD(v17) = objc_retainAutoreleasedReturnValue(v16);
    v18 = v17;
    v19 = *(&selRef_alloc + 10);
    v20 = &aCom_google_iid[77];
    v21 = &cfstr_Com_google_iid + 3;
    v22 = 0;
    v23 = 8000LL;
LABEL_7:
    objc_msgSend(v18, v19, v20, v23, v21);
LABEL_8:
    objc_release(v18);
    goto LABEL_9;
  }
  if ( !objc_msgSend(v9, *(&selRef_alloc + 11)) )
  {
    LODWORD(v24) = ((int (*)(void))FIRInstanceIDSharedLogger)();
    LODWORD(v25) = objc_retainAutoreleasedReturnValue(v24);
    v18 = v25;
    v19 = *(&selRef_alloc + 10);
    v20 = &aCom_google_iid[77];
    v21 = &cfstr_Com_google_iid + 4;
    v22 = 0;
    v23 = 8001LL;
    goto LABEL_7;
  }
  v14 = (unsigned __int64)objc_msgSend(v5, *(&selRef_alloc + 12));
  v72 = v9;
  v71 = self;
  if ( v14 )
  {
    v15 = v74;
    goto LABEL_11;
  }
  v27 = objc_msgSend(v12, *(&selRef_alloc + 13), 4LL);
  LODWORD(v28) = objc_retainAutoreleasedReturnValue(v27);
  v68 = v28;
  v29 = objc_msgSend(self, *(&selRef_alloc + 14));
  LODWORD(v30) = objc_retainAutoreleasedReturnValue(v29);
  v31 = (void *)v30;
  v70 = v30;
  v32 = objc_msgSend(self, *(&selRef_alloc + 14));
  LODWORD(v33) = objc_retainAutoreleasedReturnValue(v32);
  v69 = v33;
  v34 = objc_msgSend(v33, *(&selRef_alloc + 15));
  LODWORD(v35) = objc_retainAutoreleasedReturnValue(v34);
  v73 = v5;
  v36 = v35;
  v37 = v31;
  v15 = v74;
  v38 = (unsigned __int64)objc_msgSend(
                            v37,
                            *(&selRef_alloc + 16),
                            v68,
                            &cfstr_Com_google_iid + 2,
                            0LL,
                            &cfstr_Com_google_iid + 1,
                            v35,
                            v74);
  v39 = v36;
  v5 = v73;
  objc_release(v39);
  objc_release(v69);
  objc_release(v70);
  v6 = objc_msgSend;
  objc_release(v68);
  v40 = v38 == 0;
  v9 = v72;
  if ( v40 )
  {
    LODWORD(v64) = ((int (*)(void))FIRInstanceIDSharedLogger)();
    LODWORD(v65) = objc_retainAutoreleasedReturnValue(v64);
    v18 = v65;
    v22 = 0;
    objc_msgSend(v65, *(&selRef_alloc + 10), &aCom_google_iid[77], 8002LL, &cfstr_Com_google_iid + 5, *v74);
    goto LABEL_8;
  }
LABEL_11:
  v41 = v6(v71, *(&selRef_alloc + 5));
  LODWORD(v42) = objc_retainAutoreleasedReturnValue(v41);
  v43 = v42;
  v44 = (unsigned __int64)v6(v42, *(&selRef_alloc + 17), v9, v15);
  objc_release(v43);
  v22 = 1;
  v40 = v44 == 0;
  v9 = v72;
  if ( v40 )
  {
    v73 = v5;
    LODWORD(v45) = FIRInstanceIDSharedLogger(v43);
    LODWORD(v46) = objc_retainAutoreleasedReturnValue(v45);
    v47 = v46;
    v6(v46, *(&selRef_alloc + 10), &aCom_google_iid[77], 8003LL, &cfstr_Com_google_iid + 6);
    objc_release(v47);
    v48 = *(&selRef_alloc + 14);
    v49 = v6(v71, *(&selRef_alloc + 14));
    LODWORD(v50) = objc_retainAutoreleasedReturnValue(v49);
    v51 = v50;
    v74 = v50;
    v52 = v6(v71, v48);
    LODWORD(v53) = objc_retainAutoreleasedReturnValue(v52);
    v54 = v53;
    v55 = v6(v53, *(&selRef_alloc + 15));
    LODWORD(v56) = objc_retainAutoreleasedReturnValue(v55);
    v57 = v56;
    v66 = 0LL;
    LODWORD(v51) = (unsigned __int64)v6(
                                       v51,
                                       *(&selRef_alloc + 18),
                                       &cfstr_Com_google_iid + 2,
                                       &cfstr_Com_google_iid + 1,
                                       v56,
                                       &v66,
                                       0LL,
                                       v67);
    LODWORD(v58) = objc_retain(v66);
    v59 = v58;
    objc_release(v57);
    objc_release(v54);
    v60 = v74;
    objc_release(v74);
    if ( !(_BYTE)v51 )
    {
      LODWORD(v61) = FIRInstanceIDSharedLogger(v60);
      LODWORD(v62) = objc_retainAutoreleasedReturnValue(v61);
      v63 = v62;
      objc_msgSend(v62, *(&selRef_alloc + 10), &aCom_google_iid[77], 8004LL, &cfstr_Com_google_iid + 7, v59, v66);
      objc_release(v63);
    }
    objc_release(v59);
    v22 = 0;
    v5 = v73;
    v9 = v72;
  }
LABEL_9:
  objc_release(v67);
  objc_release(v9);
  objc_release(v5);
  return v22;
}
// ED0: using guessed type __CFString cfstr_Com_google_iid;
// 13D8: using guessed type char *selRef_alloc;
// 63E0: using guessed type int __fastcall FIRInstanceIDSharedLogger(_QWORD);
// 6450: using guessed type int __fastcall objc_release(_QWORD);
// 6458: using guessed type int __fastcall objc_retain(_QWORD);
// 6460: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (00000000000005AC) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (bool)removeCheckinPreferencesWithError:(id *) 
bool __cdecl -[FIRInstanceIDCheckinStore removeCheckinPreferencesWithError:](struct FIRInstanceIDCheckinStore *self, SEL a2, id *a3)
{
  id *v3; // r14@1
  const char *v4; // r12@1
  void *v5; // rax@1
  void *v6; // rax@1
  void *v7; // r13@1
  void *v8; // rax@1
  void *v9; // rax@1
  void *v10; // r12@1
  void *v11; // rax@1
  __int64 v12; // rax@1
  __int64 v13; // rbx@1
  void *v14; // rax@2
  void *v15; // rax@2
  void *v16; // rbx@2
  char v17; // r15@2
  void *v18; // rdi@2
  __int64 v19; // rax@4
  void *v20; // rax@4
  void *v21; // r14@4
  id *v23; // [sp+10h] [bp-30h]@1

  v3 = a3;
  v4 = *(&selRef_alloc + 14);
  v5 = objc_msgSend(self, *(&selRef_alloc + 14));
  LODWORD(v6) = objc_retainAutoreleasedReturnValue(v5);
  v7 = v6;
  v8 = objc_msgSend(self, v4);
  LODWORD(v9) = objc_retainAutoreleasedReturnValue(v8);
  v10 = v9;
  v11 = objc_msgSend(v9, *(&selRef_alloc + 15));
  LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
  v13 = v12;
  v23 = v3;
  LOBYTE(v3) = (unsigned __int64)objc_msgSend(
                                   v7,
                                   *(&selRef_alloc + 18),
                                   &cfstr_Com_google_iid + 2,
                                   &cfstr_Com_google_iid + 1,
                                   v12,
                                   v3);
  objc_release(v13);
  objc_release(v10);
  objc_release(v7);
  if ( (_BYTE)v3 )
  {
    v14 = objc_msgSend(self, *(&selRef_alloc + 5));
    LODWORD(v15) = objc_retainAutoreleasedReturnValue(v14);
    v16 = v15;
    v17 = (unsigned __int64)objc_msgSend(v15, *(&selRef_alloc + 20));
    v18 = v16;
  }
  else
  {
    if ( !v23 )
      return 0;
    LODWORD(v19) = FIRInstanceIDSharedLogger(v7);
    LODWORD(v20) = objc_retainAutoreleasedReturnValue(v19);
    v21 = v20;
    v17 = 0;
    objc_msgSend(v20, *(&selRef_alloc + 19), &aCom_google_iid[420], 8005LL, &cfstr_Com_google_iid + 8, *v23);
    v18 = v21;
  }
  objc_release(v18);
  return v17;
}
// ED0: using guessed type __CFString cfstr_Com_google_iid;
// 13D8: using guessed type char *selRef_alloc;
// 63E0: using guessed type int __fastcall FIRInstanceIDSharedLogger(_QWORD);
// 6450: using guessed type int __fastcall objc_release(_QWORD);
// 6460: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (00000000000006F8) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (id)cachedCheckinPreferences
id __cdecl -[FIRInstanceIDCheckinStore cachedCheckinPreferences](struct FIRInstanceIDCheckinStore *self, SEL a2)
{
  const char *v2; // r15@1
  void *v3; // rax@1
  void *v4; // rax@1
  void *v5; // r13@1
  void *v6; // rax@1
  void *v7; // rax@1
  void *v8; // r15@1
  void *v9; // rax@1
  __int64 v10; // rax@1
  __int64 v11; // rbx@1
  void *v12; // rax@1
  void *v13; // rax@1
  void *v14; // r13@1
  void *v15; // rax@1
  void *v16; // r12@1
  void (__fastcall *v17)(void *); // r14@1
  __int64 v18; // rbx@1
  __int64 v19; // r15@3
  __int64 v20; // rdi@3
  void *v21; // r14@4
  const char *v22; // rsi@4
  void *v23; // rax@4
  __int64 v24; // rax@4
  __int64 v25; // r15@4
  void *v26; // rbx@4
  void *v27; // rdi@4
  const char *v28; // rsi@4
  void *v29; // rax@4
  void *v30; // rax@4
  void *v31; // r13@4
  void *v32; // rax@4
  void *v33; // rax@4
  void *v34; // r14@4
  void *v35; // rax@4
  void *v36; // rax@4
  void *v37; // rbx@4
  const char *v38; // r14@4
  void *v39; // rax@4
  struct FIRInstanceIDCheckinStore *v40; // rax@4
  __int64 v41; // rdx@4
  void *v42; // rax@4
  void *v43; // rax@4
  void *v44; // rax@4
  void *v45; // rax@4
  void *v46; // r14@4
  const char *v47; // r15@4
  void *v48; // rax@4
  const char *v49; // r13@5
  __int64 v50; // rax@6
  void *v51; // rax@6
  void *v52; // r14@6
  void *v53; // rdi@6
  void *v54; // rax@7
  void *v55; // rax@7
  void *v56; // rbx@7
  void *v57; // r15@7
  void *v58; // r12@8
  bool v59; // zf@8
  const char *v60; // r15@8
  struct FIRInstanceIDCheckinStore *v61; // r13@8
  void *v62; // rbx@8
  void *v63; // rax@11
  void *v64; // r15@11
  void *v65; // rax@12
  void *v66; // rax@14
  __int64 v67; // rax@15
  __int64 v68; // rbx@15
  void *v69; // rdi@15
  id result; // rax@17
  __int64 v71; // [sp+8h] [bp-68h]@1
  __int64 v72; // [sp+10h] [bp-60h]@4
  __int64 v73; // [sp+18h] [bp-58h]@4
  void *v74; // [sp+20h] [bp-50h]@4
  void *v75; // [sp+28h] [bp-48h]@4
  void *v76; // [sp+30h] [bp-40h]@4
  struct FIRInstanceIDCheckinStore *v77; // [sp+38h] [bp-38h]@1
  void *v78; // [sp+40h] [bp-30h]@1

  v2 = *(&selRef_alloc + 14);
  v3 = objc_msgSend(self, *(&selRef_alloc + 14));
  LODWORD(v4) = objc_retainAutoreleasedReturnValue(v3);
  v5 = v4;
  v78 = v4;
  v77 = self;
  v6 = objc_msgSend(self, v2);
  LODWORD(v7) = objc_retainAutoreleasedReturnValue(v6);
  v8 = v7;
  v9 = objc_msgSend(v7, *(&selRef_alloc + 15));
  LODWORD(v10) = objc_retainAutoreleasedReturnValue(v9);
  v11 = v10;
  v71 = 0LL;
  v12 = objc_msgSend(v5, *(&selRef_alloc + 21), &cfstr_Com_google_iid + 2, &cfstr_Com_google_iid + 1, v10, &v71);
  LODWORD(v13) = objc_retainAutoreleasedReturnValue(v12);
  v14 = v13;
  LODWORD(v15) = objc_retain(v71);
  v16 = v15;
  v17 = (void (__fastcall *)(void *))objc_release;
  objc_release(v11);
  objc_release(v8);
  v18 = (__int64)v16;
  objc_release(v78);
  if ( !v16 )
  {
    v73 = 0LL;
    v21 = objc_msgSend(*(&classRef_FIRInstanceIDBackupExcludedPlist + 2), selRef_alloc);
    v22 = *(&selRef_alloc + 23);
    v72 = (__int64)v14;
    v23 = objc_msgSend(v14, v22);
    LODWORD(v24) = objc_retainAutoreleasedReturnValue(v23);
    v25 = v24;
    v26 = objc_msgSend(v21, *(&selRef_alloc + 24), v24, 4LL);
    objc_release(v25);
    v27 = *(&classRef_FIRInstanceIDBackupExcludedPlist + 3);
    v28 = *(&selRef_alloc + 25);
    v74 = v26;
    v29 = objc_msgSend(v27, v28, v26);
    LODWORD(v30) = objc_retainAutoreleasedReturnValue(v29);
    v31 = v30;
    v32 = objc_msgSend(v77, *(&selRef_alloc + 5));
    LODWORD(v33) = objc_retainAutoreleasedReturnValue(v32);
    v34 = v33;
    v35 = objc_msgSend(v33, *(&selRef_alloc + 26));
    LODWORD(v36) = objc_retainAutoreleasedReturnValue(v35);
    v37 = v36;
    objc_release(v34);
    v38 = *(&selRef_alloc + 27);
    v39 = objc_msgSend(v37, *(&selRef_alloc + 27), *kFIRInstanceIDDeviceAuthIdKey);
    LODWORD(v40) = objc_retainAutoreleasedReturnValue(v39);
    v77 = v40;
    v41 = *kFIRInstanceIDSecretTokenKey;
    v75 = v37;
    v42 = objc_msgSend(v37, v38, v41);
    LODWORD(v43) = objc_retainAutoreleasedReturnValue(v42);
    v78 = v43;
    v44 = objc_msgSend(v31, *(&selRef_alloc + 28));
    LODWORD(v45) = objc_retainAutoreleasedReturnValue(v44);
    v46 = v45;
    v47 = *(&selRef_alloc + 9);
    v48 = objc_msgSend(v45, *(&selRef_alloc + 9));
    v76 = v31;
    if ( v48 )
    {
      v49 = v47;
      objc_release(v46);
      v17 = (void (__fastcall *)(void *))objc_release;
    }
    else
    {
      v54 = objc_msgSend(v31, *(&selRef_alloc + 29));
      LODWORD(v55) = objc_retainAutoreleasedReturnValue(v54);
      v56 = v55;
      v49 = v47;
      v57 = objc_msgSend(v55, v47);
      objc_release(v56);
      objc_release(v46);
      v17 = (void (__fastcall *)(void *))objc_release;
      if ( !v57 )
      {
        v65 = objc_msgSend(v77, v49);
        v58 = v75;
        if ( !v65 || !objc_msgSend(v78, v49) )
        {
          v19 = 0LL;
          v61 = v77;
          v69 = v78;
          v68 = (__int64)v76;
          goto LABEL_16;
        }
        v66 = objc_msgSend(*(&classRef_FIRInstanceIDBackupExcludedPlist + 3), selRef_alloc);
        v61 = v77;
        v62 = objc_msgSend(v66, *(&selRef_alloc + 30), v77, v78);
        objc_release(v76);
LABEL_15:
        objc_msgSend(v62, *(&selRef_alloc + 31), v58);
        LODWORD(v67) = objc_retain(v62);
        v68 = v67;
        v19 = v67;
        v69 = v78;
LABEL_16:
        v17(v69);
        v17(v61);
        v17(v58);
        v17((void *)v68);
        v17(v74);
        v20 = v72;
        v18 = v73;
        goto LABEL_17;
      }
    }
    v58 = v75;
    v59 = objc_msgSend(v75, *(&selRef_alloc + 11)) == &loc_6;
    v60 = v49;
    v61 = v77;
    v62 = v76;
    if ( v59 && objc_msgSend(v77, v60) && objc_msgSend(v78, v60) )
    {
      v63 = objc_msgSend(*(&classRef_FIRInstanceIDBackupExcludedPlist + 3), selRef_alloc);
      v64 = objc_msgSend(v63, *(&selRef_alloc + 30), v61, v78);
      objc_release(v62);
      v62 = v64;
    }
    goto LABEL_15;
  }
  if ( objc_msgSend(v16, *(&selRef_alloc + 22)) == (void *)-25300 )
  {
    v19 = 0LL;
    v20 = (__int64)v14;
  }
  else
  {
    LODWORD(v50) = FIRInstanceIDSharedLogger(v16);
    LODWORD(v51) = objc_retainAutoreleasedReturnValue(v50);
    v52 = v51;
    v19 = 0LL;
    objc_msgSend(v51, *(&selRef_alloc + 19), &aCom_google_iid[543], 8006LL, &cfstr_Com_google_iid + 9, v16);
    v53 = v52;
    v17 = (void (__fastcall *)(void *))objc_release;
    objc_release(v53);
    v20 = (__int64)v14;
  }
LABEL_17:
  v17((void *)v20);
  v17((void *)v18);
  LODWORD(result) = objc_autoreleaseReturnValue(v19);
  return result;
}
// ED0: using guessed type __CFString cfstr_Com_google_iid;
// 1010: using guessed type void *classRef_FIRInstanceIDBackupExcludedPlist;
// 13D8: using guessed type char *selRef_alloc;
// 63E0: using guessed type int __fastcall FIRInstanceIDSharedLogger(_QWORD);
// 6438: using guessed type int __fastcall objc_autoreleaseReturnValue(_QWORD);
// 6450: using guessed type int __fastcall objc_release(_QWORD);
// 6458: using guessed type int __fastcall objc_retain(_QWORD);
// 6460: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000B53) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (id)plist
id __cdecl -[FIRInstanceIDCheckinStore plist](struct FIRInstanceIDCheckinStore *self, SEL a2)
{
  return (id)self->_plist;
}

//----- (0000000000000B64) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (void)setPlist:(id) 
void __cdecl -[FIRInstanceIDCheckinStore setPlist:](struct FIRInstanceIDCheckinStore *self, SEL a2, id a3)
{
  objc_storeStrong(&self->_plist, a3);
}
// 6468: using guessed type int __fastcall objc_storeStrong(_QWORD, _QWORD);

//----- (0000000000000B78) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (id)keychain
id __cdecl -[FIRInstanceIDCheckinStore keychain](struct FIRInstanceIDCheckinStore *self, SEL a2)
{
  return (id)self->_keychain;
}

//----- (0000000000000B89) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (void)setKeychain:(id) 
void __cdecl -[FIRInstanceIDCheckinStore setKeychain:](struct FIRInstanceIDCheckinStore *self, SEL a2, id a3)
{
  objc_storeStrong(&self->_keychain, a3);
}
// 6468: using guessed type int __fastcall objc_storeStrong(_QWORD, _QWORD);

//----- (0000000000000B9D) ----------------------------------------------------
// FIRInstanceIDCheckinStore - (void).cxx_destruct
void __cdecl -[FIRInstanceIDCheckinStore .cxx_destruct](struct FIRInstanceIDCheckinStore *self, SEL a2)
{
  objc_storeStrong(&self->_keychain, 0LL);
  objc_storeStrong(&self->_plist, 0LL);
}
// 6468: using guessed type int __fastcall objc_storeStrong(_QWORD, _QWORD);

// ALL OK, 11 function(s) have been successfully decompiled
