/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SASampleStore : NSObject <NSSecureCoding> {
    NSString * _actionTaken;
    struct _CSArchitecture { 
        int cpu_type; 
        int cpu_subtype; 
    }  _arch;
    double  _attemptedSamplingInterval;
    SABinaryLocator * _binaryLocator;
    NSString * _bootArgs;
    unsigned long long  _bytesWritten;
    unsigned long long  _bytesWrittenLimit;
    double  _cpuDuration;
    double  _cpuLimit;
    double  _cpuLimitDuration;
    SAFrame * _cpuSignalHandlerStackLeafKernelFrame;
    double  _cpuUsed;
    unsigned long long  _dataGatheringOptions;
    unsigned long long  _dataSource;
    unsigned long long  _dataStyle;
    NSString * _durationNote;
    SATimestamp * _endTime;
    NSString * _event;
    NSString * _eventNote;
    double  _extraDuration;
    NSMutableArray * _fanSpeeds;
    NSString * _hardwareModel;
    bool  _haveKPerfSched;
    NSMutableArray * _hidEvents;
    NSMutableArray * _idsToUseDsymForUUID;
    bool  _keepMicrostackshotsWithoutLoadInfo;
    bool  _keepStateBetweenSampleIndexes;
    NSMutableArray * _kernelCaches;
    NSString * _kernelVersion;
    NSString * _kextStat;
    double  _lastWakeTime;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _machTimebase;
    SASharedCache * _mostRecentNativeSharedCache;
    SAMountStatusTracker * _mountStatusTracker;
    NSMutableArray * _namesToUseDsymForUUID;
    bool  _nextSampleIsFirstSamplingAllProcesses;
    bool  _nextSampleIsFirstSamplingAllThreads;
    unsigned int  _numActiveCPUs;
    unsigned long long  _numSamples;
    unsigned long long  _numWakeups;
    unsigned long long  _numWakeupsLimit;
    bool  _omitSensitiveStrings;
    NSString * _osBuildVersion;
    NSString * _osProductName;
    NSString * _osProductVersion;
    NSMutableSet * _pidsToTrack;
    unsigned long long  _previousSampleTimestamp;
    unsigned int  _previousStackshotBufferSize;
    NSString * _reason;
    NSMutableSet * _rootKernelFrames;
    double  _sampleIntervalLimit;
    bool  _sampleOnlyMainThreads;
    NSMutableArray * _sampleTimestamps;
    bool  _sanitizePaths;
    NSMutableArray * _sharedCaches;
    bool  _shouldGatherKextStat;
    NSString * _signature;
    bool  _stackshotsOnlyIncludeSpecificProcesses;
    SATimestamp * _startTime;
    NSString * _stepsNote;
    unsigned long long  _targetHIDEventMachAbs;
    NSString * _targetProcessBundleBuildVersion;
    NSString * _targetProcessBundleId;
    NSString * _targetProcessBundleProductBuildVersion;
    NSString * _targetProcessBundleProjectName;
    NSString * _targetProcessBundleShortVersion;
    NSString * _targetProcessBundleSourceVersion;
    NSString * _targetProcessBundleVersion;
    NSString * _targetProcessCommerceAppID;
    NSString * _targetProcessCommerceExternalID;
    int  _targetProcessId;
    NSString * _targetProcessVendorID;
    SATask * _targetTask;
    unsigned long long  _targetThreadId;
    NSMutableDictionary * _tasksByPid;
    NSMutableDictionary * _tasksByUniquePid;
    unsigned int  _threadPolicyVersion;
    SATimestamp * _timeWhenTransitionedToSamplingAllProcesses;
    SATimestamp * _timeWhenTransitionedToSamplingAllThreads;
    double  _wakeupsDuration;
    double  _wakeupsLimitDuration;
    unsigned int  _workQueueHardThreadLimit;
    unsigned int  _workQueueSoftThreadLimit;
    double  _writeDuration;
    double  _writeLimitDuration;
    SAWSUpdateDataStore * _wsDataStore;
}

@property (copy) NSString *actionTaken;
@property struct _CSArchitecture { int x1; int x2; } arch;
@property double attemptedSamplingInterval;
@property (copy) NSString *bootArgs;
@property unsigned long long bytesWritten;
@property unsigned long long bytesWrittenLimit;
@property double cpuDuration;
@property double cpuLimit;
@property double cpuLimitDuration;
@property (readonly) SAFrame *cpuSignalHandlerStackLeafKernelFrame;
@property double cpuUsed;
@property unsigned long long dataGatheringOptions;
@property unsigned long long dataSource;
@property unsigned long long dataStyle;
@property (copy) NSString *durationNote;
@property (retain) SATimestamp *endTime;
@property (copy) NSString *event;
@property (copy) NSString *eventNote;
@property double extraDuration;
@property (copy) NSString *hardwareModel;
@property bool haveKPerfSched;
@property (readonly) NSArray *hidEvents;
@property double kPerfPETSampleIntervalLimit;
@property bool keepMicrostackshotsWithoutLoadInfo;
@property bool keepStateBetweenSampleIndexes;
@property (readonly) NSArray *kernelCaches;
@property (readonly) NSString *kernelVersion;
@property (readonly, copy) NSString *kextStat;
@property (readonly) double lastWakeTime;
@property struct mach_timebase_info { unsigned int x1; unsigned int x2; } machTimebase;
@property (copy) NSString *machineArchitecture;
@property (readonly) SAMountStatusTracker *mountStatusTracker;
@property unsigned int numActiveCPUs;
@property unsigned long long numSamples;
@property unsigned long long numWakeups;
@property unsigned long long numWakeupsLimit;
@property bool omitSensitiveStrings;
@property (copy) NSString *osBuildVersion;
@property (copy) NSString *osProductName;
@property (copy) NSString *osProductVersion;
@property (copy) NSString *reason;
@property (readonly) NSMutableSet *rootKernelFrames;
@property bool sampleOnlyMainThreads;
@property (readonly) NSArray *sampleTimestamps;
@property bool sanitizePaths;
@property (readonly) NSArray *sharedCaches;
@property bool shouldGatherKextStat;
@property (copy) NSString *signature;
@property bool stackshotsOnlyIncludeSpecificProcesses;
@property (retain) SATimestamp *startTime;
@property (copy) NSString *stepsNote;
@property unsigned long long targetHIDEventMachAbs;
@property (readonly) SATask *targetProcess;
@property (readonly) NSString *targetProcessAbsolutePath;
@property (readonly) NSString *targetProcessBundleBuildVersion;
@property (readonly) NSString *targetProcessBundleId;
@property (readonly) NSString *targetProcessBundleName;
@property (readonly) NSString *targetProcessBundleProductBuildVersion;
@property (readonly) NSString *targetProcessBundleProjectName;
@property (readonly) NSString *targetProcessBundleShortVersion;
@property (readonly) NSString *targetProcessBundleSourceVersion;
@property (readonly) NSString *targetProcessBundleVersion;
@property (readonly) NSString *targetProcessCommerceAppID;
@property (readonly) NSString *targetProcessCommerceExternalID;
@property int targetProcessId;
@property (readonly) NSString *targetProcessName;
@property (readonly) NSString *targetProcessVendorID;
@property unsigned long long targetThreadId;
@property (readonly) NSDictionary *tasksByPid;
@property (readonly) NSDictionary *tasksByUniquePid;
@property (readonly) SATimestamp *timeWhenTransitionedToSamplingAllProcesses;
@property (readonly) SATimestamp *timeWhenTransitionedToSamplingAllThreads;
@property double wakeupsDuration;
@property double wakeupsLimitDuration;
@property (readonly) unsigned int workQueueHardThreadLimit;
@property (readonly) unsigned int workQueueSoftThreadLimit;
@property double writeDuration;
@property double writeLimitDuration;

+ (bool)canOpenFileAsKTraceFile:(const char *)arg1 errorOut:(id*)arg2;
+ (id)sampleStoreForSpindumpFile:(const char *)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_addKCDataStackshot:(id)arg1 timestamp:(id)arg2 sampleIndex:(unsigned long long)arg3 shouldSkipSampleOut:(bool*)arg4 backfillKPerf:(bool)arg5 addStaticInfoOnly:(bool)arg6;
- (int)_addKPerfDataFromKTraceSession:(struct ktrace_session { }*)arg1 beforeMachAbsTime:(unsigned long long)arg2 sharedCache64bit:(id)arg3 sharedCache32bit:(id)arg4;
- (long long)_addMicrostackshotFromData:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6;
- (id)_lastTaskOnOrBeforeTimestamp:(id)arg1 inTasks:(id)arg2;
- (id)actionTaken;
- (void)addAuxiliaryData:(id)arg1;
- (void)addHidEvent:(id)arg1;
- (unsigned long long)addKCDataStackshot:(id)arg1;
- (unsigned long long)addKCDataStackshot:(id)arg1 returningTimestamp:(id*)arg2;
- (unsigned long long)addKCDataStackshots:(id)arg1 createSeparateSamplePerStackshot:(bool)arg2;
- (unsigned long long)addKCDataThreadV4:(const struct thread_snapshot_v4 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; }*)arg1 threadV2:(const struct thread_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; }*)arg2 deltaThreadV3:(const struct thread_delta_snapshot_v3 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned long long x13; unsigned long long x14; }*)arg3 deltaThreadV2:(const struct thread_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; }*)arg4 timestamp:(id)arg5 sampleIndex:(unsigned long long)arg6 stack:(id)arg7 name:(const char *)arg8 waitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg9 instructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg10 task:(id)arg11 taskIsSuspended:(bool)arg12;
- (id)addKernelStack:(id)arg1;
- (long long)addMicrostackshotsFromData:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6;
- (int)addMicrostackshotsFromFile:(id)arg1 ofTypes:(int)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6;
- (void)addProcessInfoFromTailspin:(id)arg1;
- (void)addSharedCache:(id)arg1;
- (void)addTask:(id)arg1;
- (void)addTimestamp:(id)arg1;
- (struct _CSArchitecture { int x1; int x2; })arch;
- (double)attemptedSamplingInterval;
- (void)backfillTask:(id)arg1 lastSampleIndex:(unsigned long long)arg2 timestamp:(id)arg3 haveSnap:(bool)arg4 terminatedThreadsUserTimeInNs:(unsigned long long)arg5 terminatedThreadsSystemTimeInNs:(unsigned long long)arg6 terminatedThreadsCycles:(unsigned long long)arg7 terminatedThreadsInstructions:(unsigned long long)arg8 suspendCount:(unsigned int)arg9 pageins:(unsigned int)arg10 isDarwinBG:(bool)arg11 isForeground:(bool)arg12 isBoosted:(bool)arg13 isDirty:(bool)arg14 haveWQFlags:(bool)arg15 wqExceededTotalThreadLimit:(bool)arg16 wqExceededConstrainedThreadLimit:(bool)arg17 haveMem:(bool)arg18 taskSizeInBytes:(unsigned long long)arg19 haveLatencyQos:(bool)arg20 latencyQos:(unsigned int)arg21;
- (void)backfillThread:(id)arg1 inTask:(id)arg2 lastSampleIndex:(unsigned long long)arg3 timestamp:(id)arg4 haveName:(bool)arg5 name:(const char *)arg6 haveDispatchQueueId:(bool)arg7 dispatchQueueId:(unsigned long long)arg8 leafKernelFrame:(id)arg9 haveUserStack:(bool)arg10 leafUserFrame:(id)arg11 haveSched:(bool)arg12 systemCpuTimeNs:(unsigned long long)arg13 userCpuTimeNs:(unsigned long long)arg14 basePriority:(int)arg15 scheduledPriority:(int)arg16 state:(unsigned int)arg17 threadQos:(unsigned char)arg18 threadRequestedQos:(unsigned char)arg19 threadRequestedQosOverride:(unsigned char)arg20 threadQosPromote:(unsigned char)arg21 threadQosIpcOverride:(unsigned char)arg22 threadQosSyncIpcOverride:(unsigned char)arg23 haveCycIns:(bool)arg24 instructions:(unsigned long long)arg25 cycles:(unsigned long long)arg26 haveSnap:(bool)arg27 ioTier:(unsigned char)arg28 isIOPassive:(bool)arg29 isDarwinBG:(bool)arg30 isSuspended:(bool)arg31 isGlobalForcedIdle:(bool)arg32 isIdleWorkQueue:(bool)arg33 lastMadeRunnableTime:(id)arg34 isOnCore:(bool)arg35;
- (id)binaryFormat;
- (id)bootArgs;
- (unsigned long long)bytesWritten;
- (unsigned long long)bytesWrittenLimit;
- (bool)cacheLoadInfoForProcess:(int)arg1;
- (double)cpuDuration;
- (double)cpuLimit;
- (double)cpuLimitDuration;
- (id)cpuSignalHandlerStackLeafKernelFrame;
- (double)cpuUsed;
- (unsigned long long)dataGatheringOptions;
- (unsigned long long)dataSource;
- (unsigned long long)dataStyle;
- (void)dealloc;
- (id)durationNote;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (void)enumerateTasks:(id /* block */)arg1;
- (id)event;
- (id)eventNote;
- (double)extraDuration;
- (id)fanSpeedClosestToTimestamp:(id)arg1;
- (bool)findCpuSignalHandlerStackLeafKernelFrame;
- (void)finishedSamplingLiveSystem;
- (void)gatherBootArgs;
- (void)gatherExtraInfoForTargetProcess:(id)arg1;
- (void)gatherHardwareModel;
- (void)gatherKernelVersion;
- (void)gatherKextStat;
- (void)gatherMachineArchitecture;
- (void)gatherNumActiveCPUs;
- (void)gatherOsVersions;
- (void)gatherWorkQueueHardThreadLimit;
- (void)gatherWorkQueueSoftThreadLimit;
- (id)hardwareModel;
- (bool)haveKPerfSched;
- (id)hidEvents;
- (id)idleThreadSet;
- (unsigned long long)indexOfFirstSampleOnOrAfterTimestamp:(id)arg1;
- (unsigned long long)indexOfLastSampleOnOrBeforeTimestamp:(id)arg1;
- (id)init;
- (id)initForFileParsing;
- (id)initForLiveSampling;
- (id)initWithCoder:(id)arg1;
- (bool)initWithPAStyleCoder:(id)arg1;
- (bool)isEmpty;
- (double)kPerfPETSampleIntervalLimit;
- (bool)keepMicrostackshotsWithoutLoadInfo;
- (bool)keepStateBetweenSampleIndexes;
- (id)kernelCaches;
- (id)kernelVersion;
- (id)kextStat;
- (void)kperfExecString:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 state:(id)arg2;
- (void)kperfLostEvents:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 state:(id)arg2;
- (void)kperfNewThread:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 state:(id)arg2;
- (void)kperfRecord:(struct kpdecode_record { unsigned long long x1; unsigned long long x2; unsigned long long x3; int x4; struct { BOOL x_5_1_1[20]; } x5; struct { unsigned int x_6_1_1; unsigned long long x_6_1_2[4]; } x6; struct { int x_7_1_1; int x_7_1_2; unsigned long long x_7_1_3; } x7; struct kpdecode_callstack { unsigned int x_8_1_1; unsigned int x_8_1_2; unsigned long long x_8_1_3[128]; } x8; struct kpdecode_callstack { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned long long x_9_1_3[128]; } x9; struct kpdecode_pmc { int x_10_1_1; unsigned long long x_10_1_2[32]; } x10; struct { unsigned int x_11_1_1; unsigned int x_11_1_2; unsigned int x_11_1_3; unsigned int x_11_1_4; } x11; struct { unsigned int x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; unsigned long long x_12_1_5; } x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; unsigned int x_13_1_3; short x_13_1_4; short x_13_1_5; unsigned int x_13_1_6 : 3; unsigned int x_13_1_7 : 3; unsigned int x_13_1_8 : 3; unsigned int x_13_1_9 : 3; } x13; }*)arg1 state:(id)arg2 frameIterator:(id)arg3 sharedCache64bit:(id)arg4 sharedCache32bit:(id)arg5;
- (void)kperfSample:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 state:(id)arg2;
- (void)kperfTimerFire:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 state:(id)arg2;
- (id)lastTaskWithPid:(int)arg1;
- (id)lastTaskWithPid:(int)arg1 onOrBeforeTimestamp:(id)arg2;
- (id)lastTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2;
- (id)lastTaskWithUniquePid:(unsigned long long)arg1;
- (id)lastTaskWithUniquePid:(unsigned long long)arg1 onOrBeforeTimestamp:(id)arg2;
- (double)lastWakeTime;
- (struct mach_timebase_info { unsigned int x1; unsigned int x2; })machTimebase;
- (id)machineArchitecture;
- (id)mountStatusTracker;
- (unsigned int)numActiveCPUs;
- (unsigned long long)numSamples;
- (unsigned long long)numWakeups;
- (unsigned long long)numWakeupsLimit;
- (bool)omitSensitiveStrings;
- (id)osBuildVersion;
- (id)osProductName;
- (id)osProductVersion;
- (bool)parseKTraceFile:(const char *)arg1 warningsOut:(id)arg2 errorOut:(id*)arg3;
- (void)postprocess;
- (void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 endSampleIndex:(unsigned long long)arg2 startDisplayIndex:(unsigned long long)arg3 toStream:(id)arg4;
- (id)reason;
- (void)removeAllData;
- (id)rootKernelFrames;
- (bool)sampleOnlyMainThreads;
- (id)sampleTimestamps;
- (bool)sanitizePaths;
- (bool)saveBinaryFormatToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)setActionTaken:(id)arg1;
- (void)setArch:(struct _CSArchitecture { int x1; int x2; })arg1;
- (void)setAttemptedSamplingInterval:(double)arg1;
- (void)setBootArgs:(id)arg1;
- (void)setBytesWritten:(unsigned long long)arg1;
- (void)setBytesWrittenLimit:(unsigned long long)arg1;
- (void)setCpuDuration:(double)arg1;
- (void)setCpuLimit:(double)arg1;
- (void)setCpuLimitDuration:(double)arg1;
- (void)setCpuUsed:(double)arg1;
- (void)setDataGatheringOptions:(unsigned long long)arg1;
- (void)setDataSource:(unsigned long long)arg1;
- (void)setDataStyle:(unsigned long long)arg1;
- (void)setDurationNote:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventNote:(id)arg1;
- (void)setExtraDuration:(double)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHaveKPerfSched:(bool)arg1;
- (void)setKPerfPETSampleIntervalLimit:(double)arg1;
- (void)setKeepMicrostackshotsWithoutLoadInfo:(bool)arg1;
- (void)setKeepStateBetweenSampleIndexes:(bool)arg1;
- (void)setMachTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg1;
- (void)setMachineArchitecture:(id)arg1;
- (void)setNumActiveCPUs:(unsigned int)arg1;
- (void)setNumSamples:(unsigned long long)arg1;
- (void)setNumWakeups:(unsigned long long)arg1;
- (void)setNumWakeupsLimit:(unsigned long long)arg1;
- (void)setOmitSensitiveStrings:(bool)arg1;
- (void)setOsBuildVersion:(id)arg1;
- (void)setOsProductName:(id)arg1;
- (void)setOsProductVersion:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSampleOnlyMainThreads:(bool)arg1;
- (void)setSanitizePaths:(bool)arg1;
- (void)setShouldGatherKextStat:(bool)arg1;
- (void)setSignature:(id)arg1;
- (void)setStackshotsOnlyIncludeSpecificProcesses:(bool)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStepsNote:(id)arg1;
- (void)setTargetHIDEventMachAbs:(unsigned long long)arg1;
- (void)setTargetProcessId:(int)arg1;
- (bool)setTargetProcessWithHint:(id)arg1;
- (void)setTargetThreadId:(unsigned long long)arg1;
- (void)setWakeupsDuration:(double)arg1;
- (void)setWakeupsLimitDuration:(double)arg1;
- (void)setWriteDuration:(double)arg1;
- (void)setWriteLimitDuration:(double)arg1;
- (id)sharedCaches;
- (bool)shouldGatherKextStat;
- (id)signature;
- (bool)stackshotsOnlyIncludeSpecificProcesses;
- (id)startTime;
- (void)startingSamplingLiveSystem;
- (id)stepsNote;
- (void)symbolicate;
- (unsigned long long)targetHIDEventMachAbs;
- (id)targetProcess;
- (id)targetProcessAbsolutePath;
- (id)targetProcessBundleBuildVersion;
- (id)targetProcessBundleId;
- (id)targetProcessBundleName;
- (id)targetProcessBundleProductBuildVersion;
- (id)targetProcessBundleProjectName;
- (id)targetProcessBundleShortVersion;
- (id)targetProcessBundleSourceVersion;
- (id)targetProcessBundleVersion;
- (id)targetProcessCommerceAppID;
- (id)targetProcessCommerceExternalID;
- (int)targetProcessId;
- (id)targetProcessName;
- (id)targetProcessVendorID;
- (unsigned long long)targetThreadId;
- (id)taskForKCDataDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 machineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg4 timestamp:(id)arg5 sharedCache:(id)arg6;
- (id)taskForKCDataTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 machineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg4 timestamp:(id)arg5 sharedCache:(id)arg6;
- (id)taskForMicrostackshotTask:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1 loadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 machineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg4 sharedCache:(id)arg5;
- (id)taskForPid:(int)arg1 andName:(const char *)arg2 didExecAtTimestamp:(id)arg3 sharedCache:(id)arg4;
- (id)taskWithPid:(int)arg1 atTimestamp:(id)arg2;
- (id)taskWithPid:(int)arg1 orTid:(unsigned long long)arg2 atTimestamp:(id)arg3;
- (id)taskWithUniquePid:(unsigned long long)arg1 atTimestamp:(id)arg2;
- (id)tasksByPid;
- (id)tasksByUniquePid;
- (id)tidToPidDict;
- (id)tidsForPid:(int)arg1;
- (id)timeWhenTransitionedToSamplingAllProcesses;
- (id)timeWhenTransitionedToSamplingAllThreads;
- (void)useDsymForUUIDFor:(id)arg1;
- (double)wakeupsDuration;
- (double)wakeupsLimitDuration;
- (unsigned int)workQueueHardThreadLimit;
- (unsigned int)workQueueSoftThreadLimit;
- (double)writeDuration;
- (double)writeLimitDuration;

@end
