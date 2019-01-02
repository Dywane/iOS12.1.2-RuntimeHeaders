/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer {
    NSObject<OS_dispatch_semaphore> * _commitAndResetSem;
    void * _completedCallbackBlockPtr;
    MTLIOAccelDevice<MTLDevice> * _device;
    void * _scheduledCallbackBlockPtr;
    struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; id x7; char *x8; struct IOAccelSegmentListHeader {} *x9; struct IOAccelSegmentResourceListHeader {} *x10; struct IOAccelSegmentResourceDescriptorGroup {} *x11; struct IOAccelResourceList { unsigned short x_12_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; unsigned int x_12_1_5; unsigned int x_12_1_6; unsigned int x_12_1_7; unsigned int x_12_1_8; unsigned int x_12_1_9; unsigned int x_12_1_10; unsigned int x_12_1_11; int (*x_12_1_12)(); void *x_12_1_13; } x12; id x13; unsigned long long x14; unsigned long long x15; id *x16; struct MTLIOAccelCommandBufferResourceInfo {} x17; id x18; id x19; unsigned long long x20; struct IOAccelSegmentListShmemHeader {} *x21; struct IOAccelSegmentKernelCommmandListHeader {} *x22; unsigned int x23; unsigned int x24; } * _storage;
    unsigned long long * _submitToHardwareTimeStampPointer;
}

@property (readonly) struct MTLIOAccelCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; unsigned int x6; bycopy BOOL x7; BOOL x8; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x9; long x10; void*x11; void*x12; short x13; out void*x14; const BOOL x15; void*x16; unsigned int x17; in float x18; out void*x19; struct __IOSurface {} *x20; unsigned int x21 : 56; unsigned int x22 : 8; unsigned int x23; }*commandBufferResourceInfo;
@property (readonly) struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; id x7; char *x8; struct IOAccelSegmentListHeader {} *x9; struct IOAccelSegmentResourceListHeader {} *x10; struct IOAccelSegmentResourceDescriptorGroup {} *x11; struct IOAccelResourceList { unsigned short x_12_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; unsigned int x_12_1_5; unsigned int x_12_1_6; unsigned int x_12_1_7; unsigned int x_12_1_8; unsigned int x_12_1_9; unsigned int x_12_1_10; unsigned int x_12_1_11; int (*x_12_1_12)(); void *x_12_1_13; } x12; id x13; unsigned long long x14; unsigned long long x15; id *x16; struct MTLIOAccelCommandBufferResourceInfo {} x17; id x18; id x19; unsigned long long x20; struct IOAccelSegmentListShmemHeader {} *x21; struct IOAccelSegmentKernelCommmandListHeader {} *x22; unsigned int x23; unsigned int x24; }*commandBufferStorage;
@property (readonly) <MTLDevice> *device;
@property (readonly) struct IOAccelResourceList { unsigned short x1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; }*ioAccelResourceList;

- (void)_debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void*)_reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (id)akPrivateResourceList;
- (id)akResourceList;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)arg1;
- (void)beginSegment:(void*)arg1;
- (struct MTLIOAccelCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; unsigned int x6; bycopy BOOL x7; BOOL x8; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x9; long x10; void*x11; void*x12; short x13; out void*x14; const BOOL x15; void*x16; unsigned int x17; in float x18; out void*x19; struct __IOSurface {} *x20; unsigned int x21 : 56; unsigned int x22 : 8; unsigned int x23; }*)commandBufferResourceInfo;
- (struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; id x7; char *x8; struct IOAccelSegmentListHeader {} *x9; struct IOAccelSegmentResourceListHeader {} *x10; struct IOAccelSegmentResourceDescriptorGroup {} *x11; struct IOAccelResourceList { unsigned short x_12_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; unsigned int x_12_1_5; unsigned int x_12_1_6; unsigned int x_12_1_7; unsigned int x_12_1_8; unsigned int x_12_1_9; unsigned int x_12_1_10; unsigned int x_12_1_11; int (*x_12_1_12)(); void *x_12_1_13; } x12; id x13; unsigned long long x14; unsigned long long x15; id *x16; struct MTLIOAccelCommandBufferResourceInfo {} x17; id x18; id x19; unsigned long long x20; struct IOAccelSegmentListShmemHeader {} *x21; struct IOAccelSegmentKernelCommmandListHeader {} *x22; unsigned int x23; unsigned int x24; }*)commandBufferStorage;
- (void)commit;
- (void)commitAndReset;
- (void)commitEncoder;
- (void)dealloc;
- (id)device;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSubmitSleepMS:(unsigned int)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)endCurrentSegment;
- (void)getCurrentKernelCommandBufferPointer:(void**)arg1 end:(void**)arg2;
- (void)getCurrentKernelCommandBufferStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (struct IOAccelSegmentListHeader { unsigned long long x1; unsigned int x2; unsigned int x3; struct IOAccelSegmentResourceListHeader { unsigned long long x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; struct IOAccelSegmentResourceDescriptorGroup { unsigned int x_6_2_1[6]; unsigned long long x_6_2_2[6]; unsigned short x_6_2_3[6]; unsigned short x_6_2_4; unsigned short x_6_2_5; } x_4_1_6[0]; } x4[0]; }*)getSegmentListHeader;
- (void)getSegmentListPointerStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (void)growKernelCommandBuffer:(unsigned long long)arg1;
- (void)growSegmentList;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2 synchronousDebugMode:(bool)arg3;
- (struct IOAccelResourceList { unsigned short x1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; }*)ioAccelResourceList;
- (void)kernelCommandCollectTimeStamp;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)setCurrentKernelCommandBufferPointer:(void*)arg1;
- (void)setCurrentSegmentListPointer:(void*)arg1;
- (void)setLabel:(id)arg1;
- (void)validate;

@end
