# CRI decompilation progress

If you don't see a function in this list it doesn't need to be decompiled.

### adx_amp ✅

- [x] ADXAMP_Destroy
- [x] ADXAMP_Start
- [x] ADXAMP_Stop

### adx_bahx ✅

- [x] ADXB_SetAc3InSj
- [x] ADXB_SetAhxInSj

### adx_bsc ✅

- [x] SKG_Init
- [x] ADXB_Init
- [x] ADXB_Create
- [x] ADXB_Destroy
- [x] ADXB_EntryGetWrFunc
- [x] ADXB_GetSfreq
- [x] ADXB_GetOutBps
- [x] ADXB_GetTotalNumSmpl
- [x] ADXB_GetAinfLen
- [x] ADXB_GetDefOutVol
- [x] ADXB_Stop

### adx_crs ✅

- [x] ADXCRS_Init
- [x] ADXCRS_Lock
- [x] ADXCRS_Unlock

### adx_dcd

- [ ] ADX_GetCoefficient

### adx_dcd3

- [ ] ADX_SetDecodeSteAsMonoSw

### adx_errs ✅

- [x] ADXERR_Init
- [x] ADXERR_Finish
- [x] ADXERR_CallErrFunc1
- [x] ADXERR_CallErrFunc2
- [x] ADXERR_ItoA
- [x] ADXERR_ItoA2

### adx_fcch

- [ ] ADXF_Ocbi

### adx_fini

- [ ] ADXF_Init
- [ ] ADXF_Finish

### adx_fs ✅

- [x] adxf_SetCmdHstry
- [x] adxf_AllocAdxFs
- [x] adxf_CreateAdxFs
- [x] adxf_SetAfsFileInfo
- [x] ADXF_OpenAfs
- [x] adxf_CloseSjStm
- [x] ADXF_Close
- [x] ADXF_CloseAll
- [x] adxf_read_sj32
- [x] ADXF_ReadNw32
- [x] ADXF_ReadNw
- [x] ADXF_Stop
- [x] adxf_ExecOne
- [x] ADXF_ExecServer
- [x] ADXF_GetFsizeSct
- [x] ADXF_GetStat
- [x] adxf_ChkPrmGfr
- [x] ADXF_GetFnameRangeEx
- [x] ADXF_GetFnameFromPt

### adx_fsvr

- [ ] ADXT_ExecFsSvr

### adx_inis ✅

- [x] ADXT_Init
- [x] ADXT_Finish

### adx_lsc ✅

- [x] ADXT_EntryAfs
- [x] ADXT_StartSeamless
- [x] ADXT_GetNumFiles
- [x] ADXT_ResetEntry

### adx_mps2 ✅

- [x] ADXM_IsSetupThrd
- [x] adxm_ShutdownPreProcedure
- [x] ADXM_ShutdownThrd
- [x] adxm_ShutdownMwIdleThrd
- [x] adxm_ShutdownVsyncThrd
- [x] adxm_ShutdownFsThrd
- [x] adxm_ShutdownSafeThrd
- [x] ADXM_Lock
- [x] ADXM_Unlock
- [x] ADXM_ExecMain

### adx_rnap ✅

- [x] ADXRNA_Init
- [x] ADXRNA_Finish
- [x] ADXRNA_EntryErrFunc
- [x] ADXRNA_Create
- [x] ADXRNA_Destroy
- [x] ADXRNA_SetTransSw
- [x] ADXRNA_SetPlaySw
- [x] ADXRNA_GetNumData
- [x] ADXRNA_SetOutVol

### adx_sjd ✅

- [x] ADXSJD_Init
- [x] ADXSJD_Finish
- [x] adxsjd_clear
- [x] ADXSJD_Create
- [x] ADXSJD_Destroy
- [x] ADXSJD_SetInSj
- [x] ADXSJD_Start
- [x] ADXSJD_Stop
- [x] ADXSJD_GetDecNumSmpl
- [x] ADXSJD_SetLnkSw
- [x] ADXSJD_GetSfreq
- [x] ADXSJD_GetOutBps
- [x] ADXSJD_GetTotalNumSmpl
- [x] ADXSJD_GetDefOutVol

### adx_stmc

- [ ] ADXSTM_Init
- [ ] ADXSTM_Finish
- [ ] ADXSTMF_SetupHandleMember
- [ ] ADXSTMF_CreateCvfsRt
- [ ] ADXSTMF_CreateCvfs
- [ ] ADXSTM_Create
- [ ] ADXSTM_Destroy
- [ ] ADXSTM_BindFileNw
- [ ] ADXSTM_BindFile
- [ ] ADXSTM_ReleaseFileNw
- [ ] ADXSTM_ReleaseFile
- [ ] ADXSTM_GetStat
- [ ] ADXSTM_Seek
- [ ] ADXSTM_Tell
- [ ] adxstm_start_sub
- [ ] ADXSTM_Start2
- [ ] ADXSTM_StopNw
- [ ] ADXSTM_Stop
- [ ] ADXSTM_EntryEosFunc
- [ ] ADXSTM_SetEos
- [ ] adxstm_sj_internal_error
- [ ] adxstmf_stat_exec
- [ ] ADXSTMF_ExecHndl
- [ ] ADXSTM_ExecServer
- [ ] ADXSTM_SetReqRdSize
- [ ] ADXSTM_GetFileSct
- [ ] ADXSTM_SetPause
- [ ] ADXSTM_SetSj
- [ ] ADXSTM_OpenCvfs

### adx_sudv

- [ ] ADXPS2_LoadFcacheDvd

### adx_tlk ✅

- [x] ADXT_Create
- [x] adxt_detach_ahx
- [x] adxt_detach_ac3
- [x] adxt_detach_pl2
- [x] ADXT_Destroy
- [x] adxt_start_sj
- [x] ADXT_StopWithoutLsc
- [x] ADXT_Stop
- [x] ADXT_GetStat
- [x] ADXT_GetTimeSfreq2
- [x] adxt_time_adjust_trap
- [x] ADXT_GetTime
- [x] ADXT_SetOutVol
- [x] ADXT_SetDefSvrFreq
- [x] ADXT_GetNumSmplObuf
- [x] ADXT_Pause
- [x] ADXT_GetStatPause
- [x] ADXT_SetLnkSw
- [x] ADXT_SetOutputMono

### adx_tlk2 ✅

- [x] ADXT_StartAfs
- [x] ADXT_StartMem
- [x] ADXT_StartMem2

### adx_xpnd

- [ ] ADXPD_Init
- [ ] ADXPD_Create
- [ ] ADXPD_Destroy
- [ ] ADXPD_Stop

### cri_cvfs

- [ ] cvFsCallUsrErrFn
- [ ] cvFsError
- [ ] getDevice
- [ ] toUpperStr
- [ ] cvFsGetDefDev
- [ ] variousProc
- [ ] cvFsOpen
- [ ] allocCvFsHn
- [ ] releaseCvFsHn
- [ ] getDevName
- [ ] getDefDev
- [ ] cvFsClose
- [ ] cvFsTell
- [ ] cvFsSeek
- [ ] cvFsReqRd
- [ ] cvFsExecServer
- [ ] cvFsGetStat
- [ ] isNeedDevName
- [ ] addDevName

### cri_srd

- [ ] srd_wait
- [ ] srd_wait_hst
- [ ] srd_check_dvd_error
- [ ] srd_exec_dvd
- [ ] srd_exec_hst
- [ ] SRD_ExecServer
- [ ] SRD_SetHistory
- [ ] srd_sw_lock
- [ ] srd_sw_unlock
- [ ] SRD_SceLseek
- [ ] SRD_SceIoctl
- [ ] SRD_SceOpen
- [ ] SRD_SceClose
- [ ] SRD_SceRead

### dtr ✅

- [x] DTR_Create
- [x] DTR_Destroy
- [x] DTR_Stop

### dtx

- [ ] dtx_create_rmt
- [ ] dtx_destroy_rmt
- [ ] DTX_Create
- [ ] DTX_Destroy
- [ ] DTX_SetRcvCbf
- [ ] DTX_SetSndCbf
- [ ] DTX_ExecHndl
- [ ] DTX_Init
- [ ] DTX_Finish
- [ ] DTX_CallUrpc
- [ ] DTX_ExecServer

### dvci

- [ ] dvci_call_errfn
- [ ] dvCiCdSearchFile
- [ ] dvci_to_large_to_yen

### dvci_sub

- [ ] dvci_conv_fname
- [ ] analysis_flist_003DC6A0
- [ ] load_flist
- [ ] search_fstate
- [ ] dvci_init_flist
- [ ] dvCiLoadFcache

### htci_sub

- [ ] htci_is_inc_colon
- [ ] htci_is_bgn_host
- [ ] htci_conv_fname
- [ ] htci_load_flist

### lsc

- [ ] lsc_Alloc
- [ ] LSC_Create
- [ ] LSC_Destroy
- [ ] LSC_SetStmHndl
- [ ] LSC_EntryFileRange
- [ ] LSC_ResetEntry
- [ ] LSC_Start
- [ ] LSC_Stop
- [ ] LSC_GetNumStm
- [ ] LSC_SetFlowLimit

### lsc_crs

- [ ] LSC_LockCrs
- [ ] LSC_UnlockCrs

### lsc_err

- [ ] LSC_EntryErrFunc
- [ ] LSC_CallErrFunc

### lsc_ini

- [ ] lsc_EntrySvrInt
- [ ] lsc_DeleteSvrInt
- [ ] LSC_Init
- [ ] LSC_Finish

### ps2_rna

- [x] ps2rna_init_psj
- [x] ps2rna_finish_psj
- [x] ps2rna_get_psj
- [x] ps2rna_release_psj
- [x] ps2rna_rcvcbf
- [ ] ps2rna_sndcbf
- [x] PS2RNA_Init
- [x] PS2RNA_InitIopSnd
- [x] PS2RNA_FinishIopSnd
- [x] PS2RNA_Finish
- [x] PS2RNA_Create
- [x] PS2RNA_Destroy
- [x] PS2RNA_SetTransSw
- [x] PS2RNA_SetPlaySw
- [x] PS2RNA_SetDiscardSw
- [x] PS2RNA_GetNumData
- [x] PS2RNA_SetOutVol

### sj_crs

- [ ] SJCRS_Lock
- [ ] SJCRS_Unlock

### sj_mem

- [ ] SJMEM_Init
- [ ] SJMEM_Finish
- [ ] SJMEM_Create
- [ ] SJMEM_Reset

### sj_rbf

- [ ] SJRBF_Init
- [ ] SJRBF_Finish
- [ ] SJRBF_Create
- [ ] SJRBF_Reset
- [ ] SJRBF_GetBufPtr
- [ ] SJRBF_GetBufSize
- [ ] SJRBF_GetXtrSize

### sj_uni

- [ ] SJUNI_Init
- [ ] SJUNI_Finish
- [ ] SJUNI_Create
- [ ] SJUNI_Reset

### sj_utl

- [ ] SJ_SplitChunk

### sjr_clt

- [ ] SJUNI_CreateRmt
- [ ] SJRMT_Destroy
- [ ] SJRMT_Init
- [ ] SJRMT_Finish

### sjx

- [ ] SJX_Init
- [ ] SJX_Finish
- [ ] SJX_Create
- [ ] SJX_Destroy

### svm ✅

- [x] svm_lock
- [x] svm_unlock
- [x] SVM_Lock
- [x] SVM_Unlock
- [x] SVM_LockRsc
- [x] SVM_UnlockRsc
- [x] SVM_CallErr
- [x] SVM_CallErr1
- [x] SVM_SetCbSvr
- [x] SVM_DelCbSvr
- [x] SVM_SetCbSvrId
- [x] SVM_SetCbLock
- [x] SVM_SetCbUnlock
- [x] SVM_ExecSvrFunc
- [x] SVM_ExecSvrMain
- [x] svm_reset_variable
- [x] SVM_Init
- [x] SVM_Finish
- [x] SVM_TestAndSet
